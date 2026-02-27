#include "compile.h"
#include "antlr4-runtime.h"

std::shared_ptr<Module> ModuleCompiler::compile(string name, string source) {
    module = std::make_shared<Module>(name);


    antlr4::ANTLRInputStream stream(source);
    iris_grammarLexer lexer(&stream);

    lexer.removeErrorListeners();

    antlr4::CommonTokenStream tokens(&lexer);

    iris_grammarParser parser(&tokens);

    compile_root(parser, parser.root());
    
    return module;
}

void ModuleCompiler::compile_root(iris_grammarParser & parser, iris_grammarParser::RootContext* node) {
    for (auto * statement : node->statement()) {
        compile_statement(parser, statement);
    }
    for (auto * function_definition : node->function_definition()) {
        compile_function_definition(parser, function_definition);
    }
}

void ModuleCompiler::compile_statement(iris_grammarParser & parser, iris_grammarParser::StatementContext* node) {
    
}

void ModuleCompiler::compile_function_definition(iris_grammarParser & parser, iris_grammarParser::Function_definitionContext* node) {
    string name;
    vector<std::shared_ptr<Declaration>> arguments;
    std::shared_ptr<Type> return_type;
    vector<std::shared_ptr<Statement>> body;

    name = node->LABEL()->getText();
    for (auto argument : node->declaration()) {
        compile_declaration(parser, argument);
    }

    module->functions.insert(std::make_pair(name, std::make_shared<FunctionDefinition>(module, name, arguments, return_type, body)));
}

std::shared_ptr<Declaration> ModuleCompiler::compile_declaration(iris_grammarParser & parser, iris_grammarParser::DeclarationContext* node) {
    std::vector<std::shared_ptr<Descriptor>> descriptors;
    string label;
    std::shared_ptr<Type> type;

    for (auto descriptor : node->descriptor()) {
        descriptors.push_back(compile_descriptor(parser, descriptor));
    }

    label = node->LABEL()->getText();

    return std::make_shared<Declaration>(descriptors, label, type);
}

std::shared_ptr<Type> ModuleCompiler::compile_type(iris_grammarParser & parser, iris_grammarParser::TypeContext* node) {
    
}

std::shared_ptr<Descriptor> ModuleCompiler::compile_descriptor(iris_grammarParser & parser, iris_grammarParser::DescriptorContext* node) {

}