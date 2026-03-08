
// Generated from ./cpp/iris_grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  iris_grammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, FUNC = 44, 
    IF = 45, ELIF = 46, ELSE = 47, THEN = 48, IMPORT = 49, FROM = 50, DEF = 51, 
    IN = 52, OUT = 53, UNIFORM = 54, MUT = 55, VERTEX = 56, NOT = 57, BITS_NOT = 58, 
    NORM = 59, INV = 60, TRANS = 61, DET = 62, DEG = 63, RAD = 64, AND = 65, 
    OR = 66, BITS_AND = 67, BITS_XOR = 68, BITS_OR = 69, BITS_LEFT = 70, 
    BITS_RIGHT = 71, AND_EQ = 72, OR_EQ = 73, BITS_AND_EQ = 74, BITS_XOR_EQ = 75, 
    BITS_OR_EQ = 76, BITS_LEFT_EQ = 77, BITS_RIGHT_EQ = 78, AS = 79, NONE = 80, 
    I8 = 81, I16 = 82, I32 = 83, U8 = 84, U16 = 85, U32 = 86, F8 = 87, F16 = 88, 
    F32 = 89, F64 = 90, BOOL = 91, VEC2 = 92, VEC3 = 93, VEC4 = 94, V2 = 95, 
    V3 = 96, V4 = 97, M2 = 98, M3 = 99, M4 = 100, M2X2 = 101, M3X3 = 102, 
    M4X4 = 103, M2X3 = 104, M3X2 = 105, M3X4 = 106, M4X3 = 107, M2X4 = 108, 
    M4X2 = 109, MAT2 = 110, MAT3 = 111, MAT4 = 112, MAT2X3 = 113, MAT2X4 = 114, 
    MAT3X2 = 115, MAT3X4 = 116, MAT4X2 = 117, MAT4X3 = 118, LP = 119, MP = 120, 
    HP = 121, BOOLEAN = 122, FLOAT = 123, LABEL = 124, INT = 125, WS = 126, 
    NEWLINE = 127, LINE_COMMENT = 128, BLOCK_COMMENT = 129, ERROR_TOKEN = 130
  };

  enum {
    RuleRoot = 0, RuleStatement = 1, RuleReturn_statement = 2, RuleImport_statement = 3, 
    RuleFunction_definition = 4, RuleConditional_block = 5, RuleFor_block = 6, 
    RuleUnpacking_list = 7, RuleUnpacking_item = 8, RuleWhile_block = 9, 
    RuleDo_while_block = 10, RuleMatch_block = 11, RuleCase_block = 12, 
    RuleFile_path_part = 13, RuleImport_label = 14, RuleBlock = 15, RuleBlock_item = 16, 
    RuleConditional = 17, RuleExpr = 18, RuleDescriptor = 19, RulePrecision_qualifier = 20, 
    RuleType = 21, RuleDeclaration = 22, RuleEos = 23, RulePrimitive = 24
  };

  explicit iris_grammarParser(antlr4::TokenStream *input);

  iris_grammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~iris_grammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class RootContext;
  class StatementContext;
  class Return_statementContext;
  class Import_statementContext;
  class Function_definitionContext;
  class Conditional_blockContext;
  class For_blockContext;
  class Unpacking_listContext;
  class Unpacking_itemContext;
  class While_blockContext;
  class Do_while_blockContext;
  class Match_blockContext;
  class Case_blockContext;
  class File_path_partContext;
  class Import_labelContext;
  class BlockContext;
  class Block_itemContext;
  class ConditionalContext;
  class ExprContext;
  class DescriptorContext;
  class Precision_qualifierContext;
  class TypeContext;
  class DeclarationContext;
  class EosContext;
  class PrimitiveContext; 

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Function_definitionContext *> function_definition();
    Function_definitionContext* function_definition(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootContext* root();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Import_statementContext *import_statement();
    DeclarationContext *declaration();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  Import_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *module_alias = nullptr;
    Import_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IMPORT();
    std::vector<File_path_partContext *> file_path_part();
    File_path_partContext* file_path_part(size_t i);
    std::vector<Import_labelContext *> import_label();
    Import_labelContext* import_label(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LABEL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_statementContext* import_statement();

  class  Function_definitionContext : public antlr4::ParserRuleContext {
  public:
    Function_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *LABEL();
    BlockContext *block();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_definitionContext* function_definition();

  class  Conditional_blockContext : public antlr4::ParserRuleContext {
  public:
    Conditional_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELIF();
    antlr4::tree::TerminalNode* ELIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_blockContext* conditional_block();

  class  For_blockContext : public antlr4::ParserRuleContext {
  public:
    iris_grammarParser::DeclarationContext *iterator = nullptr;
    For_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unpacking_listContext *unpacking_list();
    antlr4::tree::TerminalNode *IN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    BlockContext *block();
    DeclarationContext *declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_blockContext* for_block();

  class  Unpacking_listContext : public antlr4::ParserRuleContext {
  public:
    Unpacking_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Unpacking_itemContext *> unpacking_item();
    Unpacking_itemContext* unpacking_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unpacking_listContext* unpacking_list();

  class  Unpacking_itemContext : public antlr4::ParserRuleContext {
  public:
    Unpacking_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LABEL();
    DeclarationContext *declaration();
    Unpacking_listContext *unpacking_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unpacking_itemContext* unpacking_item();

  class  While_blockContext : public antlr4::ParserRuleContext {
  public:
    While_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_blockContext* while_block();

  class  Do_while_blockContext : public antlr4::ParserRuleContext {
  public:
    Do_while_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_while_blockContext* do_while_block();

  class  Match_blockContext : public antlr4::ParserRuleContext {
  public:
    Match_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<Case_blockContext *> case_block();
    Case_blockContext* case_block(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Match_blockContext* match_block();

  class  Case_blockContext : public antlr4::ParserRuleContext {
  public:
    Case_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_blockContext* case_block();

  class  File_path_partContext : public antlr4::ParserRuleContext {
  public:
    File_path_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LABEL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_path_partContext* file_path_part();

  class  Import_labelContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *import_name = nullptr;
    antlr4::Token *import_alias = nullptr;
    Import_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LABEL();
    antlr4::tree::TerminalNode* LABEL(size_t i);
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_labelContext* import_label();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Block_itemContext *> block_item();
    Block_itemContext* block_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  Block_itemContext : public antlr4::ParserRuleContext {
  public:
    Block_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Block_itemContext() = default;
    void copyFrom(Block_itemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BlockWhileBlockContext : public Block_itemContext {
  public:
    BlockWhileBlockContext(Block_itemContext *ctx);

    While_blockContext *while_block();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlockDoWhileBlockContext : public Block_itemContext {
  public:
    BlockDoWhileBlockContext(Block_itemContext *ctx);

    Do_while_blockContext *do_while_block();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlockForBlockContext : public Block_itemContext {
  public:
    BlockForBlockContext(Block_itemContext *ctx);

    For_blockContext *for_block();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlockConditionalBlockContext : public Block_itemContext {
  public:
    BlockConditionalBlockContext(Block_itemContext *ctx);

    Conditional_blockContext *conditional_block();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlockStatementContext : public Block_itemContext {
  public:
    BlockStatementContext(Block_itemContext *ctx);

    StatementContext *statement();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Block_itemContext* block_item();

  class  ConditionalContext : public antlr4::ParserRuleContext {
  public:
    ConditionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalContext* conditional();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CastContext : public ExprContext {
  public:
    CastContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *AS();
    TypeContext *type();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallContext : public ExprContext {
  public:
    CallContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AbsoluteValueContext : public ExprContext {
  public:
    AbsoluteValueContext(ExprContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReturnContext : public ExprContext {
  public:
    ReturnContext(ExprContext *ctx);

    Return_statementContext *return_statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TernaryContext : public ExprContext {
  public:
    TernaryContext(ExprContext *ctx);

    ConditionalContext *conditional();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GetterContext : public ExprContext {
  public:
    GetterContext(ExprContext *ctx);

    ExprContext *expr();
    PrimitiveContext *primitive();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MagnitudeContext : public ExprContext {
  public:
    MagnitudeContext(ExprContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MatchContext : public ExprContext {
  public:
    MatchContext(ExprContext *ctx);

    Match_blockContext *match_block();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IndexOperatorContext : public ExprContext {
  public:
    IndexOperatorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstructorCallContext : public ExprContext {
  public:
    ConstructorCallContext(ExprContext *ctx);

    TypeContext *type();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryOperatorContext : public ExprContext {
  public:
    UnaryOperatorContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *BITS_NOT();
    antlr4::tree::TerminalNode *NORM();
    antlr4::tree::TerminalNode *INV();
    antlr4::tree::TerminalNode *TRANS();
    antlr4::tree::TerminalNode *DET();
    antlr4::tree::TerminalNode *DEG();
    antlr4::tree::TerminalNode *RAD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryOperatorContext : public ExprContext {
  public:
    BinaryOperatorContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BITS_LEFT();
    antlr4::tree::TerminalNode *BITS_RIGHT();
    antlr4::tree::TerminalNode *BITS_AND();
    antlr4::tree::TerminalNode *BITS_XOR();
    antlr4::tree::TerminalNode *BITS_OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *BITS_LEFT_EQ();
    antlr4::tree::TerminalNode *BITS_RIGHT_EQ();
    antlr4::tree::TerminalNode *BITS_AND_EQ();
    antlr4::tree::TerminalNode *BITS_XOR_EQ();
    antlr4::tree::TerminalNode *BITS_OR_EQ();
    antlr4::tree::TerminalNode *AND_EQ();
    antlr4::tree::TerminalNode *OR_EQ();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimitiveExpressionContext : public ExprContext {
  public:
    PrimitiveExpressionContext(ExprContext *ctx);

    PrimitiveContext *primitive();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesesContext : public ExprContext {
  public:
    ParenthesesContext(ExprContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  DescriptorContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *descriptor_name = nullptr;
    DescriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *UNIFORM();
    antlr4::tree::TerminalNode *MUT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *VERTEX();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptorContext* descriptor();

  class  Precision_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Precision_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *MP();
    antlr4::tree::TerminalNode *HP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Precision_qualifierContext* precision_qualifier();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type_name = nullptr;
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Precision_qualifierContext *precision_qualifier();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *U8();
    antlr4::tree::TerminalNode *U16();
    antlr4::tree::TerminalNode *U32();
    antlr4::tree::TerminalNode *F8();
    antlr4::tree::TerminalNode *F16();
    antlr4::tree::TerminalNode *F32();
    antlr4::tree::TerminalNode *F64();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *VEC2();
    antlr4::tree::TerminalNode *VEC3();
    antlr4::tree::TerminalNode *VEC4();
    antlr4::tree::TerminalNode *V2();
    antlr4::tree::TerminalNode *V3();
    antlr4::tree::TerminalNode *V4();
    antlr4::tree::TerminalNode *M2();
    antlr4::tree::TerminalNode *M3();
    antlr4::tree::TerminalNode *M4();
    antlr4::tree::TerminalNode *M2X2();
    antlr4::tree::TerminalNode *M3X3();
    antlr4::tree::TerminalNode *M4X4();
    antlr4::tree::TerminalNode *M2X3();
    antlr4::tree::TerminalNode *M3X2();
    antlr4::tree::TerminalNode *M3X4();
    antlr4::tree::TerminalNode *M4X3();
    antlr4::tree::TerminalNode *M2X4();
    antlr4::tree::TerminalNode *M4X2();
    antlr4::tree::TerminalNode *MAT2();
    antlr4::tree::TerminalNode *MAT3();
    antlr4::tree::TerminalNode *MAT4();
    antlr4::tree::TerminalNode *MAT2X3();
    antlr4::tree::TerminalNode *MAT2X4();
    antlr4::tree::TerminalNode *MAT3X2();
    antlr4::tree::TerminalNode *MAT3X4();
    antlr4::tree::TerminalNode *MAT4X2();
    antlr4::tree::TerminalNode *MAT4X3();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescriptorContext *descriptor();
    antlr4::tree::TerminalNode *LABEL();
    ExprContext *expr();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  EosContext : public antlr4::ParserRuleContext {
  public:
    EosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EosContext* eos();

  class  PrimitiveContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *LABEL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveContext* primitive();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

