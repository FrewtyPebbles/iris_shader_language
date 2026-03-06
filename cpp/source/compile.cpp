#include "compile.h"
#include "antlr4-runtime.h"
#include <optional>
#include "error_listener.h"
#include <iostream>
#include "tree/braces.h"
#include "error_listener.h"
#include "constants.h"
#include "virtual_module_group.h"
#include "tree/return.h"


ModuleCompiler::ModuleCompiler() {}

string ModuleCompiler::mangle_name(string name) {
    if (name == "main")
        return name;
    return module->name + "_" + name;
}

std::shared_ptr<Module> ModuleCompiler::compile(string name, string source, std::shared_ptr<VirtualModuleGroup> module_parent) {
    module = Module::create_shared(name, module_parent);
    

    antlr4::ANTLRInputStream stream(source);
    iris_grammarLexer lexer(&stream);

    lexer.removeErrorListeners();

    antlr4::CommonTokenStream tokens(&lexer);

    iris_grammarParser parser(&tokens);
    PreciseErrorListener el;
    parser.addErrorListener(&el);
    parser.setTrace(true);
    read_signatures(parser, parser.root());
    parser.reset();
    compile_root(parser, parser.root());
    
    return module;
}

void ModuleCompiler::read_signatures(iris_grammarParser & parser, iris_grammarParser::RootContext* node) {
    // This method is where we will compile all of the signatures internal and external so we can know what exists globally
    for (auto statement : node->statement()) {
        read_statement(parser, statement);
    }

    for (auto function_definition : node->function_definition()) {
        read_function_definition(parser, function_definition);
    }
}

void ModuleCompiler::read_function_definition(iris_grammarParser & parser, iris_grammarParser::Function_definitionContext* node) {
    std::shared_ptr<Label> name;
    vector<std::shared_ptr<Declaration>> arguments;
    std::shared_ptr<BaseType> return_type;

    // Compile signature
    name = std::make_shared<Label>(module, node->LABEL()->getText());
    for (auto argument : node->declaration()) {
        arguments.push_back(compile_declaration(parser, argument));
    }

    auto type_node = node->type();
    if (type_node) {
        return_type = compile_type(parser, type_node);
    } else {
        return_type = std::make_shared<Type>(module, "none");
    }

    auto function = std::make_shared<FunctionDefinition>(module, name, arguments, return_type);
    module->functions.insert_or_assign(function->name->value, function);
}

void ModuleCompiler::read_statement(iris_grammarParser & parser, iris_grammarParser::StatementContext* node) {
    auto declaration_node = node->declaration();
    if (declaration_node) {
        std::shared_ptr<Declaration> declaration = compile_declaration(parser, declaration_node);
        module->global_declarations.insert_or_assign(declaration->label->value, declaration);
    }
}

void ModuleCompiler::compile_root(iris_grammarParser & parser, iris_grammarParser::RootContext* node) {
    for (auto statement : node->statement()) {
        auto stmt = compile_statement(parser, statement);
        if (stmt)
            module->statements.push_back(stmt);
    }
    for (auto function_definition : node->function_definition()) {
        auto function = compile_function_definition(parser, function_definition);
        module->functions.insert_or_assign(function->name->value, function);
    }
}

std::shared_ptr<Statement> ModuleCompiler::compile_statement(iris_grammarParser & parser, iris_grammarParser::StatementContext* node, std::shared_ptr<FunctionDefinition> function) {
    auto declaration_node = node->declaration();
    if (declaration_node) {
        std::shared_ptr<Declaration> declaration = compile_declaration(parser, declaration_node);
        return std::make_shared<Statement>(declaration, function);
    }

    auto expr_node = node->expr();
    if (expr_node) {
        std::shared_ptr<Expression> expression = compile_expression(parser, expr_node);
        return std::make_shared<Statement>(expression, function);
    }

    auto import_statement_node = node->import_statement();
    if (import_statement_node) {
        module->statements.push_back(compile_import(parser, import_statement_node));
    }
    return nullptr;
}

