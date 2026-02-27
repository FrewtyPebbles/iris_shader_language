
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
    virtual std::any visitRoot(iris_grammarParser::RootContext *context) = 0;

    virtual std::any visitFunction_definition(iris_grammarParser::Function_definitionContext *context) = 0;

    virtual std::any visitConditional(iris_grammarParser::ConditionalContext *context) = 0;

    virtual std::any visitConditional_block(iris_grammarParser::Conditional_blockContext *context) = 0;

    virtual std::any visitBlock(iris_grammarParser::BlockContext *context) = 0;

    virtual std::any visitStatement(iris_grammarParser::StatementContext *context) = 0;

    virtual std::any visitCast(iris_grammarParser::CastContext *context) = 0;

    virtual std::any visitCall(iris_grammarParser::CallContext *context) = 0;

    virtual std::any visitAbsoluteValue(iris_grammarParser::AbsoluteValueContext *context) = 0;

    virtual std::any visitPrimitive(iris_grammarParser::PrimitiveContext *context) = 0;

    virtual std::any visitGetter(iris_grammarParser::GetterContext *context) = 0;

    virtual std::any visitMagnitude(iris_grammarParser::MagnitudeContext *context) = 0;

    virtual std::any visitUnaryOperator(iris_grammarParser::UnaryOperatorContext *context) = 0;

    virtual std::any visitBinaryOperator(iris_grammarParser::BinaryOperatorContext *context) = 0;

    virtual std::any visitParentheses(iris_grammarParser::ParenthesesContext *context) = 0;

    virtual std::any visitIndexOperator(iris_grammarParser::IndexOperatorContext *context) = 0;

    virtual std::any visitDescriptor(iris_grammarParser::DescriptorContext *context) = 0;

    virtual std::any visitDeclaration(iris_grammarParser::DeclarationContext *context) = 0;

    virtual std::any visitType(iris_grammarParser::TypeContext *context) = 0;

    virtual std::any visitPrecision_qualifier(iris_grammarParser::Precision_qualifierContext *context) = 0;


};

