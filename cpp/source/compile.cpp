#include "compile.h"
#include "antlr4-runtime.h"
#include <optional>
#include "errors.h"
#include <iostream>
#include "tree/braces.h"
#include "errors.h"
#include "constants.h"
#include "tree/virtual_module_group.h"
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
    // parser.setTrace(true);
    read_signatures(parser, parser.root());
    parser.reset();
    compile_root(parser, parser.root());
    
    return module;
}

void ModuleCompiler::read_signatures(iris_grammarParser & parser, iris_grammarParser::RootContext* node) {
    // This method is where we will compile all of the signatures internal and external so we can know what exists globally
    for (auto class_definition_node : node->class_definition()) {
        read_class_definition(parser, class_definition_node);
    }
    
    for (auto statement : node->statement()) {
        read_statement(parser, statement);
    }

    for (auto function_definition : node->function_definition()) {
        read_function_definition(parser, function_definition);
    }
}

void ModuleCompiler::read_class_definition(iris_grammarParser & parser, iris_grammarParser::Class_definitionContext* node) {
    std::shared_ptr<Label> name;
    unordered_map<string, std::shared_ptr<Declaration>> struct_members;
    // the base_type is set on the second pass in case it derives a type defined after it.
    unordered_map<string, std::weak_ptr<ClassMethodDefinition>> member_functions;
    unordered_map<string, std::weak_ptr<ClassOperatorDefinition>> operator_functions;
    unordered_map<string, vector<string>> compiler_directives;

    name = std::make_shared<Label>(module, node->name->getText());

    auto class_block_item_nodes = node->class_block_item();

    // class body
    for (auto class_block_item_node : class_block_item_nodes) {
        // compiler directives
        auto class_compiler_directive_node = class_block_item_node->class_compiler_directive();
        if (class_compiler_directive_node) {
            auto tag = class_compiler_directive_node->tag->getText();
            if (tag == "comp_name") {
                compiler_directives.insert_or_assign(
                    "comp_name",
                    vector<string>{
                        class_compiler_directive_node->TARGET_LANGUAGE()->getText(),
                        class_compiler_directive_node->label->getText()
                    }
                );
            } else if (tag == "comp_precision") {
                compiler_directives.insert_or_assign(
                    "comp_precision",
                    vector<string>{
                        class_compiler_directive_node->precision_qualifier()->getText()
                    }
                );
            }
        }

        auto class_method_definition_node = class_block_item_node->class_method_definition();
        if (class_method_definition_node) {
            auto class_method_definition = read_class_method_definition(parser, class_method_definition_node);
            member_functions.insert_or_assign(class_method_definition->name->value, class_method_definition);
        }

        auto class_operator_definition_node = class_block_item_node->class_operator_definition();
        if (class_operator_definition_node) {
            auto class_operator_definition = read_class_operator_definition(parser, class_operator_definition_node);
            operator_functions.insert_or_assign(class_operator_definition->name->value, class_operator_definition);
        }
    }

    auto class_definition = std::make_shared<ClassDefinition>(module, name, std::nullopt, struct_members, member_functions, operator_functions, compiler_directives);
    module->classes.insert_or_assign(name->value, class_definition);
}

void ModuleCompiler::read_function_definition(iris_grammarParser & parser, iris_grammarParser::Function_definitionContext* node) {
    std::shared_ptr<Label> name;
    vector<std::shared_ptr<Declaration>> arguments;
    std::shared_ptr<BaseType> return_type;

    // Compile signature
    auto func_name_token = node->LABEL();
    name = std::make_shared<Label>(module, func_name_token->getText());
    for (auto argument : node->declaration()) {
        arguments.push_back(compile_declaration(parser, argument));
    }

    auto func_name_symbol = func_name_token->getSymbol();
    name->line_number = func_name_symbol->getLine();
    name->column_number = func_name_symbol->getCharPositionInLine();

    auto type_node = node->type();
    if (type_node) {
        return_type = compile_type(parser, type_node);
    } else {
        auto void_ret = std::make_shared<Label>(module, "none");
        void_ret->line_number = name->line_number;
        void_ret->column_number = name->column_number;
        return_type = std::make_shared<Type>(module, void_ret, module->classes.at("none"));
        return_type->line_number = name->line_number;
        return_type->column_number = name->column_number;
    }

    auto function = std::make_shared<FunctionDefinition>(module, name, arguments, return_type);
    function->line_number = name->line_number;
    function->column_number = name->column_number;
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
        return std::make_shared<Statement>(module, declaration, function);
    }

    auto expr_node = node->expr();
    if (expr_node) {
        std::shared_ptr<Expression> expression = compile_expression(parser, expr_node);
        return std::make_shared<Statement>(module, expression, function);
    }

    auto import_statement_node = node->import_statement();
    if (import_statement_node) {
        return compile_import(parser, import_statement_node);
    }
    
    throw_error(ErrorType::SYNTAX_ERROR, module, node->start->getLine(), node->start->getCharPositionInLine(), "Statement not implemented yet: \"" + node->start->getText() + "\".");
}