std::shared_ptr<Import> ModuleCompiler::compile_import(iris_grammarParser & parser, iris_grammarParser::Import_statementContext* node) {
    std::shared_ptr<VirtualModuleGroup> current_group = module->parent;
    if (!current_group) {
        throw std::runtime_error(create_configuration_error_message(node->start->getLine(), node->start->getCharPositionInLine(), "Cannot import into module \"" + module->name + "\" which does not have a parent namespace."));
    }
    std::shared_ptr<Module> destination_module = nullptr;
    for (const auto file_path_part_node : node->file_path_part()) {
        auto file_path_part = file_path_part_node->getText();
        if (destination_module) {
            throw std::runtime_error(create_import_error_message(file_path_part_node->start->getLine(), file_path_part_node->start->getCharPositionInLine(), "In module \"" + module->name + "\" an attempt was made to import a namespace or module \"" + file_path_part + "\" from an existing module named \"" + destination_module->name + "\"."));
        }
        if (file_path_part == ".") {
            // go up
            current_group = current_group->parent;
        } else {
            auto next_destination = current_group->get(file_path_part);
            if (std::holds_alternative<std::shared_ptr<VirtualModuleGroup>>(next_destination)) {
                auto destination = std::get<std::shared_ptr<VirtualModuleGroup>>(next_destination);
                current_group = destination;
            } else {
                // FOUND MODULE
                auto destination = std::get<std::shared_ptr<Module>>(next_destination);
                destination_module = destination;
            }
        }
    }

    if (!destination_module) {
        throw std::runtime_error(create_import_error_message(node->start->getLine(), node->start->getCharPositionInLine(), "Module not found \"" + node->getText() + "\"."));
    }
    vector<ImportName> import_names;

    for (auto import_label_node : node->import_label()) {
        std::shared_ptr<Label> import_name = std::make_shared<Label>(module, import_label_node->import_name->getText());
        auto import_alias_token = import_label_node->import_alias;
        if (import_alias_token) {
            std::shared_ptr<Label> import_alias = std::make_shared<Label>(module, import_alias_token->getText());
            import_names.push_back(ImportName(import_name, import_alias));
        } else {
            import_names.push_back(ImportName(import_name));
        }
    }
    return std::make_shared<Import>(module, destination_module, import_names);
}

