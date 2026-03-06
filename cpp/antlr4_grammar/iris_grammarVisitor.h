
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

    virtual std::any visitStatement(iris_grammarParser::StatementContext *context) = 0;

    virtual std::any visitReturn_statement(iris_grammarParser::Return_statementContext *context) = 0;

    virtual std::any visitImport_statement(iris_grammarParser::Import_statementContext *context) = 0;

    virtual std::any visitFunction_definition(iris_grammarParser::Function_definitionContext *context) = 0;

    virtual std::any visitConditional_block(iris_grammarParser::Conditional_blockContext *context) = 0;

    virtual std::any visitFor_block(iris_grammarParser::For_blockContext *context) = 0;

    virtual std::any visitUnpacking_list(iris_grammarParser::Unpacking_listContext *context) = 0;

    virtual std::any visitUnpacking_item(iris_grammarParser::Unpacking_itemContext *context) = 0;

    virtual std::any visitWhile_block(iris_grammarParser::While_blockContext *context) = 0;

    virtual std::any visitDo_while_block(iris_grammarParser::Do_while_blockContext *context) = 0;

    virtual std::any visitMatch_block(iris_grammarParser::Match_blockContext *context) = 0;

    virtual std::any visitCase_block(iris_grammarParser::Case_blockContext *context) = 0;

    virtual std::any visitFile_path_part(iris_grammarParser::File_path_partContext *context) = 0;

    virtual std::any visitImport_label(iris_grammarParser::Import_labelContext *context) = 0;

    virtual std::any visitBlock(iris_grammarParser::BlockContext *context) = 0;

    virtual std::any visitConditional(iris_grammarParser::ConditionalContext *context) = 0;

    virtual std::any visitCast(iris_grammarParser::CastContext *context) = 0;

    virtual std::any visitCall(iris_grammarParser::CallContext *context) = 0;

    virtual std::any visitAbsoluteValue(iris_grammarParser::AbsoluteValueContext *context) = 0;

    virtual std::any visitReturn(iris_grammarParser::ReturnContext *context) = 0;

    virtual std::any visitTernary(iris_grammarParser::TernaryContext *context) = 0;

    virtual std::any visitGetter(iris_grammarParser::GetterContext *context) = 0;

    virtual std::any visitMagnitude(iris_grammarParser::MagnitudeContext *context) = 0;

    virtual std::any visitMatch(iris_grammarParser::MatchContext *context) = 0;

    virtual std::any visitIndexOperator(iris_grammarParser::IndexOperatorContext *context) = 0;

    virtual std::any visitConstructorCall(iris_grammarParser::ConstructorCallContext *context) = 0;

    virtual std::any visitUnaryOperator(iris_grammarParser::UnaryOperatorContext *context) = 0;

    virtual std::any visitBinaryOperator(iris_grammarParser::BinaryOperatorContext *context) = 0;

    virtual std::any visitPrimitiveExpression(iris_grammarParser::PrimitiveExpressionContext *context) = 0;

    virtual std::any visitParentheses(iris_grammarParser::ParenthesesContext *context) = 0;

    virtual std::any visitDescriptor(iris_grammarParser::DescriptorContext *context) = 0;

    virtual std::any visitPrecision_qualifier(iris_grammarParser::Precision_qualifierContext *context) = 0;

    virtual std::any visitType(iris_grammarParser::TypeContext *context) = 0;

    virtual std::any visitDeclaration(iris_grammarParser::DeclarationContext *context) = 0;

    virtual std::any visitEos(iris_grammarParser::EosContext *context) = 0;

    virtual std::any visitPrimitive(iris_grammarParser::PrimitiveContext *context) = 0;


};