vector<std::shared_ptr<LanguageNode>> ModuleCompiler::compile_block(iris_grammarParser & parser, iris_grammarParser::BlockContext* node) {
    vector<std::shared_ptr<LanguageNode>> ret;
    // compile body of whatever block
    for (auto block_item_node : node->block_item()) {
        if (auto tagged_node = dynamic_cast<iris_grammarParser::BlockStatementContext *>(block_item_node)) {
            ret.push_back(compile_statement(parser, tagged_node->statement(), current_function));
        } else if (auto tagged_node = dynamic_cast<iris_grammarParser::BlockWhileBlockContext *>(block_item_node)) {
            ret.push_back(compile_while_block(parser, tagged_node->while_block()));
        }
    }
    return ret;
}

std::shared_ptr<WhileLoop> ModuleCompiler::compile_while_block(iris_grammarParser & parser, iris_grammarParser::While_blockContext* node) {
    auto expression = compile_expression(parser, node->expr());
    auto body = compile_block(parser, node->block());
    return std::make_shared<WhileLoop>(module, expression, body);
}

std::shared_ptr<DoWhileLoop> ModuleCompiler::compile_do_while_block(iris_grammarParser & parser, iris_grammarParser::Do_while_blockContext* node) {
    auto body = compile_block(parser, node->block());
    auto expression = compile_expression(parser, node->expr());
    return std::make_shared<DoWhileLoop>(module, expression, body);
}

