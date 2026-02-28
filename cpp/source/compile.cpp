#include "compile.h"
#include "antlr4-runtime.h"
#include <optional>
#include "error_listener.h"
#include <iostream>
#include "tree/braces.h"
#include "error_listener.h"
#include "constants.h"

ModuleCompiler::ModuleCompiler() {}

std::shared_ptr<Module> ModuleCompiler::compile(string name, string source) {
    module = std::make_shared<Module>(name);


    antlr4::ANTLRInputStream stream(source);
    iris_grammarLexer lexer(&stream);

    lexer.removeErrorListeners();

    antlr4::CommonTokenStream tokens(&lexer);

    iris_grammarParser parser(&tokens);
    PreciseErrorListener el;
    parser.addErrorListener(&el);
    parser.setTrace(true);

    compile_root(parser, parser.root());
    
    return module;
}

void ModuleCompiler::compile_root(iris_grammarParser & parser, iris_grammarParser::RootContext* node) {
    for (auto statement : node->statement()) {
        module->statements.push_back(compile_statement(parser, statement));
    }
    for (auto function_definition : node->function_definition()) {
        auto function = compile_function_definition(parser, function_definition);
        module->functions.insert(std::make_pair(function->name, function));
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

    std::shared_ptr<Expression> expression = std::make_shared<Primitive>("[IMPORT NOT YET IMPLEMENTED]");
    return std::make_shared<Statement>(expression);
}

std::shared_ptr<Expression> ModuleCompiler::compile_expression(iris_grammarParser & parser, iris_grammarParser::ExprContext* node) {
    if (auto tagged_node = dynamic_cast<iris_grammarParser::BinaryOperatorContext *>(node)) {
        return compile_binary_operator(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::UnaryOperatorContext *>(node)) {

    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::IndexOperatorContext *>(node)) {

    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::CallContext *>(node)) {
        return compile_call(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::ParenthesesContext *>(node)) {
        return std::make_shared<Parentheses>(compile_expression(parser, tagged_node->expr()));
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::MagnitudeContext *>(node)) {
        return std::make_shared<Magnitude>(compile_expression(parser, tagged_node->expr()));
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::AbsoluteValueContext *>(node)) {
        return std::make_shared<AbsoluteValue>(compile_expression(parser, tagged_node->expr()));
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::TernaryContext *>(node)) {

    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::GetterContext *>(node)) {
        return compile_getter(parser, tagged_node);
    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::CastContext *>(node)) {

    } else if (auto tagged_node = dynamic_cast<iris_grammarParser::PrimitiveExpressionContext *>(node)) {
        return compile_primitive(parser, tagged_node->primitive());
    }
    return std::make_shared<Primitive>("[EXPR NOT YET IMPLEMENTED]");
}

std::shared_ptr<Getter> ModuleCompiler::compile_getter(iris_grammarParser & parser, iris_grammarParser::GetterContext* node) {
    auto expr_node = node->expr();
    auto label_node = node->LABEL();
    auto getter = std::make_shared<Getter>(compile_expression(parser, expr_node), label_node->getText());
    auto label_token = label_node->getSymbol();
    getter->line_number = label_token->getLine();
    getter->column_number = label_token->getCharPositionInLine();
    return getter;
}

std::shared_ptr<BinaryOperator> ModuleCompiler::compile_binary_operator(iris_grammarParser & parser, iris_grammarParser::BinaryOperatorContext* node) {
    auto expr_nodes = node->expr();
    auto op_token = node->op;
    return std::make_shared<BinaryOperator>(compile_expression(parser, expr_nodes[0]), op_token->getText(), compile_expression(parser, expr_nodes[1]));
}

std::shared_ptr<Call> ModuleCompiler::compile_call(iris_grammarParser & parser, iris_grammarParser::CallContext* node) {
    auto type_node = node->type();
    if (type_node) { // type '(' (expr (',' expr)*)? ')'
        auto type = compile_type(parser, type_node);
        vector<std::shared_ptr<Expression>> args;
        
        for (auto expr_node : node->expr()) {
            args.push_back(compile_expression(parser, expr_node));
        }
        
        return std::make_shared<Call>(type, args);
    } else { // expr '(' (expr (',' expr)*)? ')'
        vector<std::shared_ptr<Expression>> args;
        auto expr_nodes = node->expr();
        auto expression = compile_expression(parser, expr_nodes[0]);
        std::shared_ptr<FunctionDefinition> function_definition = nullptr;
        // check if is a label for function dependency lookup:
        if (auto label = std::dynamic_pointer_cast<Primitive>(expression)) {
            if (std::holds_alternative<string>(label->value)) {
                string function_name = std::get<string>(label->value);
                if (module->functions.contains(function_name)) {
                    function_definition = module->functions.at(function_name);
                } else if (BUILT_IN_FUNCTION_NAMES.contains(function_name)) {
                    // pass
                } else {
                    auto token = expr_nodes[0]->start;
                    throw std::runtime_error(create_definition_error_message(token->getLine(), token->getCharPositionInLine(), "Call to undefined identifier \"" + function_name + "\""));
                }
            }
        }
        
        for (size_t i = 1; i < expr_nodes.size(); ++i) {
            args.push_back(compile_expression(parser, expr_nodes[i]));
        }
        
        return std::make_shared<Call>(expression, args, function_definition);
    }
}

std::shared_ptr<Primitive> ModuleCompiler::compile_primitive(iris_grammarParser & parser, iris_grammarParser::PrimitiveContext* node) {
    auto i = node->INT();
    if (i) {
        return std::make_shared<Primitive>(std::stoi(i->getText()));
    }

    auto f = node->FLOAT();
    if (f) {
        return std::make_shared<Primitive>(std::stod(f->getText()));
    }

    auto l = node->LABEL();
    if (l) {
        return std::make_shared<Primitive>(l->getText());
    }

    return std::make_shared<Primitive>("!!!ERROR!!!");
}

std::shared_ptr<FunctionDefinition> ModuleCompiler::compile_function_definition(iris_grammarParser & parser, iris_grammarParser::Function_definitionContext* node) {
    string name;
    vector<std::shared_ptr<Declaration>> arguments;
    std::shared_ptr<Type> return_type;

    // Compile signature
    name = node->LABEL()->getText();
    for (auto argument : node->declaration()) {
        arguments.push_back(compile_declaration(parser, argument));
    }
    auto t = node->type();
    if (t) {
        auto p = t->precision_qualifier();
        std::optional<string> precision = std::nullopt;
        if (p) {
            precision = p->getText();
        }
        vector<size_t> dimensions;
        for (auto & dimension : t->INT()) {
            dimensions.push_back(stoi(dimension->getText()));
        }
        return_type = std::make_shared<Type>(t->type_name->getText(), precision, dimensions);
    } else {
        return_type = std::make_shared<Type>("none");
    }

    auto function = std::make_shared<FunctionDefinition>(module, name, arguments, return_type);

    // compile body
    for (auto statement_node : node->block()->statement()) {
        function->body.push_back(compile_statement(parser, statement_node, function));
    }

    return function;
}

std::shared_ptr<Declaration> ModuleCompiler::compile_declaration(iris_grammarParser & parser, iris_grammarParser::DeclarationContext* node) {
    std::vector<std::shared_ptr<Descriptor>> descriptors;
    string label;
    std::shared_ptr<Type> type = nullptr;
    std::shared_ptr<Expression> assignment = nullptr;
    auto descriptor = node->descriptor();
    if (descriptor) {
        descriptors.push_back(compile_descriptor(parser, descriptor));
    }

    label = node->LABEL()->getText();

    auto type_node = node->type();
    if (type_node)
        type = compile_type(parser, type_node);

    auto assignment_node = node->expr();
    if (assignment_node)
        assignment = compile_expression(parser, assignment_node);

    return std::make_shared<Declaration>(descriptors, label, type, assignment);
}

std::shared_ptr<Type> ModuleCompiler::compile_type(iris_grammarParser & parser, iris_grammarParser::TypeContext* node) {
    vector<size_t> dimensions;
    string name;
    std::optional<string> precision = std::nullopt;
    for (auto dimension : node->INT()) {
        dimensions.push_back(std::stoi(dimension->getText()));
    }
    name = node->type_name->getText();
    
    auto precision_node = node->precision_qualifier();

    if (precision_node) {
        precision = precision_node->getText();
    }

    return std::make_shared<Type>(name, precision, dimensions);
}

std::shared_ptr<Descriptor> ModuleCompiler::compile_descriptor(iris_grammarParser & parser, iris_grammarParser::DescriptorContext* node) {
    std::optional<uint32_t> index = std::nullopt;

    auto index_node = node->INT();

    if (index_node) {
        index = std::stoi(index_node->getText());
    }

    return std::make_shared<Descriptor>(node->descriptor_name->getText(), index);
}