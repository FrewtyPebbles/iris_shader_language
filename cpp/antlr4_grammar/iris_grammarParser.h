
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
    T__38 = 39, FUNC = 40, IF = 41, ELIF = 42, ELSE = 43, THEN = 44, IMPORT = 45, 
    FROM = 46, DEF = 47, IN = 48, OUT = 49, UNIFORM = 50, MUT = 51, VERTEX = 52, 
    NOT = 53, BITS_NOT = 54, NORM = 55, INV = 56, TRANS = 57, DET = 58, 
    DEG = 59, RAD = 60, AND = 61, OR = 62, BITS_AND = 63, BITS_XOR = 64, 
    BITS_OR = 65, BITS_LEFT = 66, BITS_RIGHT = 67, AND_EQ = 68, OR_EQ = 69, 
    BITS_AND_EQ = 70, BITS_XOR_EQ = 71, BITS_OR_EQ = 72, BITS_LEFT_EQ = 73, 
    BITS_RIGHT_EQ = 74, AS = 75, NONE = 76, I8 = 77, I16 = 78, I32 = 79, 
    U8 = 80, U16 = 81, U32 = 82, F8 = 83, F16 = 84, F32 = 85, F64 = 86, 
    BOOL = 87, VEC2 = 88, VEC3 = 89, VEC4 = 90, V2 = 91, V3 = 92, V4 = 93, 
    M2 = 94, M3 = 95, M4 = 96, M2X2 = 97, M3X3 = 98, M4X4 = 99, M2X3 = 100, 
    M3X2 = 101, M3X4 = 102, M4X3 = 103, M2X4 = 104, M4X2 = 105, MAT2 = 106, 
    MAT3 = 107, MAT4 = 108, MAT2X3 = 109, MAT2X4 = 110, MAT3X2 = 111, MAT3X4 = 112, 
    MAT4X2 = 113, MAT4X3 = 114, LP = 115, MP = 116, HP = 117, FLOAT = 118, 
    LABEL = 119, INT = 120, WS = 121, NEWLINE = 122, LINE_COMMENT = 123, 
    BLOCK_COMMENT = 124, ERROR_TOKEN = 125
  };

  enum {
    RuleRoot = 0, RuleStatement = 1, RuleReturn_statement = 2, RuleImport_statement = 3, 
    RuleFunction_definition = 4, RuleConditional_block = 5, RuleFile_path_part = 6, 
    RuleImport_label = 7, RuleBlock = 8, RuleConditional = 9, RuleExpr = 10, 
    RuleDescriptor = 11, RulePrecision_qualifier = 12, RuleType = 13, RuleDeclaration = 14, 
    RuleEos = 15, RulePrimitive = 16
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
  class File_path_partContext;
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
    antlr4::tree::TerminalNode *LABEL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MagnitudeContext : public ExprContext {
  public:
    MagnitudeContext(ExprContext *ctx);

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

