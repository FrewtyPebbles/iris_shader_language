
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

  virtual std::any visitRoot(iris_grammarParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_definition(iris_grammarParser::Function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional(iris_grammarParser::ConditionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional_block(iris_grammarParser::Conditional_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(iris_grammarParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(iris_grammarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast(iris_grammarParser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall(iris_grammarParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbsoluteValue(iris_grammarParser::AbsoluteValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitive(iris_grammarParser::PrimitiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetter(iris_grammarParser::GetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMagnitude(iris_grammarParser::MagnitudeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOperator(iris_grammarParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryOperator(iris_grammarParser::BinaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParentheses(iris_grammarParser::ParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexOperator(iris_grammarParser::IndexOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescriptor(iris_grammarParser::DescriptorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(iris_grammarParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(iris_grammarParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecision_qualifier(iris_grammarParser::Precision_qualifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

