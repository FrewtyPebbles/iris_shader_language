
// Generated from ./cpp/iris_grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "iris_grammarVisitor.h"


/**
 * This class provides an empty implementation of iris_grammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  iris_grammarBaseVisitor : public iris_grammarVisitor {
public:

  virtual std::any visitProgram(iris_grammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(iris_grammarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleStmt(iris_grammarParser::SimpleStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacroDecl(iris_grammarParser::MacroDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniformDecl(iris_grammarParser::UniformDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVertexDecl(iris_grammarParser::VertexDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutDecl(iris_grammarParser::OutDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDecl(iris_grammarParser::FuncDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamList(iris_grammarParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(iris_grammarParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(iris_grammarParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(iris_grammarParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(iris_grammarParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOr(iris_grammarParser::LogicalOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAnd(iris_grammarParser::LogicalAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquality(iris_grammarParser::EqualityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison(iris_grammarParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(iris_grammarParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(iris_grammarParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary(iris_grammarParser::UnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(iris_grammarParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(iris_grammarParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentList(iris_grammarParser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(iris_grammarParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(iris_grammarParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