std::shared_ptr<Import> ModuleCompiler::compile_import(iris_grammarParser & parser, iris_grammarParser::Import_statementContext* node) {
    if (!module->parent.has_value()) {
        throw_error(ErrorType::IMPORT_ERROR, module, node->start->getLine(), node->start->getCharPositionInLine(), "Cannot import into module \"" + module->name + "\" which does not have a parent namespace.");
    }
    std::weak_ptr<VirtualModuleGroup> current_group = module->parent.value();
    std::shared_ptr<Module> destination_module = nullptr;
    for (const auto file_path_part_node : node->file_path_part()) {
        auto file_path_part = file_path_part_node->getText();
        if (destination_module) {
            throw_error(ErrorType::IMPORT_ERROR, module, file_path_part_node->start->getLine(), file_path_part_node->start->getCharPositionInLine(), "In module \"" + module->name + "\" an attempt was made to import a namespace or module \"" + file_path_part + "\" from an existing module named \"" + destination_module->name + "\".");
        }
        auto current_group_lock = current_group.lock();
        if (file_path_part == ".") {
            // go up
            if (current_group_lock->parent.has_value()) {
                current_group = current_group_lock->parent.value();
            } else {
                throw_error(ErrorType::IMPORT_ERROR, module, file_path_part_node->start->getLine(), file_path_part_node->start->getCharPositionInLine(), "In namespace \"" + current_group.lock()->name + "\" an attempt was made to import from a parent namespace when there is no parent namespace.");
            }
        } else {
            auto next_destination = current_group_lock->get(file_path_part);
            if (std::holds_alternative<std::optional<std::weak_ptr<VirtualModuleGroup>>>(next_destination)) {
                auto destination = std::get<std::optional<std::weak_ptr<VirtualModuleGroup>>>(next_destination);
                if (destination.has_value()) {
                    current_group = destination.value().lock();
                } else {
                    throw std::runtime_error("Importing a null module group value with an existing key should not be possible, please make a github issue.");
                }
            } else {
                // FOUND MODULE
                auto destination = std::get<std::weak_ptr<Module>>(next_destination);
                destination_module = destination.lock();
            }
        }
    }

    if (!destination_module) {
        throw_error(ErrorType::IMPORT_ERROR, module, node->start->getLine(), node->start->getCharPositionInLine(), "Module not found \"" + node->getText() + "\".");
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
    std::shared_ptr<Expression> result = std::make_shared<Label>(module, "[EXPR NOT YET IMPLEMENTED]");
    if (auto tagged_node = dynamic_cast<iris_grammarParser::BinaryOperatorContext *>(node)) {
        result = compile_binary_operator(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::UnaryOperatorContext *>(node)) {
        result = compile_unary_operator(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::IndexOperatorContext *>(node)) {
        result = compile_index_operator(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::CallContext *>(node)) {
        result = compile_call(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::ConstructorCallContext *>(node)) {
        result = compile_constructor(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::ParenthesesContext *>(node)) {
        result = std::make_shared<Parentheses>(module, compile_expression(parser, tagged_node->expr()));
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::MagnitudeContext *>(node)) {
        result = std::make_shared<Magnitude>(module, compile_expression(parser, tagged_node->expr()));
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::AbsoluteValueContext *>(node)) {
        result = std::make_shared<AbsoluteValue>(module, compile_expression(parser, tagged_node->expr()));
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::TernaryContext *>(node)) {
        result = compile_ternary(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::GetterContext *>(node)) {
        result = compile_getter(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::CastContext *>(node)) {
        result = compile_cast(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::PrimitiveExpressionContext *>(node)) {
        result = compile_primitive(parser, tagged_node->primitive());
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::ReturnContext *>(node)) {
        auto ret_expr = tagged_node->return_statement()->expr();

        if (ret_expr)
            result = std::make_shared<Return>(module, current_function, compile_expression(parser, ret_expr));
        else
            result = std::make_shared<Return>(module, current_function, nullptr);
    }

    result->line_number = node->start->getLine();
    result->column_number = node->start->getCharPositionInLine();
    
    return result;
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

    auto b = node->BOOLEAN();
    if (b) {
        return std::make_shared<Boolean>(module, b->getText() == "true");
    }
    
    throw_error(ErrorType::SYNTAX_ERROR, module, node->start->getLine(), node->start->getCharPositionInLine(), "Primitive not implemented \"" + node->getText() + "\"");
}

std::shared_ptr<FunctionDefinition> ModuleCompiler::compile_function_definition(iris_grammarParser & parser, iris_grammarParser::Function_definitionContext* node) {
    std::shared_ptr<Label> name;
    auto name_token = node->LABEL();
    name = std::make_shared<Label>(module, name_token->getText());
    auto name_symbol = name_token->getSymbol();

    name->line_number = name_symbol->getLine();
    name->column_number = name_symbol->getCharPositionInLine();

    auto function = module->functions.at(name->value);

    current_function = function;

    // compile body
    function->body = compile_block(parser, node->block());

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

    auto type_name_node = node->type_name();

    name = std::make_shared<Label>(module, type_name_node->getText());

    name->line_number = type_name_node->start->getLine();
    name->column_number = type_name_node->start->getCharPositionInLine();
    
    auto precision_node = node->precision_qualifier();

    if (precision_node) {
        precision = precision_node->getText();
    }

    return std::make_shared<Type>(module, name, module->classes.at(name->value), precision, dimensions);
}

std::shared_ptr<Descriptor> ModuleCompiler::compile_descriptor(iris_grammarParser & parser, iris_grammarParser::DescriptorContext* node) {
    std::optional<uint32_t> index = std::nullopt;

    auto index_node = node->INT();

    if (index_node) {
        index = std::stoi(index_node->getText());
    }
    auto descriptor = std::make_shared<Descriptor>(module, node->descriptor_name->getText(), index);
    descriptor->line_number = node->descriptor_name->getLine();
    descriptor->column_number = node->descriptor_name->getCharPositionInLine();
    return descriptor;
}