std::shared_ptr<Expression> ModuleCompiler::compile_expression(iris_grammarParser & parser, iris_grammarParser::ExprContext* node) {
    if (auto tagged_node = dynamic_cast<iris_grammarParser::BinaryOperatorContext *>(node)) {
        return compile_binary_operator(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::UnaryOperatorContext *>(node)) {
        return compile_unary_operator(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::IndexOperatorContext *>(node)) {
        return compile_index_operator(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::CallContext *>(node)) {
        return compile_call(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::ConstructorCallContext *>(node)) {
        return compile_constructor(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::ParenthesesContext *>(node)) {
        return std::make_shared<Parentheses>(module, compile_expression(parser, tagged_node->expr()));
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::MagnitudeContext *>(node)) {
        return std::make_shared<Magnitude>(module, compile_expression(parser, tagged_node->expr()));
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::AbsoluteValueContext *>(node)) {
        return std::make_shared<AbsoluteValue>(module, compile_expression(parser, tagged_node->expr()));
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::TernaryContext *>(node)) {
        return compile_ternary(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::GetterContext *>(node)) {
        return compile_getter(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::CastContext *>(node)) {
        return compile_cast(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::PrimitiveExpressionContext *>(node)) {
        return compile_primitive(parser, tagged_node->primitive());
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::ReturnContext *>(node)) {
        auto ret_expr = tagged_node->return_statement()->expr();
        if (ret_expr)
            return std::make_shared<Return>(module, compile_expression(parser, ret_expr));
        else
            return std::make_shared<Return>(module);
    }
    
    return std::make_shared<Label>(module, "[EXPR NOT YET IMPLEMENTED]");
}

std::shared_ptr<Ternary> ModuleCompiler::compile_ternary(iris_grammarParser & parser, iris_grammarParser::TernaryContext* node) {
    auto exprs = node->conditional()->expr();
    return std::make_shared<Ternary>(module, compile_expression(parser, exprs[0]), compile_expression(parser, exprs[1]), compile_expression(parser, exprs[2]));
}

std::shared_ptr<IndexOperator> ModuleCompiler::compile_index_operator(iris_grammarParser & parser, iris_grammarParser::IndexOperatorContext* node) {
    auto exprs = node->expr();
    return std::make_shared<IndexOperator>(module, compile_expression(parser, exprs[0]), compile_expression(parser, exprs[1]));
}

std::shared_ptr<UnaryOperator> ModuleCompiler::compile_unary_operator(iris_grammarParser & parser, iris_grammarParser::UnaryOperatorContext* node) {
    return std::make_shared<UnaryOperator>(module, node->op->getText(), compile_expression(parser, node->expr()));
}

std::shared_ptr<Cast> ModuleCompiler::compile_cast(iris_grammarParser & parser, iris_grammarParser::CastContext* node) {
    return std::make_shared<Cast>(module, compile_expression(parser, node->expr()), compile_type(parser, node->type()));
}

std::shared_ptr<Getter> ModuleCompiler::compile_getter(iris_grammarParser & parser, iris_grammarParser::GetterContext* node) {
    auto expr_node = node->expr();
    auto child_node = node->primitive();
    std::__2::shared_ptr<Primitive> label_node = compile_primitive(parser, child_node);
    auto getter = std::make_shared<Getter>(module, compile_expression(parser, expr_node), label_node);
    auto label_token = child_node->start;
    getter->line_number = label_token->getLine();
    getter->column_number = label_token->getCharPositionInLine();
    return getter;
}

std::shared_ptr<BinaryOperator> ModuleCompiler::compile_binary_operator(iris_grammarParser & parser, iris_grammarParser::BinaryOperatorContext* node) {
    auto expr_nodes = node->expr();
    auto op_token = node->op;
    return std::make_shared<BinaryOperator>(module, compile_expression(parser, expr_nodes[0]), op_token->getText(), compile_expression(parser, expr_nodes[1]));
}

std::shared_ptr<Call> ModuleCompiler::compile_constructor(iris_grammarParser & parser, iris_grammarParser::ConstructorCallContext* node) {
    auto type_node = node->type();
    auto type = compile_type(parser, type_node);
    vector<std::shared_ptr<Expression>> args;
    
    for (auto expr_node : node->expr()) {
        args.push_back(compile_expression(parser, expr_node));
    }
    
    auto call = std::make_shared<Call>(module, type, args);
    call->line_number = node->start->getLine();
    call->column_number = node->start->getCharPositionInLine();
    return call;
}

std::shared_ptr<Call> ModuleCompiler::compile_call(iris_grammarParser & parser, iris_grammarParser::CallContext* node) {
    vector<std::shared_ptr<Expression>> args;
    auto expr_nodes = node->expr();
    auto expression = compile_expression(parser, expr_nodes[0]);
    if (module->functions.contains(expr_nodes[0]->getText())) {
        // add function as a function dependency
        current_function->function_dependencies.insert(module->functions.at(expr_nodes[0]->getText()));
    }
    for (size_t i = 1; i < expr_nodes.size(); ++i) {
        args.push_back(compile_expression(parser, expr_nodes[i]));
    }

    auto call = std::make_shared<Call>(module, expression, args, current_function);
    call->line_number = node->start->getLine();
    call->column_number = node->start->getCharPositionInLine();
    return call;
}

std::shared_ptr<Primitive> ModuleCompiler::compile_primitive(iris_grammarParser & parser, iris_grammarParser::PrimitiveContext* node) {
    auto i = node->INT();
    if (i) {
        return std::make_shared<Integer>(module, std::stoi(i->getText()));
    }

    auto f = node->FLOAT();
    if (f) {
        return std::make_shared<Float>(module, std::stod(f->getText()));
    }

    auto l = node->LABEL();
    if (l) {
        return std::make_shared<Label>(module, l->getText());
    }

    return std::make_shared<Label>(module, "!!!ERROR!!!");
}

std::shared_ptr<FunctionDefinition> ModuleCompiler::compile_function_definition(iris_grammarParser & parser, iris_grammarParser::Function_definitionContext* node) {
    string name;
    name = node->LABEL()->getText();

    auto function = module->functions.at(name);

    current_function = function;

    // compile body
    for (auto statement_node : node->block()->statement()) {
        function->body.push_back(compile_statement(parser, statement_node, function));
    }

    current_function = nullptr;

    return function;
}

std::shared_ptr<Declaration> ModuleCompiler::compile_declaration(iris_grammarParser & parser, iris_grammarParser::DeclarationContext* node) {
    std::vector<std::shared_ptr<Descriptor>> descriptors;
    std::shared_ptr<Label> label;
    std::shared_ptr<BaseType> type = nullptr;
    std::shared_ptr<Expression> assignment = nullptr;
    auto descriptor = node->descriptor();
    if (descriptor) {
        descriptors.push_back(compile_descriptor(parser, descriptor));
    }

    label = std::make_shared<Label>(module, node->LABEL()->getText());

    auto type_node = node->type();
    if (type_node)
        type = compile_type(parser, type_node);

    auto assignment_node = node->expr();
    if (assignment_node)
        assignment = compile_expression(parser, assignment_node);

    return std::make_shared<Declaration>(module, descriptors, label, type, assignment);
}

std::shared_ptr<BaseType> ModuleCompiler::compile_type(iris_grammarParser & parser, iris_grammarParser::TypeContext* node) {
    vector<size_t> dimensions;
    std::shared_ptr<Label> name;
    std::optional<string> precision = std::nullopt;
    for (auto dimension : node->INT()) {
        dimensions.push_back(std::stoi(dimension->getText()));
    }
    name = std::make_shared<Label>(module, node->type_name->getText());
    
    auto precision_node = node->precision_qualifier();

    if (precision_node) {
        precision = precision_node->getText();
    }

    return std::make_shared<Type>(module, name->value, precision, dimensions);
}

std::shared_ptr<Descriptor> ModuleCompiler::compile_descriptor(iris_grammarParser & parser, iris_grammarParser::DescriptorContext* node) {
    std::optional<uint32_t> index = std::nullopt;

    auto index_node = node->INT();

    if (index_node) {
        index = std::stoi(index_node->getText());
    }

    return std::make_shared<Descriptor>(node->descriptor_name->getText(), index);
}