
// Generated from ./cpp/iris_grammar.g4 by ANTLR 4.13.2


#include "iris_grammarVisitor.h"

#include "iris_grammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Iris_grammarParserStaticData final {
  Iris_grammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Iris_grammarParserStaticData(const Iris_grammarParserStaticData&) = delete;
  Iris_grammarParserStaticData(Iris_grammarParserStaticData&&) = delete;
  Iris_grammarParserStaticData& operator=(const Iris_grammarParserStaticData&) = delete;
  Iris_grammarParserStaticData& operator=(Iris_grammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag iris_grammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Iris_grammarParserStaticData> iris_grammarParserStaticData = nullptr;

void iris_grammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (iris_grammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(iris_grammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Iris_grammarParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "simpleStmt", "macroDecl", "uniformDecl", 
      "vertexDecl", "outDecl", "funcDecl", "paramList", "param", "block", 
      "expression", "assignment", "logicalOr", "logicalAnd", "equality", 
      "comparison", "term", "factor", "unary", "primary", "functionCall", 
      "argumentList", "literal", "type"
    },
    std::vector<std::string>{
      "", "'='", "','", "'||'", "'&&'", "'=='", "'!='", "'<'", "'>'", "'<='", 
      "'>='", "'+'", "'-'", "'*'", "'/'", "'!'", "'.'", "'def'", "'uniform'", 
      "'vertex'", "'out'", "'func'", "'return'", "'->'", "", "", "", "':'", 
      "'('", "')'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "DEF", "UNIFORM", "VERTEX", "OUT", "FUNC", "RETURN", "ARROW", "INTEGER", 
      "FLOAT", "IDENTIFIER", "COLON", "LPAREN", "RPAREN", "LBRACK", "RBRACK", 
      "NEWLINE", "WS", "COMMENT", "INDENT", "DEDENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,36,221,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,5,0,52,8,0,10,0,12,0,55,9,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,66,8,1,1,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,3,7,102,8,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,5,8,116,8,8,10,8,12,8,119,9,8,1,9,1,9,1,
  	9,1,9,1,10,4,10,126,8,10,11,10,12,10,127,1,11,1,11,1,12,1,12,1,12,3,12,
  	135,8,12,1,13,1,13,1,13,5,13,140,8,13,10,13,12,13,143,9,13,1,14,1,14,
  	1,14,5,14,148,8,14,10,14,12,14,151,9,14,1,15,1,15,1,15,5,15,156,8,15,
  	10,15,12,15,159,9,15,1,16,1,16,1,16,5,16,164,8,16,10,16,12,16,167,9,16,
  	1,17,1,17,1,17,5,17,172,8,17,10,17,12,17,175,9,17,1,18,1,18,1,18,5,18,
  	180,8,18,10,18,12,18,183,9,18,1,19,1,19,1,19,3,19,188,8,19,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,200,8,20,1,21,1,21,1,21,
  	3,21,205,8,21,1,21,1,21,1,22,1,22,1,22,5,22,212,8,22,10,22,12,22,215,
  	9,22,1,23,1,23,1,24,1,24,1,24,0,0,25,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,0,6,1,0,5,6,1,0,7,10,1,0,11,12,1,
  	0,13,14,2,0,12,12,15,15,1,0,24,25,219,0,53,1,0,0,0,2,65,1,0,0,0,4,67,
  	1,0,0,0,6,70,1,0,0,0,8,76,1,0,0,0,10,82,1,0,0,0,12,91,1,0,0,0,14,97,1,
  	0,0,0,16,112,1,0,0,0,18,120,1,0,0,0,20,125,1,0,0,0,22,129,1,0,0,0,24,
  	131,1,0,0,0,26,136,1,0,0,0,28,144,1,0,0,0,30,152,1,0,0,0,32,160,1,0,0,
  	0,34,168,1,0,0,0,36,176,1,0,0,0,38,187,1,0,0,0,40,199,1,0,0,0,42,201,
  	1,0,0,0,44,208,1,0,0,0,46,216,1,0,0,0,48,218,1,0,0,0,50,52,3,2,1,0,51,
  	50,1,0,0,0,52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,56,1,0,0,0,55,
  	53,1,0,0,0,56,57,5,0,0,1,57,1,1,0,0,0,58,66,3,6,3,0,59,66,3,8,4,0,60,
  	66,3,10,5,0,61,66,3,12,6,0,62,66,3,14,7,0,63,66,3,4,2,0,64,66,5,32,0,
  	0,65,58,1,0,0,0,65,59,1,0,0,0,65,60,1,0,0,0,65,61,1,0,0,0,65,62,1,0,0,
  	0,65,63,1,0,0,0,65,64,1,0,0,0,66,3,1,0,0,0,67,68,3,22,11,0,68,69,5,32,
  	0,0,69,5,1,0,0,0,70,71,5,17,0,0,71,72,5,26,0,0,72,73,5,1,0,0,73,74,3,
  	22,11,0,74,75,5,32,0,0,75,7,1,0,0,0,76,77,5,18,0,0,77,78,5,26,0,0,78,
  	79,5,27,0,0,79,80,3,48,24,0,80,81,5,32,0,0,81,9,1,0,0,0,82,83,5,19,0,
  	0,83,84,5,30,0,0,84,85,5,24,0,0,85,86,5,31,0,0,86,87,5,26,0,0,87,88,5,
  	27,0,0,88,89,3,48,24,0,89,90,5,32,0,0,90,11,1,0,0,0,91,92,5,20,0,0,92,
  	93,5,26,0,0,93,94,5,27,0,0,94,95,3,48,24,0,95,96,5,32,0,0,96,13,1,0,0,
  	0,97,98,5,21,0,0,98,99,5,26,0,0,99,101,5,28,0,0,100,102,3,16,8,0,101,
  	100,1,0,0,0,101,102,1,0,0,0,102,103,1,0,0,0,103,104,5,29,0,0,104,105,
  	5,23,0,0,105,106,3,48,24,0,106,107,5,27,0,0,107,108,5,32,0,0,108,109,
  	5,35,0,0,109,110,3,20,10,0,110,111,5,36,0,0,111,15,1,0,0,0,112,117,3,
  	18,9,0,113,114,5,2,0,0,114,116,3,18,9,0,115,113,1,0,0,0,116,119,1,0,0,
  	0,117,115,1,0,0,0,117,118,1,0,0,0,118,17,1,0,0,0,119,117,1,0,0,0,120,
  	121,5,26,0,0,121,122,5,27,0,0,122,123,3,48,24,0,123,19,1,0,0,0,124,126,
  	3,2,1,0,125,124,1,0,0,0,126,127,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,
  	0,128,21,1,0,0,0,129,130,3,24,12,0,130,23,1,0,0,0,131,134,3,26,13,0,132,
  	133,5,1,0,0,133,135,3,24,12,0,134,132,1,0,0,0,134,135,1,0,0,0,135,25,
  	1,0,0,0,136,141,3,28,14,0,137,138,5,3,0,0,138,140,3,28,14,0,139,137,1,
  	0,0,0,140,143,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,27,1,0,0,0,
  	143,141,1,0,0,0,144,149,3,30,15,0,145,146,5,4,0,0,146,148,3,30,15,0,147,
  	145,1,0,0,0,148,151,1,0,0,0,149,147,1,0,0,0,149,150,1,0,0,0,150,29,1,
  	0,0,0,151,149,1,0,0,0,152,157,3,32,16,0,153,154,7,0,0,0,154,156,3,32,
  	16,0,155,153,1,0,0,0,156,159,1,0,0,0,157,155,1,0,0,0,157,158,1,0,0,0,
  	158,31,1,0,0,0,159,157,1,0,0,0,160,165,3,34,17,0,161,162,7,1,0,0,162,
  	164,3,34,17,0,163,161,1,0,0,0,164,167,1,0,0,0,165,163,1,0,0,0,165,166,
  	1,0,0,0,166,33,1,0,0,0,167,165,1,0,0,0,168,173,3,36,18,0,169,170,7,2,
  	0,0,170,172,3,36,18,0,171,169,1,0,0,0,172,175,1,0,0,0,173,171,1,0,0,0,
  	173,174,1,0,0,0,174,35,1,0,0,0,175,173,1,0,0,0,176,181,3,38,19,0,177,
  	178,7,3,0,0,178,180,3,38,19,0,179,177,1,0,0,0,180,183,1,0,0,0,181,179,
  	1,0,0,0,181,182,1,0,0,0,182,37,1,0,0,0,183,181,1,0,0,0,184,185,7,4,0,
  	0,185,188,3,38,19,0,186,188,3,40,20,0,187,184,1,0,0,0,187,186,1,0,0,0,
  	188,39,1,0,0,0,189,200,3,46,23,0,190,200,5,26,0,0,191,192,5,26,0,0,192,
  	193,5,16,0,0,193,200,5,26,0,0,194,200,3,42,21,0,195,196,5,28,0,0,196,
  	197,3,22,11,0,197,198,5,29,0,0,198,200,1,0,0,0,199,189,1,0,0,0,199,190,
  	1,0,0,0,199,191,1,0,0,0,199,194,1,0,0,0,199,195,1,0,0,0,200,41,1,0,0,
  	0,201,202,5,26,0,0,202,204,5,28,0,0,203,205,3,44,22,0,204,203,1,0,0,0,
  	204,205,1,0,0,0,205,206,1,0,0,0,206,207,5,29,0,0,207,43,1,0,0,0,208,213,
  	3,22,11,0,209,210,5,2,0,0,210,212,3,22,11,0,211,209,1,0,0,0,212,215,1,
  	0,0,0,213,211,1,0,0,0,213,214,1,0,0,0,214,45,1,0,0,0,215,213,1,0,0,0,
  	216,217,7,5,0,0,217,47,1,0,0,0,218,219,5,26,0,0,219,49,1,0,0,0,16,53,
  	65,101,117,127,134,141,149,157,165,173,181,187,199,204,213
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  iris_grammarParserStaticData = std::move(staticData);
}

}

iris_grammarParser::iris_grammarParser(TokenStream *input) : iris_grammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

iris_grammarParser::iris_grammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  iris_grammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *iris_grammarParserStaticData->atn, iris_grammarParserStaticData->decisionToDFA, iris_grammarParserStaticData->sharedContextCache, options);
}

