#pragma once
#include <memory>
#include "antlr4-runtime.h"
#include "iris_grammarLexer.h"
#include "iris_grammarParser.h"

#include "tree/module.h"
#include "tree/declaration.h"
#include "tree/statement.h"
#include "tree/function_definition.h"
#include "tree/descriptor.h"
#include "tree/_type.h"
#include "tree/expression.h"
#include "tree/primitive.h"
#include "tree/call.h"
#include "tree/binary_operator.h"
#include "tree/getter.h"
#include "tree/import.h"
#include "tree/cast.h"
#include "tree/unary_operator.h"
#include "tree/index_operator.h"
#include "tree/ternary.h"
#include "tree/while_loop.h"

class ModuleCompiler {
public:
    ModuleCompiler();
    std::shared_ptr<Module> module = nullptr;
    std::shared_ptr<FunctionDefinition> current_function = nullptr;
    std::shared_ptr<Module> compile(string name, string source, std::shared_ptr<VirtualModuleGroup> module_parent);
private:
    // COMPILER BRANCHES
    void compile_root(iris_grammarParser & parser, iris_grammarParser::RootContext* node);
    std::shared_ptr<Statement> compile_statement(iris_grammarParser & parser, iris_grammarParser::StatementContext* node, std::shared_ptr<FunctionDefinition> function = nullptr);
    std::shared_ptr<FunctionDefinition> compile_function_definition(iris_grammarParser & parser, iris_grammarParser::Function_definitionContext* node);
    std::shared_ptr<Declaration> compile_declaration(iris_grammarParser & parser, iris_grammarParser::DeclarationContext* node);
    std::shared_ptr<BaseType> compile_type(iris_grammarParser & parser, iris_grammarParser::TypeContext* node);
    std::shared_ptr<Descriptor> compile_descriptor(iris_grammarParser & parser, iris_grammarParser::DescriptorContext* node);
    std::shared_ptr<Expression> compile_expression(iris_grammarParser & parser, iris_grammarParser::ExprContext* node);
    std::shared_ptr<Primitive> compile_primitive(iris_grammarParser & parser, iris_grammarParser::PrimitiveContext* node);
    std::shared_ptr<Call> compile_call(iris_grammarParser & parser, iris_grammarParser::CallContext* node);
    std::shared_ptr<Call> compile_constructor(iris_grammarParser & parser, iris_grammarParser::ConstructorCallContext* node);
    std::shared_ptr<BinaryOperator> compile_binary_operator(iris_grammarParser & parser, iris_grammarParser::BinaryOperatorContext* node);
    std::shared_ptr<UnaryOperator> compile_unary_operator(iris_grammarParser & parser, iris_grammarParser::UnaryOperatorContext* node);
    std::shared_ptr<Getter> compile_getter(iris_grammarParser & parser, iris_grammarParser::GetterContext* node);
    std::shared_ptr<Import> compile_import(iris_grammarParser & parser, iris_grammarParser::Import_statementContext* node);
    std::shared_ptr<Cast> compile_cast(iris_grammarParser & parser, iris_grammarParser::CastContext* node);
    std::shared_ptr<IndexOperator> compile_index_operator(iris_grammarParser & parser, iris_grammarParser::IndexOperatorContext* node);
    std::shared_ptr<Ternary> compile_ternary(iris_grammarParser & parser, iris_grammarParser::TernaryContext* node);
    vector<std::shared_ptr<LanguageNode>> compile_block(iris_grammarParser & parser, iris_grammarParser::BlockContext* node);
    std::shared_ptr<WhileLoop> compile_while_block(iris_grammarParser & parser, iris_grammarParser::While_blockContext* node);
    

    // This method compiles all the signatures VVVV
    void read_signatures(iris_grammarParser & parser, iris_grammarParser::RootContext* node);
    void read_statement(iris_grammarParser & parser, iris_grammarParser::StatementContext* node);
    void read_function_definition(iris_grammarParser & parser, iris_grammarParser::Function_definitionContext* node);

    // Helpers
    string mangle_name(string name);
};