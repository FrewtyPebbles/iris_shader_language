
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

  virtual std::any visitStatement(iris_grammarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_statement(iris_grammarParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImport_statement(iris_grammarParser::Import_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_definition(iris_grammarParser::Function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional_block(iris_grammarParser::Conditional_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_block(iris_grammarParser::For_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnpacking_list(iris_grammarParser::Unpacking_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnpacking_item(iris_grammarParser::Unpacking_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_block(iris_grammarParser::While_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDo_while_block(iris_grammarParser::Do_while_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatch_block(iris_grammarParser::Match_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_block(iris_grammarParser::Case_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_path_part(iris_grammarParser::File_path_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImport_label(iris_grammarParser::Import_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(iris_grammarParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional(iris_grammarParser::ConditionalContext *ctx) override {
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

  virtual std::any visitReturn(iris_grammarParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTernary(iris_grammarParser::TernaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetter(iris_grammarParser::GetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMagnitude(iris_grammarParser::MagnitudeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatch(iris_grammarParser::MatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexOperator(iris_grammarParser::IndexOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorCall(iris_grammarParser::ConstructorCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOperator(iris_grammarParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryOperator(iris_grammarParser::BinaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveExpression(iris_grammarParser::PrimitiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParentheses(iris_grammarParser::ParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescriptor(iris_grammarParser::DescriptorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecision_qualifier(iris_grammarParser::Precision_qualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(iris_grammarParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(iris_grammarParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEos(iris_grammarParser::EosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitive(iris_grammarParser::PrimitiveContext *ctx) override {
    return visitChildren(ctx);
  }


};