iris_grammarParser::~iris_grammarParser() {
  delete _interpreter;
}

const atn::ATN& iris_grammarParser::getATN() const {
  return *iris_grammarParserStaticData->atn;
}

std::string iris_grammarParser::getGrammarFileName() const {
  return "iris_grammar.g4";
}

const std::vector<std::string>& iris_grammarParser::getRuleNames() const {
  return iris_grammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& iris_grammarParser::getVocabulary() const {
  return iris_grammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView iris_grammarParser::getSerializedATN() const {
  return iris_grammarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

iris_grammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::ProgramContext::EOF() {
  return getToken(iris_grammarParser::EOF, 0);
}

std::vector<iris_grammarParser::StatementContext *> iris_grammarParser::ProgramContext::statement() {
  return getRuleContexts<iris_grammarParser::StatementContext>();
}

iris_grammarParser::StatementContext* iris_grammarParser::ProgramContext::statement(size_t i) {
  return getRuleContext<iris_grammarParser::StatementContext>(i);
}


size_t iris_grammarParser::ProgramContext::getRuleIndex() const {
  return iris_grammarParser::RuleProgram;
}


std::any iris_grammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::ProgramContext* iris_grammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, iris_grammarParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4684943360) != 0)) {
      setState(50);
      statement();
      setState(55);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(56);
    match(iris_grammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

iris_grammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::MacroDeclContext* iris_grammarParser::StatementContext::macroDecl() {
  return getRuleContext<iris_grammarParser::MacroDeclContext>(0);
}

iris_grammarParser::UniformDeclContext* iris_grammarParser::StatementContext::uniformDecl() {
  return getRuleContext<iris_grammarParser::UniformDeclContext>(0);
}

iris_grammarParser::VertexDeclContext* iris_grammarParser::StatementContext::vertexDecl() {
  return getRuleContext<iris_grammarParser::VertexDeclContext>(0);
}

iris_grammarParser::OutDeclContext* iris_grammarParser::StatementContext::outDecl() {
  return getRuleContext<iris_grammarParser::OutDeclContext>(0);
}

iris_grammarParser::FuncDeclContext* iris_grammarParser::StatementContext::funcDecl() {
  return getRuleContext<iris_grammarParser::FuncDeclContext>(0);
}

iris_grammarParser::SimpleStmtContext* iris_grammarParser::StatementContext::simpleStmt() {
  return getRuleContext<iris_grammarParser::SimpleStmtContext>(0);
}

tree::TerminalNode* iris_grammarParser::StatementContext::NEWLINE() {
  return getToken(iris_grammarParser::NEWLINE, 0);
}


size_t iris_grammarParser::StatementContext::getRuleIndex() const {
  return iris_grammarParser::RuleStatement;
}


std::any iris_grammarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::StatementContext* iris_grammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, iris_grammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::DEF: {
        enterOuterAlt(_localctx, 1);
        setState(58);
        macroDecl();
        break;
      }

      case iris_grammarParser::UNIFORM: {
        enterOuterAlt(_localctx, 2);
        setState(59);
        uniformDecl();
        break;
      }

      case iris_grammarParser::VERTEX: {
        enterOuterAlt(_localctx, 3);
        setState(60);
        vertexDecl();
        break;
      }

      case iris_grammarParser::OUT: {
        enterOuterAlt(_localctx, 4);
        setState(61);
        outDecl();
        break;
      }

      case iris_grammarParser::FUNC: {
        enterOuterAlt(_localctx, 5);
        setState(62);
        funcDecl();
        break;
      }

      case iris_grammarParser::T__11:
      case iris_grammarParser::T__14:
      case iris_grammarParser::INTEGER:
      case iris_grammarParser::FLOAT:
      case iris_grammarParser::IDENTIFIER:
      case iris_grammarParser::LPAREN: {
        enterOuterAlt(_localctx, 6);
        setState(63);
        simpleStmt();
        break;
      }

      case iris_grammarParser::NEWLINE: {
        enterOuterAlt(_localctx, 7);
        setState(64);
        match(iris_grammarParser::NEWLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleStmtContext ------------------------------------------------------------------

iris_grammarParser::SimpleStmtContext::SimpleStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::ExpressionContext* iris_grammarParser::SimpleStmtContext::expression() {
  return getRuleContext<iris_grammarParser::ExpressionContext>(0);
}

tree::TerminalNode* iris_grammarParser::SimpleStmtContext::NEWLINE() {
  return getToken(iris_grammarParser::NEWLINE, 0);
}


size_t iris_grammarParser::SimpleStmtContext::getRuleIndex() const {
  return iris_grammarParser::RuleSimpleStmt;
}


std::any iris_grammarParser::SimpleStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitSimpleStmt(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::SimpleStmtContext* iris_grammarParser::simpleStmt() {
  SimpleStmtContext *_localctx = _tracker.createInstance<SimpleStmtContext>(_ctx, getState());
  enterRule(_localctx, 4, iris_grammarParser::RuleSimpleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    expression();
    setState(68);
    match(iris_grammarParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MacroDeclContext ------------------------------------------------------------------

iris_grammarParser::MacroDeclContext::MacroDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::MacroDeclContext::DEF() {
  return getToken(iris_grammarParser::DEF, 0);
}

tree::TerminalNode* iris_grammarParser::MacroDeclContext::IDENTIFIER() {
  return getToken(iris_grammarParser::IDENTIFIER, 0);
}

iris_grammarParser::ExpressionContext* iris_grammarParser::MacroDeclContext::expression() {
  return getRuleContext<iris_grammarParser::ExpressionContext>(0);
}

tree::TerminalNode* iris_grammarParser::MacroDeclContext::NEWLINE() {
  return getToken(iris_grammarParser::NEWLINE, 0);
}


size_t iris_grammarParser::MacroDeclContext::getRuleIndex() const {
  return iris_grammarParser::RuleMacroDecl;
}


std::any iris_grammarParser::MacroDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitMacroDecl(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::MacroDeclContext* iris_grammarParser::macroDecl() {
  MacroDeclContext *_localctx = _tracker.createInstance<MacroDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, iris_grammarParser::RuleMacroDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(iris_grammarParser::DEF);
    setState(71);
    match(iris_grammarParser::IDENTIFIER);
    setState(72);
    match(iris_grammarParser::T__0);
    setState(73);
    expression();
    setState(74);
    match(iris_grammarParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UniformDeclContext ------------------------------------------------------------------

iris_grammarParser::UniformDeclContext::UniformDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::UniformDeclContext::UNIFORM() {
  return getToken(iris_grammarParser::UNIFORM, 0);
}

tree::TerminalNode* iris_grammarParser::UniformDeclContext::IDENTIFIER() {
  return getToken(iris_grammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* iris_grammarParser::UniformDeclContext::COLON() {
  return getToken(iris_grammarParser::COLON, 0);
}

iris_grammarParser::TypeContext* iris_grammarParser::UniformDeclContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}

tree::TerminalNode* iris_grammarParser::UniformDeclContext::NEWLINE() {
  return getToken(iris_grammarParser::NEWLINE, 0);
}


size_t iris_grammarParser::UniformDeclContext::getRuleIndex() const {
  return iris_grammarParser::RuleUniformDecl;
}


std::any iris_grammarParser::UniformDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitUniformDecl(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::UniformDeclContext* iris_grammarParser::uniformDecl() {
  UniformDeclContext *_localctx = _tracker.createInstance<UniformDeclContext>(_ctx, getState());
  enterRule(_localctx, 8, iris_grammarParser::RuleUniformDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(iris_grammarParser::UNIFORM);
    setState(77);
    match(iris_grammarParser::IDENTIFIER);
    setState(78);
    match(iris_grammarParser::COLON);
    setState(79);
    type();
    setState(80);
    match(iris_grammarParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VertexDeclContext ------------------------------------------------------------------

iris_grammarParser::VertexDeclContext::VertexDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::VertexDeclContext::VERTEX() {
  return getToken(iris_grammarParser::VERTEX, 0);
}

tree::TerminalNode* iris_grammarParser::VertexDeclContext::LBRACK() {
  return getToken(iris_grammarParser::LBRACK, 0);
}

tree::TerminalNode* iris_grammarParser::VertexDeclContext::INTEGER() {
  return getToken(iris_grammarParser::INTEGER, 0);
}

tree::TerminalNode* iris_grammarParser::VertexDeclContext::RBRACK() {
  return getToken(iris_grammarParser::RBRACK, 0);
}

tree::TerminalNode* iris_grammarParser::VertexDeclContext::IDENTIFIER() {
  return getToken(iris_grammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* iris_grammarParser::VertexDeclContext::COLON() {
  return getToken(iris_grammarParser::COLON, 0);
}

iris_grammarParser::TypeContext* iris_grammarParser::VertexDeclContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}

tree::TerminalNode* iris_grammarParser::VertexDeclContext::NEWLINE() {
  return getToken(iris_grammarParser::NEWLINE, 0);
}


size_t iris_grammarParser::VertexDeclContext::getRuleIndex() const {
  return iris_grammarParser::RuleVertexDecl;
}


std::any iris_grammarParser::VertexDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitVertexDecl(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::VertexDeclContext* iris_grammarParser::vertexDecl() {
  VertexDeclContext *_localctx = _tracker.createInstance<VertexDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, iris_grammarParser::RuleVertexDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(iris_grammarParser::VERTEX);
    setState(83);
    match(iris_grammarParser::LBRACK);
    setState(84);
    match(iris_grammarParser::INTEGER);
    setState(85);
    match(iris_grammarParser::RBRACK);
    setState(86);
    match(iris_grammarParser::IDENTIFIER);
    setState(87);
    match(iris_grammarParser::COLON);
    setState(88);
    type();
    setState(89);
    match(iris_grammarParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutDeclContext ------------------------------------------------------------------

iris_grammarParser::OutDeclContext::OutDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::OutDeclContext::OUT() {
  return getToken(iris_grammarParser::OUT, 0);
}

tree::TerminalNode* iris_grammarParser::OutDeclContext::IDENTIFIER() {
  return getToken(iris_grammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* iris_grammarParser::OutDeclContext::COLON() {
  return getToken(iris_grammarParser::COLON, 0);
}

iris_grammarParser::TypeContext* iris_grammarParser::OutDeclContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}

tree::TerminalNode* iris_grammarParser::OutDeclContext::NEWLINE() {
  return getToken(iris_grammarParser::NEWLINE, 0);
}


size_t iris_grammarParser::OutDeclContext::getRuleIndex() const {
  return iris_grammarParser::RuleOutDecl;
}


std::any iris_grammarParser::OutDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitOutDecl(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::OutDeclContext* iris_grammarParser::outDecl() {
  OutDeclContext *_localctx = _tracker.createInstance<OutDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, iris_grammarParser::RuleOutDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(iris_grammarParser::OUT);
    setState(92);
    match(iris_grammarParser::IDENTIFIER);
    setState(93);
    match(iris_grammarParser::COLON);
    setState(94);
    type();
    setState(95);
    match(iris_grammarParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclContext ------------------------------------------------------------------

iris_grammarParser::FuncDeclContext::FuncDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::FuncDeclContext::FUNC() {
  return getToken(iris_grammarParser::FUNC, 0);
}

tree::TerminalNode* iris_grammarParser::FuncDeclContext::IDENTIFIER() {
  return getToken(iris_grammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* iris_grammarParser::FuncDeclContext::LPAREN() {
  return getToken(iris_grammarParser::LPAREN, 0);
}

tree::TerminalNode* iris_grammarParser::FuncDeclContext::RPAREN() {
  return getToken(iris_grammarParser::RPAREN, 0);
}

tree::TerminalNode* iris_grammarParser::FuncDeclContext::ARROW() {
  return getToken(iris_grammarParser::ARROW, 0);
}

iris_grammarParser::TypeContext* iris_grammarParser::FuncDeclContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}

tree::TerminalNode* iris_grammarParser::FuncDeclContext::COLON() {
  return getToken(iris_grammarParser::COLON, 0);
}

tree::TerminalNode* iris_grammarParser::FuncDeclContext::NEWLINE() {
  return getToken(iris_grammarParser::NEWLINE, 0);
}

tree::TerminalNode* iris_grammarParser::FuncDeclContext::INDENT() {
  return getToken(iris_grammarParser::INDENT, 0);
}

iris_grammarParser::BlockContext* iris_grammarParser::FuncDeclContext::block() {
  return getRuleContext<iris_grammarParser::BlockContext>(0);
}

tree::TerminalNode* iris_grammarParser::FuncDeclContext::DEDENT() {
  return getToken(iris_grammarParser::DEDENT, 0);
}

iris_grammarParser::ParamListContext* iris_grammarParser::FuncDeclContext::paramList() {
  return getRuleContext<iris_grammarParser::ParamListContext>(0);
}


size_t iris_grammarParser::FuncDeclContext::getRuleIndex() const {
  return iris_grammarParser::RuleFuncDecl;
}


std::any iris_grammarParser::FuncDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitFuncDecl(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::FuncDeclContext* iris_grammarParser::funcDecl() {
  FuncDeclContext *_localctx = _tracker.createInstance<FuncDeclContext>(_ctx, getState());
  enterRule(_localctx, 14, iris_grammarParser::RuleFuncDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(iris_grammarParser::FUNC);
    setState(98);
    match(iris_grammarParser::IDENTIFIER);
    setState(99);
    match(iris_grammarParser::LPAREN);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::IDENTIFIER) {
      setState(100);
      paramList();
    }
    setState(103);
    match(iris_grammarParser::RPAREN);
    setState(104);
    match(iris_grammarParser::ARROW);
    setState(105);
    type();
    setState(106);
    match(iris_grammarParser::COLON);
    setState(107);
    match(iris_grammarParser::NEWLINE);
    setState(108);
    match(iris_grammarParser::INDENT);
    setState(109);
    block();
    setState(110);
    match(iris_grammarParser::DEDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

iris_grammarParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::ParamContext *> iris_grammarParser::ParamListContext::param() {
  return getRuleContexts<iris_grammarParser::ParamContext>();
}

iris_grammarParser::ParamContext* iris_grammarParser::ParamListContext::param(size_t i) {
  return getRuleContext<iris_grammarParser::ParamContext>(i);
}


size_t iris_grammarParser::ParamListContext::getRuleIndex() const {
  return iris_grammarParser::RuleParamList;
}


std::any iris_grammarParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::ParamListContext* iris_grammarParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 16, iris_grammarParser::RuleParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    param();
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__1) {
      setState(113);
      match(iris_grammarParser::T__1);
      setState(114);
      param();
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

iris_grammarParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::ParamContext::IDENTIFIER() {
  return getToken(iris_grammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* iris_grammarParser::ParamContext::COLON() {
  return getToken(iris_grammarParser::COLON, 0);
}

iris_grammarParser::TypeContext* iris_grammarParser::ParamContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}


size_t iris_grammarParser::ParamContext::getRuleIndex() const {
  return iris_grammarParser::RuleParam;
}


std::any iris_grammarParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::ParamContext* iris_grammarParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 18, iris_grammarParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(iris_grammarParser::IDENTIFIER);
    setState(121);
    match(iris_grammarParser::COLON);
    setState(122);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

iris_grammarParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::StatementContext *> iris_grammarParser::BlockContext::statement() {
  return getRuleContexts<iris_grammarParser::StatementContext>();
}

iris_grammarParser::StatementContext* iris_grammarParser::BlockContext::statement(size_t i) {
  return getRuleContext<iris_grammarParser::StatementContext>(i);
}


size_t iris_grammarParser::BlockContext::getRuleIndex() const {
  return iris_grammarParser::RuleBlock;
}


std::any iris_grammarParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::BlockContext* iris_grammarParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 20, iris_grammarParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(124);
      statement();
      setState(127); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4684943360) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

iris_grammarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::AssignmentContext* iris_grammarParser::ExpressionContext::assignment() {
  return getRuleContext<iris_grammarParser::AssignmentContext>(0);
}


size_t iris_grammarParser::ExpressionContext::getRuleIndex() const {
  return iris_grammarParser::RuleExpression;
}


std::any iris_grammarParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::ExpressionContext* iris_grammarParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 22, iris_grammarParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    assignment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

iris_grammarParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::LogicalOrContext* iris_grammarParser::AssignmentContext::logicalOr() {
  return getRuleContext<iris_grammarParser::LogicalOrContext>(0);
}

iris_grammarParser::AssignmentContext* iris_grammarParser::AssignmentContext::assignment() {
  return getRuleContext<iris_grammarParser::AssignmentContext>(0);
}


size_t iris_grammarParser::AssignmentContext::getRuleIndex() const {
  return iris_grammarParser::RuleAssignment;
}


std::any iris_grammarParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::AssignmentContext* iris_grammarParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 24, iris_grammarParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    logicalOr();
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__0) {
      setState(132);
      match(iris_grammarParser::T__0);
      setState(133);
      assignment();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrContext ------------------------------------------------------------------

iris_grammarParser::LogicalOrContext::LogicalOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::LogicalAndContext *> iris_grammarParser::LogicalOrContext::logicalAnd() {
  return getRuleContexts<iris_grammarParser::LogicalAndContext>();
}

iris_grammarParser::LogicalAndContext* iris_grammarParser::LogicalOrContext::logicalAnd(size_t i) {
  return getRuleContext<iris_grammarParser::LogicalAndContext>(i);
}


size_t iris_grammarParser::LogicalOrContext::getRuleIndex() const {
  return iris_grammarParser::RuleLogicalOr;
}


std::any iris_grammarParser::LogicalOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitLogicalOr(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::LogicalOrContext* iris_grammarParser::logicalOr() {
  LogicalOrContext *_localctx = _tracker.createInstance<LogicalOrContext>(_ctx, getState());
  enterRule(_localctx, 26, iris_grammarParser::RuleLogicalOr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    logicalAnd();
    setState(141);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__2) {
      setState(137);
      match(iris_grammarParser::T__2);
      setState(138);
      logicalAnd();
      setState(143);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndContext ------------------------------------------------------------------

iris_grammarParser::LogicalAndContext::LogicalAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::EqualityContext *> iris_grammarParser::LogicalAndContext::equality() {
  return getRuleContexts<iris_grammarParser::EqualityContext>();
}

iris_grammarParser::EqualityContext* iris_grammarParser::LogicalAndContext::equality(size_t i) {
  return getRuleContext<iris_grammarParser::EqualityContext>(i);
}


size_t iris_grammarParser::LogicalAndContext::getRuleIndex() const {
  return iris_grammarParser::RuleLogicalAnd;
}


std::any iris_grammarParser::LogicalAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitLogicalAnd(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::LogicalAndContext* iris_grammarParser::logicalAnd() {
  LogicalAndContext *_localctx = _tracker.createInstance<LogicalAndContext>(_ctx, getState());
  enterRule(_localctx, 28, iris_grammarParser::RuleLogicalAnd);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    equality();
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__3) {
      setState(145);
      match(iris_grammarParser::T__3);
      setState(146);
      equality();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityContext ------------------------------------------------------------------

iris_grammarParser::EqualityContext::EqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::ComparisonContext *> iris_grammarParser::EqualityContext::comparison() {
  return getRuleContexts<iris_grammarParser::ComparisonContext>();
}

iris_grammarParser::ComparisonContext* iris_grammarParser::EqualityContext::comparison(size_t i) {
  return getRuleContext<iris_grammarParser::ComparisonContext>(i);
}


size_t iris_grammarParser::EqualityContext::getRuleIndex() const {
  return iris_grammarParser::RuleEquality;
}


std::any iris_grammarParser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitEquality(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::EqualityContext* iris_grammarParser::equality() {
  EqualityContext *_localctx = _tracker.createInstance<EqualityContext>(_ctx, getState());
  enterRule(_localctx, 30, iris_grammarParser::RuleEquality);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    comparison();
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__4

    || _la == iris_grammarParser::T__5) {
      setState(153);
      _la = _input->LA(1);
      if (!(_la == iris_grammarParser::T__4

      || _la == iris_grammarParser::T__5)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(154);
      comparison();
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

iris_grammarParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::TermContext *> iris_grammarParser::ComparisonContext::term() {
  return getRuleContexts<iris_grammarParser::TermContext>();
}

iris_grammarParser::TermContext* iris_grammarParser::ComparisonContext::term(size_t i) {
  return getRuleContext<iris_grammarParser::TermContext>(i);
}


size_t iris_grammarParser::ComparisonContext::getRuleIndex() const {
  return iris_grammarParser::RuleComparison;
}


std::any iris_grammarParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::ComparisonContext* iris_grammarParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 32, iris_grammarParser::RuleComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    term();
    setState(165);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1920) != 0)) {
      setState(161);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1920) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(162);
      term();
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

iris_grammarParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::FactorContext *> iris_grammarParser::TermContext::factor() {
  return getRuleContexts<iris_grammarParser::FactorContext>();
}

iris_grammarParser::FactorContext* iris_grammarParser::TermContext::factor(size_t i) {
  return getRuleContext<iris_grammarParser::FactorContext>(i);
}


size_t iris_grammarParser::TermContext::getRuleIndex() const {
  return iris_grammarParser::RuleTerm;
}


std::any iris_grammarParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::TermContext* iris_grammarParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 34, iris_grammarParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    factor();
    setState(173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__10

    || _la == iris_grammarParser::T__11) {
      setState(169);
      _la = _input->LA(1);
      if (!(_la == iris_grammarParser::T__10

      || _la == iris_grammarParser::T__11)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(170);
      factor();
      setState(175);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

iris_grammarParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::UnaryContext *> iris_grammarParser::FactorContext::unary() {
  return getRuleContexts<iris_grammarParser::UnaryContext>();
}

iris_grammarParser::UnaryContext* iris_grammarParser::FactorContext::unary(size_t i) {
  return getRuleContext<iris_grammarParser::UnaryContext>(i);
}


size_t iris_grammarParser::FactorContext::getRuleIndex() const {
  return iris_grammarParser::RuleFactor;
}


std::any iris_grammarParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::FactorContext* iris_grammarParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 36, iris_grammarParser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    unary();
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__12

    || _la == iris_grammarParser::T__13) {
      setState(177);
      _la = _input->LA(1);
      if (!(_la == iris_grammarParser::T__12

      || _la == iris_grammarParser::T__13)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(178);
      unary();
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryContext ------------------------------------------------------------------

iris_grammarParser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::UnaryContext* iris_grammarParser::UnaryContext::unary() {
  return getRuleContext<iris_grammarParser::UnaryContext>(0);
}

iris_grammarParser::PrimaryContext* iris_grammarParser::UnaryContext::primary() {
  return getRuleContext<iris_grammarParser::PrimaryContext>(0);
}


size_t iris_grammarParser::UnaryContext::getRuleIndex() const {
  return iris_grammarParser::RuleUnary;
}


std::any iris_grammarParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::UnaryContext* iris_grammarParser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 38, iris_grammarParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__11:
      case iris_grammarParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(184);
        _la = _input->LA(1);
        if (!(_la == iris_grammarParser::T__11

        || _la == iris_grammarParser::T__14)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(185);
        unary();
        break;
      }

      case iris_grammarParser::INTEGER:
      case iris_grammarParser::FLOAT:
      case iris_grammarParser::IDENTIFIER:
      case iris_grammarParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(186);
        primary();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

iris_grammarParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::LiteralContext* iris_grammarParser::PrimaryContext::literal() {
  return getRuleContext<iris_grammarParser::LiteralContext>(0);
}

std::vector<tree::TerminalNode *> iris_grammarParser::PrimaryContext::IDENTIFIER() {
  return getTokens(iris_grammarParser::IDENTIFIER);
}

tree::TerminalNode* iris_grammarParser::PrimaryContext::IDENTIFIER(size_t i) {
  return getToken(iris_grammarParser::IDENTIFIER, i);
}

iris_grammarParser::FunctionCallContext* iris_grammarParser::PrimaryContext::functionCall() {
  return getRuleContext<iris_grammarParser::FunctionCallContext>(0);
}

tree::TerminalNode* iris_grammarParser::PrimaryContext::LPAREN() {
  return getToken(iris_grammarParser::LPAREN, 0);
}

iris_grammarParser::ExpressionContext* iris_grammarParser::PrimaryContext::expression() {
  return getRuleContext<iris_grammarParser::ExpressionContext>(0);
}

tree::TerminalNode* iris_grammarParser::PrimaryContext::RPAREN() {
  return getToken(iris_grammarParser::RPAREN, 0);
}


size_t iris_grammarParser::PrimaryContext::getRuleIndex() const {
  return iris_grammarParser::RulePrimary;
}


std::any iris_grammarParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::PrimaryContext* iris_grammarParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 40, iris_grammarParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(199);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(189);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(190);
      match(iris_grammarParser::IDENTIFIER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(191);
      match(iris_grammarParser::IDENTIFIER);
      setState(192);
      match(iris_grammarParser::T__15);
      setState(193);
      match(iris_grammarParser::IDENTIFIER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(194);
      functionCall();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(195);
      match(iris_grammarParser::LPAREN);
      setState(196);
      expression();
      setState(197);
      match(iris_grammarParser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

iris_grammarParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::FunctionCallContext::IDENTIFIER() {
  return getToken(iris_grammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* iris_grammarParser::FunctionCallContext::LPAREN() {
  return getToken(iris_grammarParser::LPAREN, 0);
}

tree::TerminalNode* iris_grammarParser::FunctionCallContext::RPAREN() {
  return getToken(iris_grammarParser::RPAREN, 0);
}

iris_grammarParser::ArgumentListContext* iris_grammarParser::FunctionCallContext::argumentList() {
  return getRuleContext<iris_grammarParser::ArgumentListContext>(0);
}


size_t iris_grammarParser::FunctionCallContext::getRuleIndex() const {
  return iris_grammarParser::RuleFunctionCall;
}


std::any iris_grammarParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::FunctionCallContext* iris_grammarParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 42, iris_grammarParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(iris_grammarParser::IDENTIFIER);
    setState(202);
    match(iris_grammarParser::LPAREN);
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 385912832) != 0)) {
      setState(203);
      argumentList();
    }
    setState(206);
    match(iris_grammarParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

iris_grammarParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::ExpressionContext *> iris_grammarParser::ArgumentListContext::expression() {
  return getRuleContexts<iris_grammarParser::ExpressionContext>();
}

iris_grammarParser::ExpressionContext* iris_grammarParser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<iris_grammarParser::ExpressionContext>(i);
}


size_t iris_grammarParser::ArgumentListContext::getRuleIndex() const {
  return iris_grammarParser::RuleArgumentList;
}


std::any iris_grammarParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::ArgumentListContext* iris_grammarParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 44, iris_grammarParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    expression();
    setState(213);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__1) {
      setState(209);
      match(iris_grammarParser::T__1);
      setState(210);
      expression();
      setState(215);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

iris_grammarParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::LiteralContext::INTEGER() {
  return getToken(iris_grammarParser::INTEGER, 0);
}

tree::TerminalNode* iris_grammarParser::LiteralContext::FLOAT() {
  return getToken(iris_grammarParser::FLOAT, 0);
}


size_t iris_grammarParser::LiteralContext::getRuleIndex() const {
  return iris_grammarParser::RuleLiteral;
}


std::any iris_grammarParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::LiteralContext* iris_grammarParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 46, iris_grammarParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    _la = _input->LA(1);
    if (!(_la == iris_grammarParser::INTEGER

    || _la == iris_grammarParser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

iris_grammarParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::TypeContext::IDENTIFIER() {
  return getToken(iris_grammarParser::IDENTIFIER, 0);
}


size_t iris_grammarParser::TypeContext::getRuleIndex() const {
  return iris_grammarParser::RuleType;
}


std::any iris_grammarParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::TypeContext* iris_grammarParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 48, iris_grammarParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(iris_grammarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void iris_grammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  iris_grammarParserInitialize();
#else
  ::antlr4::internal::call_once(iris_grammarParserOnceFlag, iris_grammarParserInitialize);
#endif
}
