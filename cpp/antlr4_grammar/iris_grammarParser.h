
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
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    FUNC = 75, IF = 76, ELIF = 77, ELSE = 78, THEN = 79, IMPORT = 80, FROM = 81, 
    DEF = 82, IN = 83, OUT = 84, UNIFORM = 85, MUT = 86, VERTEX = 87, NOT = 88, 
    BITS_NOT = 89, NORM = 90, INV = 91, TRANS = 92, DET = 93, DEG = 94, 
    RAD = 95, AND = 96, OR = 97, BITS_AND = 98, BITS_XOR = 99, BITS_OR = 100, 
    BITS_LEFT = 101, BITS_RIGHT = 102, AND_EQ = 103, OR_EQ = 104, BITS_AND_EQ = 105, 
    BITS_XOR_EQ = 106, BITS_OR_EQ = 107, BITS_LEFT_EQ = 108, BITS_RIGHT_EQ = 109, 
    AS = 110, NONE = 111, I8 = 112, I16 = 113, I32 = 114, U8 = 115, U16 = 116, 
    U32 = 117, F8 = 118, F16 = 119, F32 = 120, F64 = 121, BOOL = 122, VEC2 = 123, 
    VEC3 = 124, VEC4 = 125, V2 = 126, V3 = 127, V4 = 128, M2 = 129, M3 = 130, 
    M4 = 131, M2X2 = 132, M3X3 = 133, M4X4 = 134, M2X3 = 135, M3X2 = 136, 
    M3X4 = 137, M4X3 = 138, M2X4 = 139, M4X2 = 140, MAT2 = 141, MAT3 = 142, 
    MAT4 = 143, MAT2X3 = 144, MAT2X4 = 145, MAT3X2 = 146, MAT3X4 = 147, 
    MAT4X2 = 148, MAT4X3 = 149, LP = 150, MP = 151, HP = 152, TARGET_LANGUAGE = 153, 
    BOOLEAN = 154, FLOAT = 155, LABEL = 156, INT = 157, STRING_LITERAL = 158, 
    WS = 159, NEWLINE = 160, LINE_COMMENT = 161, BLOCK_COMMENT = 162, ERROR_TOKEN = 163
  };

  enum {
    RuleRoot = 0, RuleStatement = 1, RuleReturn_statement = 2, RuleImport_statement = 3, 
    RuleFunction_definition = 4, RuleClass_method_definition = 5, RuleClass_operator_definition = 6, 
    RuleSelf_declaration = 7, RuleSelf_descriptor = 8, RuleClass_operator_label = 9, 
    RuleClass_definition = 10, RuleBase_class_name = 11, RuleClass_block_item = 12, 
    RuleClass_compiler_directive = 13, RuleConditional_block = 14, RuleFor_block = 15, 
    RuleUnpacking_list = 16, RuleUnpacking_item = 17, RuleWhile_block = 18, 
    RuleDo_while_block = 19, RuleMatch_block = 20, RuleCase_block = 21, 
    RuleFile_path_part = 22, RuleImport_label = 23, RuleBlock = 24, RuleBlock_item = 25, 
    RuleConditional = 26, RuleExpr = 27, RuleDescriptor = 28, RulePrecision_qualifier = 29, 
    RuleType = 30, RuleType_name = 31, RuleDeclaration = 32, RuleEos = 33, 
    RuleBase_type = 34, RulePrimitive = 35
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
  class Class_method_definitionContext;
  class Class_operator_definitionContext;
  class Self_declarationContext;
  class Self_descriptorContext;
  class Class_operator_labelContext;
  class Class_definitionContext;
  class Base_class_nameContext;
  class Class_block_itemContext;
  class Class_compiler_directiveContext;
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
  class Type_nameContext;
  class DeclarationContext;
  class EosContext;
  class Base_typeContext;
  class PrimitiveContext; 

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Function_definitionContext *> function_definition();
    Function_definitionContext* function_definition(size_t i);
    std::vector<Class_definitionContext *> class_definition();
    Class_definitionContext* class_definition(size_t i);
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

  class  Class_method_definitionContext : public antlr4::ParserRuleContext {
  public:
    Class_method_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *LABEL();
    Self_declarationContext *self_declaration();
    BlockContext *block();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_method_definitionContext* class_method_definition();

  class  Class_operator_definitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *inline_ = nullptr;
    Class_operator_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    Class_operator_labelContext *class_operator_label();
    Self_declarationContext *self_declaration();
    BlockContext *block();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_operator_definitionContext* class_operator_definition();

  class  Self_declarationContext : public antlr4::ParserRuleContext {
  public:
    Self_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Self_descriptorContext *> self_descriptor();
    Self_descriptorContext* self_descriptor(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Self_declarationContext* self_declaration();

  class  Self_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Self_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescriptorContext *descriptor();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Self_descriptorContext* self_descriptor();

  class  Class_operator_labelContext : public antlr4::ParserRuleContext {
  public:
    Class_operator_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_operator_labelContext* class_operator_label();

  class  Class_definitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    antlr4::Token *trait = nullptr;
    Class_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_class_nameContext *base_class_name();
    antlr4::tree::TerminalNode *AS();
    std::vector<antlr4::tree::TerminalNode *> LABEL();
    antlr4::tree::TerminalNode* LABEL(size_t i);
    std::vector<Class_block_itemContext *> class_block_item();
    Class_block_itemContext* class_block_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_definitionContext* class_definition();

  class  Base_class_nameContext : public antlr4::ParserRuleContext {
  public:
    Base_class_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_typeContext *base_type();
    antlr4::tree::TerminalNode *LABEL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Base_class_nameContext* base_class_name();

  class  Class_block_itemContext : public antlr4::ParserRuleContext {
  public:
    Class_block_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *NEWLINE();
    Class_compiler_directiveContext *class_compiler_directive();
    Class_method_definitionContext *class_method_definition();
    Class_operator_definitionContext *class_operator_definition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_block_itemContext* class_block_item();

  class  Class_compiler_directiveContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *tag = nullptr;
    antlr4::Token *label = nullptr;
    Class_compiler_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGET_LANGUAGE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    Precision_qualifierContext *precision_qualifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_compiler_directiveContext* class_compiler_directive();

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
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_nameContext *type_name();
    Precision_qualifierContext *precision_qualifier();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Type_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LABEL();
    Base_typeContext *base_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_nameContext* type_name();

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

  class  Base_typeContext : public antlr4::ParserRuleContext {
  public:
    Base_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *BOOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Base_typeContext* base_type();

  class  PrimitiveContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *STRING_LITERAL();


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

