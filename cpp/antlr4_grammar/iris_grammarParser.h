
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
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, FUNC = 38, 
    IF = 39, ELIF = 40, ELSE = 41, THEN = 42, IMPORT = 43, FROM = 44, DEF = 45, 
    IN = 46, OUT = 47, UNIFORM = 48, MUT = 49, VERTEX = 50, NOT = 51, BITS_NOT = 52, 
    NORM = 53, INV = 54, TRANS = 55, DET = 56, DEG = 57, RAD = 58, AND = 59, 
    OR = 60, BITS_AND = 61, BITS_XOR = 62, BITS_OR = 63, BITS_LEFT = 64, 
    BITS_RIGHT = 65, AND_EQ = 66, OR_EQ = 67, BITS_AND_EQ = 68, BITS_XOR_EQ = 69, 
    BITS_OR_EQ = 70, BITS_LEFT_EQ = 71, BITS_RIGHT_EQ = 72, AS = 73, NONE = 74, 
    I8 = 75, I16 = 76, I32 = 77, U8 = 78, U16 = 79, U32 = 80, F8 = 81, F16 = 82, 
    F32 = 83, F64 = 84, BOOL = 85, VEC2 = 86, VEC3 = 87, VEC4 = 88, V2 = 89, 
    V3 = 90, V4 = 91, M2 = 92, M3 = 93, M4 = 94, M2X2 = 95, M3X3 = 96, M4X4 = 97, 
    M2X3 = 98, M3X2 = 99, M3X4 = 100, M4X3 = 101, M2X4 = 102, M4X2 = 103, 
    MAT2 = 104, MAT3 = 105, MAT4 = 106, MAT2X3 = 107, MAT2X4 = 108, MAT3X2 = 109, 
    MAT3X4 = 110, MAT4X2 = 111, MAT4X3 = 112, LP = 113, MP = 114, HP = 115, 
    FLOAT = 116, LABEL = 117, INT = 118, WS = 119, NEWLINE = 120, LINE_COMMENT = 121, 
    BLOCK_COMMENT = 122, ERROR_TOKEN = 123
  };

  enum {
    RuleRoot = 0, RuleStatement = 1, RuleImport_statement = 2, RuleFunction_definition = 3, 
    RuleConditional_block = 4, RuleImport_label = 5, RuleBlock = 6, RuleConditional = 7, 
    RuleExpr = 8, RuleDescriptor = 9, RulePrecision_qualifier = 10, RuleType = 11, 
    RuleDeclaration = 12, RuleEos = 13, RulePrimitive = 14
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
  class Import_statementContext;
  class Function_definitionContext;
  class Conditional_blockContext;
  class Import_labelContext;
  class BlockContext;
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

  class  Import_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *file_path_part = nullptr;
    antlr4::Token *module_alias = nullptr;
    Import_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IMPORT();
    std::vector<Import_labelContext *> import_label();
    Import_labelContext* import_label(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LABEL();
    antlr4::tree::TerminalNode* LABEL(size_t i);
    antlr4::tree::TerminalNode *AS();


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
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

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

    TypeContext *type();
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
    antlr4::tree::TerminalNode *LABEL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MagnitudeContext : public ExprContext {
  public:
    MagnitudeContext(ExprContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryOperatorContext : public ExprContext {
  public:
    UnaryOperatorContext(ExprContext *ctx);

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

  class  IndexOperatorContext : public ExprContext {
  public:
    IndexOperatorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

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

