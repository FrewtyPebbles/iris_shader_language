#include "compile.h"
#include "antlr4-runtime.h"
#include <optional>
#include "error_listener.h"
#include <iostream>

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
}

std::shared_ptr<Expression> ModuleCompiler::compile_expression(iris_grammarParser & parser, iris_grammarParser::ExprContext* node) {
    
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
    std::shared_ptr<Type> type;
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

    return std::make_shared<Declaration>(descriptors, label, type);
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