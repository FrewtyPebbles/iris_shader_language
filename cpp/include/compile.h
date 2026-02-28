#pragma once
#include "tree/module.h"
#include <memory>
#include "antlr4-runtime.h"
#include "iris_grammarLexer.h"
#include "iris_grammarParser.h"

#include "tree/declaration.h"
#include "tree/statement.h"
#include "tree/function_definition.h"
#include "tree/descriptor.h"
#include "tree/_type.h"

class ModuleCompiler {
public:
    ModuleCompiler();
    std::shared_ptr<Module> module = nullptr;
    std::shared_ptr<Module> compile(string name, string source);
private:
    void compile_root(iris_grammarParser & parser, iris_grammarParser::RootContext* node);
    void compile_statement(iris_grammarParser & parser, iris_grammarParser::StatementContext* node);
    void compile_function_definition(iris_grammarParser & parser, iris_grammarParser::Function_definitionContext* node);
    std::shared_ptr<Declaration> compile_declaration(iris_grammarParser & parser, iris_grammarParser::DeclarationContext* node);
    std::shared_ptr<Type> compile_type(iris_grammarParser & parser, iris_grammarParser::TypeContext* node);
    std::shared_ptr<Descriptor> compile_descriptor(iris_grammarParser & parser, iris_grammarParser::DescriptorContext* node);
};