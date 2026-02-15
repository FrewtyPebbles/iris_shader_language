
// Generated from ./cpp/iris_grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "iris_grammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by iris_grammarParser.
 */
class  iris_grammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by iris_grammarParser.
   */
    virtual std::any visitProgram(iris_grammarParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(iris_grammarParser::StatementContext *context) = 0;

    virtual std::any visitSimpleStmt(iris_grammarParser::SimpleStmtContext *context) = 0;

    virtual std::any visitMacroDecl(iris_grammarParser::MacroDeclContext *context) = 0;

    virtual std::any visitUniformDecl(iris_grammarParser::UniformDeclContext *context) = 0;

    virtual std::any visitVertexDecl(iris_grammarParser::VertexDeclContext *context) = 0;

    virtual std::any visitOutDecl(iris_grammarParser::OutDeclContext *context) = 0;

    virtual std::any visitFuncDecl(iris_grammarParser::FuncDeclContext *context) = 0;

    virtual std::any visitParamList(iris_grammarParser::ParamListContext *context) = 0;

    virtual std::any visitParam(iris_grammarParser::ParamContext *context) = 0;

    virtual std::any visitBlock(iris_grammarParser::BlockContext *context) = 0;

    virtual std::any visitExpression(iris_grammarParser::ExpressionContext *context) = 0;

    virtual std::any visitAssignment(iris_grammarParser::AssignmentContext *context) = 0;

    virtual std::any visitLogicalOr(iris_grammarParser::LogicalOrContext *context) = 0;

    virtual std::any visitLogicalAnd(iris_grammarParser::LogicalAndContext *context) = 0;

    virtual std::any visitEquality(iris_grammarParser::EqualityContext *context) = 0;

    virtual std::any visitComparison(iris_grammarParser::ComparisonContext *context) = 0;

    virtual std::any visitTerm(iris_grammarParser::TermContext *context) = 0;

    virtual std::any visitFactor(iris_grammarParser::FactorContext *context) = 0;

    virtual std::any visitUnary(iris_grammarParser::UnaryContext *context) = 0;

    virtual std::any visitPrimary(iris_grammarParser::PrimaryContext *context) = 0;

    virtual std::any visitFunctionCall(iris_grammarParser::FunctionCallContext *context) = 0;

    virtual std::any visitArgumentList(iris_grammarParser::ArgumentListContext *context) = 0;

    virtual std::any visitLiteral(iris_grammarParser::LiteralContext *context) = 0;

    virtual std::any visitType(iris_grammarParser::TypeContext *context) = 0;


};

