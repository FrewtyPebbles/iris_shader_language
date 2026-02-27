
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
      "root", "function_definition", "conditional", "conditional_block", 
      "block", "statement", "expr", "descriptor", "declaration", "type", 
      "precision_qualifier"
    },
    std::vector<std::string>{
      "", "'func'", "'('", "','", "')'", "'->'", "'if'", "'then'", "'else'", 
      "'elif'", "'{'", "'}'", "';'", "'||'", "'|'", "'['", "']'", "'.'", 
      "'not'", "'bits_not'", "'+'", "'-'", "'norm'", "'inv'", "'trans'", 
      "'det'", "'deg'", "'rad'", "'^'", "'*'", "'/'", "'%'", "'''", "'><'", 
      "'<->'", "'bits_left'", "'bits_right'", "'bits_and'", "'bits_xor'", 
      "'bits_or'", "'and'", "'or'", "'<'", "'>'", "'>='", "'<='", "'=='", 
      "'as'", "'='", "'^='", "'*='", "'/='", "'%='", "''='", "'><='", "'<->='", 
      "'+='", "'-='", "'bits_left='", "'bits_right='", "'bits_and='", "'bits_xor='", 
      "'bits_or='", "'and='", "'or='", "'def'", "'in'", "'out'", "'uniform'", 
      "'vertex'", "'mut'", "':'", "'none'", "'i8'", "'i16'", "'i32'", "'u8'", 
      "'u16'", "'u32'", "'f8'", "'f16'", "'f32'", "'f64'", "'bool'", "'vec2'", 
      "'vec3'", "'vec4'", "'v2'", "'v3'", "'v4'", "'m2'", "'m3'", "'m4'", 
      "'m2x2'", "'m3x3'", "'m4x4'", "'m2x3'", "'m3x2'", "'m3x4'", "'m4x3'", 
      "'m2x4'", "'m4x2'", "'mat2'", "'mat3'", "'mat4'", "'mat2x3'", "'mat2x4'", 
      "'mat3x2'", "'mat3x4'", "'mat4x2'", "'mat4x3'", "'lp'", "'mp'", "'hp'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "PRIMITIVE", "FLOAT", 
      "LABEL", "INT", "NEWLINE", "WS", "BLOCK_COMMENT", "LINE_COMMENT", 
      "ERROR_TOKEN"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,122,248,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,1,0,5,0,26,8,0,10,0,12,0,29,9,
  	0,1,1,1,1,1,1,1,1,1,1,1,1,5,1,37,8,1,10,1,12,1,40,9,1,3,1,42,8,1,1,1,
  	3,1,45,8,1,1,1,1,1,1,1,3,1,50,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,
  	1,3,1,3,3,3,63,8,3,1,3,1,3,1,3,1,3,3,3,69,8,3,5,3,71,8,3,10,3,12,3,74,
  	9,3,1,3,1,3,1,3,3,3,79,8,3,3,3,81,8,3,1,4,1,4,5,4,85,8,4,10,4,12,4,88,
  	9,4,1,4,1,4,1,5,1,5,1,5,1,5,3,5,96,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,138,8,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,187,8,6,10,6,12,
  	6,190,9,6,3,6,192,8,6,1,6,1,6,1,6,1,6,1,6,1,6,4,6,200,8,6,11,6,12,6,201,
  	1,6,1,6,1,6,5,6,207,8,6,10,6,12,6,210,9,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,3,7,221,8,7,1,8,5,8,224,8,8,10,8,12,8,227,9,8,1,8,1,8,1,8,3,8,
  	232,8,8,1,9,3,9,235,8,9,1,9,1,9,1,9,1,9,5,9,241,8,9,10,9,12,9,244,9,9,
  	1,10,1,10,1,10,0,1,12,11,0,2,4,6,8,10,12,14,16,18,20,0,15,2,0,12,12,118,
  	118,1,0,18,27,1,0,49,55,1,0,56,57,1,0,58,59,1,0,60,62,1,0,63,64,1,0,29,
  	34,1,0,20,21,1,0,35,36,1,0,37,39,1,0,40,41,1,0,42,46,1,0,72,110,1,0,111,
  	113,289,0,27,1,0,0,0,2,30,1,0,0,0,4,51,1,0,0,0,6,58,1,0,0,0,8,82,1,0,
  	0,0,10,95,1,0,0,0,12,137,1,0,0,0,14,220,1,0,0,0,16,225,1,0,0,0,18,234,
  	1,0,0,0,20,245,1,0,0,0,22,26,3,2,1,0,23,26,3,10,5,0,24,26,5,118,0,0,25,
  	22,1,0,0,0,25,23,1,0,0,0,25,24,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,
  	28,1,0,0,0,28,1,1,0,0,0,29,27,1,0,0,0,30,31,5,1,0,0,31,32,5,116,0,0,32,
  	41,5,2,0,0,33,38,3,16,8,0,34,35,5,3,0,0,35,37,3,16,8,0,36,34,1,0,0,0,
  	37,40,1,0,0,0,38,36,1,0,0,0,38,39,1,0,0,0,39,42,1,0,0,0,40,38,1,0,0,0,
  	41,33,1,0,0,0,41,42,1,0,0,0,42,44,1,0,0,0,43,45,5,3,0,0,44,43,1,0,0,0,
  	44,45,1,0,0,0,45,46,1,0,0,0,46,49,5,4,0,0,47,48,5,5,0,0,48,50,3,18,9,
  	0,49,47,1,0,0,0,49,50,1,0,0,0,50,3,1,0,0,0,51,52,5,6,0,0,52,53,3,12,6,
  	0,53,54,5,7,0,0,54,55,3,12,6,0,55,56,5,8,0,0,56,57,3,12,6,0,57,5,1,0,
  	0,0,58,59,5,6,0,0,59,62,3,12,6,0,60,63,3,8,4,0,61,63,3,10,5,0,62,60,1,
  	0,0,0,62,61,1,0,0,0,63,72,1,0,0,0,64,65,5,9,0,0,65,68,3,12,6,0,66,69,
  	3,8,4,0,67,69,3,10,5,0,68,66,1,0,0,0,68,67,1,0,0,0,69,71,1,0,0,0,70,64,
  	1,0,0,0,71,74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,80,1,0,0,0,74,72,
  	1,0,0,0,75,78,5,8,0,0,76,79,3,8,4,0,77,79,3,10,5,0,78,76,1,0,0,0,78,77,
  	1,0,0,0,79,81,1,0,0,0,80,75,1,0,0,0,80,81,1,0,0,0,81,7,1,0,0,0,82,86,
  	5,10,0,0,83,85,3,10,5,0,84,83,1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,86,
  	87,1,0,0,0,87,89,1,0,0,0,88,86,1,0,0,0,89,90,5,11,0,0,90,9,1,0,0,0,91,
  	96,3,12,6,0,92,93,3,16,8,0,93,94,7,0,0,0,94,96,1,0,0,0,95,91,1,0,0,0,
  	95,92,1,0,0,0,96,11,1,0,0,0,97,98,6,6,-1,0,98,99,5,2,0,0,99,100,3,12,
  	6,0,100,101,5,4,0,0,101,138,1,0,0,0,102,103,5,13,0,0,103,104,3,12,6,0,
  	104,105,5,13,0,0,105,138,1,0,0,0,106,107,5,14,0,0,107,108,3,12,6,0,108,
  	109,5,14,0,0,109,138,1,0,0,0,110,111,7,1,0,0,111,138,3,12,6,22,112,113,
  	3,16,8,0,113,114,5,48,0,0,114,115,3,12,6,12,115,138,1,0,0,0,116,117,3,
  	16,8,0,117,118,7,2,0,0,118,119,3,12,6,10,119,138,1,0,0,0,120,121,3,16,
  	8,0,121,122,7,3,0,0,122,123,3,12,6,8,123,138,1,0,0,0,124,125,3,16,8,0,
  	125,126,7,4,0,0,126,127,3,12,6,6,127,138,1,0,0,0,128,129,3,16,8,0,129,
  	130,7,5,0,0,130,131,3,12,6,4,131,138,1,0,0,0,132,133,3,16,8,0,133,134,
  	7,6,0,0,134,135,3,12,6,2,135,138,1,0,0,0,136,138,5,114,0,0,137,97,1,0,
  	0,0,137,102,1,0,0,0,137,106,1,0,0,0,137,110,1,0,0,0,137,112,1,0,0,0,137,
  	116,1,0,0,0,137,120,1,0,0,0,137,124,1,0,0,0,137,128,1,0,0,0,137,132,1,
  	0,0,0,137,136,1,0,0,0,138,208,1,0,0,0,139,140,10,23,0,0,140,141,5,17,
  	0,0,141,207,3,12,6,24,142,143,10,21,0,0,143,144,5,28,0,0,144,207,3,12,
  	6,22,145,146,10,20,0,0,146,147,7,7,0,0,147,207,3,12,6,21,148,149,10,19,
  	0,0,149,150,7,8,0,0,150,207,3,12,6,20,151,152,10,18,0,0,152,153,7,9,0,
  	0,153,207,3,12,6,19,154,155,10,17,0,0,155,156,7,10,0,0,156,207,3,12,6,
  	18,157,158,10,16,0,0,158,159,7,11,0,0,159,207,3,12,6,17,160,161,10,15,
  	0,0,161,162,7,12,0,0,162,207,3,12,6,16,163,164,10,13,0,0,164,165,5,48,
  	0,0,165,207,3,12,6,13,166,167,10,11,0,0,167,168,7,2,0,0,168,207,3,12,
  	6,12,169,170,10,9,0,0,170,171,7,3,0,0,171,207,3,12,6,10,172,173,10,7,
  	0,0,173,174,7,4,0,0,174,207,3,12,6,8,175,176,10,5,0,0,176,177,7,5,0,0,
  	177,207,3,12,6,6,178,179,10,3,0,0,179,180,7,6,0,0,180,207,3,12,6,4,181,
  	182,10,28,0,0,182,191,5,2,0,0,183,188,3,12,6,0,184,185,5,3,0,0,185,187,
  	3,12,6,0,186,184,1,0,0,0,187,190,1,0,0,0,188,186,1,0,0,0,188,189,1,0,
  	0,0,189,192,1,0,0,0,190,188,1,0,0,0,191,183,1,0,0,0,191,192,1,0,0,0,192,
  	193,1,0,0,0,193,207,5,4,0,0,194,199,10,24,0,0,195,196,5,15,0,0,196,197,
  	3,12,6,0,197,198,5,16,0,0,198,200,1,0,0,0,199,195,1,0,0,0,200,201,1,0,
  	0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,207,1,0,0,0,203,204,10,14,0,0,
  	204,205,5,47,0,0,205,207,3,18,9,0,206,139,1,0,0,0,206,142,1,0,0,0,206,
  	145,1,0,0,0,206,148,1,0,0,0,206,151,1,0,0,0,206,154,1,0,0,0,206,157,1,
  	0,0,0,206,160,1,0,0,0,206,163,1,0,0,0,206,166,1,0,0,0,206,169,1,0,0,0,
  	206,172,1,0,0,0,206,175,1,0,0,0,206,178,1,0,0,0,206,181,1,0,0,0,206,194,
  	1,0,0,0,206,203,1,0,0,0,207,210,1,0,0,0,208,206,1,0,0,0,208,209,1,0,0,
  	0,209,13,1,0,0,0,210,208,1,0,0,0,211,221,5,65,0,0,212,221,5,66,0,0,213,
  	221,5,67,0,0,214,221,5,68,0,0,215,216,5,69,0,0,216,217,5,15,0,0,217,218,
  	5,117,0,0,218,221,5,16,0,0,219,221,5,70,0,0,220,211,1,0,0,0,220,212,1,
  	0,0,0,220,213,1,0,0,0,220,214,1,0,0,0,220,215,1,0,0,0,220,219,1,0,0,0,
  	221,15,1,0,0,0,222,224,3,14,7,0,223,222,1,0,0,0,224,227,1,0,0,0,225,223,
  	1,0,0,0,225,226,1,0,0,0,226,228,1,0,0,0,227,225,1,0,0,0,228,231,5,116,
  	0,0,229,230,5,71,0,0,230,232,3,18,9,0,231,229,1,0,0,0,231,232,1,0,0,0,
  	232,17,1,0,0,0,233,235,3,20,10,0,234,233,1,0,0,0,234,235,1,0,0,0,235,
  	236,1,0,0,0,236,242,7,13,0,0,237,238,5,15,0,0,238,239,5,117,0,0,239,241,
  	5,16,0,0,240,237,1,0,0,0,241,244,1,0,0,0,242,240,1,0,0,0,242,243,1,0,
  	0,0,243,19,1,0,0,0,244,242,1,0,0,0,245,246,7,14,0,0,246,21,1,0,0,0,24,
  	25,27,38,41,44,49,62,68,72,78,80,86,95,137,188,191,201,206,208,220,225,
  	231,234,242
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


//----------------- RootContext ------------------------------------------------------------------

iris_grammarParser::RootContext::RootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::Function_definitionContext *> iris_grammarParser::RootContext::function_definition() {
  return getRuleContexts<iris_grammarParser::Function_definitionContext>();
}

iris_grammarParser::Function_definitionContext* iris_grammarParser::RootContext::function_definition(size_t i) {
  return getRuleContext<iris_grammarParser::Function_definitionContext>(i);
}

std::vector<iris_grammarParser::StatementContext *> iris_grammarParser::RootContext::statement() {
  return getRuleContexts<iris_grammarParser::StatementContext>();
}

iris_grammarParser::StatementContext* iris_grammarParser::RootContext::statement(size_t i) {
  return getRuleContext<iris_grammarParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> iris_grammarParser::RootContext::NEWLINE() {
  return getTokens(iris_grammarParser::NEWLINE);
}

tree::TerminalNode* iris_grammarParser::RootContext::NEWLINE(size_t i) {
  return getToken(iris_grammarParser::NEWLINE, i);
}


size_t iris_grammarParser::RootContext::getRuleIndex() const {
  return iris_grammarParser::RuleRoot;
}


std::any iris_grammarParser::RootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitRoot(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::RootContext* iris_grammarParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 0, iris_grammarParser::RuleRoot);
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
    setState(27);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 268197894) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 11821949021847615) != 0)) {
      setState(25);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__0: {
          setState(22);
          function_definition();
          break;
        }

        case iris_grammarParser::T__1:
        case iris_grammarParser::T__12:
        case iris_grammarParser::T__13:
        case iris_grammarParser::T__17:
        case iris_grammarParser::T__18:
        case iris_grammarParser::T__19:
        case iris_grammarParser::T__20:
        case iris_grammarParser::T__21:
        case iris_grammarParser::T__22:
        case iris_grammarParser::T__23:
        case iris_grammarParser::T__24:
        case iris_grammarParser::T__25:
        case iris_grammarParser::T__26:
        case iris_grammarParser::T__64:
        case iris_grammarParser::T__65:
        case iris_grammarParser::T__66:
        case iris_grammarParser::T__67:
        case iris_grammarParser::T__68:
        case iris_grammarParser::T__69:
        case iris_grammarParser::PRIMITIVE:
        case iris_grammarParser::LABEL: {
          setState(23);
          statement();
          break;
        }

        case iris_grammarParser::NEWLINE: {
          setState(24);
          match(iris_grammarParser::NEWLINE);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(29);
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

//----------------- Function_definitionContext ------------------------------------------------------------------

iris_grammarParser::Function_definitionContext::Function_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Function_definitionContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}

std::vector<iris_grammarParser::DeclarationContext *> iris_grammarParser::Function_definitionContext::declaration() {
  return getRuleContexts<iris_grammarParser::DeclarationContext>();
}

iris_grammarParser::DeclarationContext* iris_grammarParser::Function_definitionContext::declaration(size_t i) {
  return getRuleContext<iris_grammarParser::DeclarationContext>(i);
}

iris_grammarParser::TypeContext* iris_grammarParser::Function_definitionContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}


size_t iris_grammarParser::Function_definitionContext::getRuleIndex() const {
  return iris_grammarParser::RuleFunction_definition;
}


std::any iris_grammarParser::Function_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitFunction_definition(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Function_definitionContext* iris_grammarParser::function_definition() {
  Function_definitionContext *_localctx = _tracker.createInstance<Function_definitionContext>(_ctx, getState());
  enterRule(_localctx, 2, iris_grammarParser::RuleFunction_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(30);
    match(iris_grammarParser::T__0);
    setState(31);
    match(iris_grammarParser::LABEL);
    setState(32);
    match(iris_grammarParser::T__1);
    setState(41);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 2251799813685311) != 0)) {
      setState(33);
      declaration();
      setState(38);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(34);
          match(iris_grammarParser::T__2);
          setState(35);
          declaration(); 
        }
        setState(40);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
      }
    }
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__2) {
      setState(43);
      match(iris_grammarParser::T__2);
    }
    setState(46);
    match(iris_grammarParser::T__3);
    setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__4) {
      setState(47);
      match(iris_grammarParser::T__4);
      setState(48);
      type();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalContext ------------------------------------------------------------------

iris_grammarParser::ConditionalContext::ConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::ConditionalContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::ConditionalContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}


size_t iris_grammarParser::ConditionalContext::getRuleIndex() const {
  return iris_grammarParser::RuleConditional;
}


std::any iris_grammarParser::ConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitConditional(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::ConditionalContext* iris_grammarParser::conditional() {
  ConditionalContext *_localctx = _tracker.createInstance<ConditionalContext>(_ctx, getState());
  enterRule(_localctx, 4, iris_grammarParser::RuleConditional);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(iris_grammarParser::T__5);
    setState(52);
    expr(0);
    setState(53);
    match(iris_grammarParser::T__6);
    setState(54);
    expr(0);
    setState(55);
    match(iris_grammarParser::T__7);
    setState(56);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_blockContext ------------------------------------------------------------------

iris_grammarParser::Conditional_blockContext::Conditional_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::Conditional_blockContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::Conditional_blockContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}

std::vector<iris_grammarParser::BlockContext *> iris_grammarParser::Conditional_blockContext::block() {
  return getRuleContexts<iris_grammarParser::BlockContext>();
}

iris_grammarParser::BlockContext* iris_grammarParser::Conditional_blockContext::block(size_t i) {
  return getRuleContext<iris_grammarParser::BlockContext>(i);
}

std::vector<iris_grammarParser::StatementContext *> iris_grammarParser::Conditional_blockContext::statement() {
  return getRuleContexts<iris_grammarParser::StatementContext>();
}

iris_grammarParser::StatementContext* iris_grammarParser::Conditional_blockContext::statement(size_t i) {
  return getRuleContext<iris_grammarParser::StatementContext>(i);
}


size_t iris_grammarParser::Conditional_blockContext::getRuleIndex() const {
  return iris_grammarParser::RuleConditional_block;
}


std::any iris_grammarParser::Conditional_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitConditional_block(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Conditional_blockContext* iris_grammarParser::conditional_block() {
  Conditional_blockContext *_localctx = _tracker.createInstance<Conditional_blockContext>(_ctx, getState());
  enterRule(_localctx, 6, iris_grammarParser::RuleConditional_block);
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
    setState(58);
    match(iris_grammarParser::T__5);
    setState(59);
    expr(0);
    setState(62);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__9: {
        setState(60);
        block();
        break;
      }

      case iris_grammarParser::T__1:
      case iris_grammarParser::T__12:
      case iris_grammarParser::T__13:
      case iris_grammarParser::T__17:
      case iris_grammarParser::T__18:
      case iris_grammarParser::T__19:
      case iris_grammarParser::T__20:
      case iris_grammarParser::T__21:
      case iris_grammarParser::T__22:
      case iris_grammarParser::T__23:
      case iris_grammarParser::T__24:
      case iris_grammarParser::T__25:
      case iris_grammarParser::T__26:
      case iris_grammarParser::T__64:
      case iris_grammarParser::T__65:
      case iris_grammarParser::T__66:
      case iris_grammarParser::T__67:
      case iris_grammarParser::T__68:
      case iris_grammarParser::T__69:
      case iris_grammarParser::PRIMITIVE:
      case iris_grammarParser::LABEL: {
        setState(61);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__8) {
      setState(64);
      match(iris_grammarParser::T__8);
      setState(65);
      expr(0);
      setState(68);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__9: {
          setState(66);
          block();
          break;
        }

        case iris_grammarParser::T__1:
        case iris_grammarParser::T__12:
        case iris_grammarParser::T__13:
        case iris_grammarParser::T__17:
        case iris_grammarParser::T__18:
        case iris_grammarParser::T__19:
        case iris_grammarParser::T__20:
        case iris_grammarParser::T__21:
        case iris_grammarParser::T__22:
        case iris_grammarParser::T__23:
        case iris_grammarParser::T__24:
        case iris_grammarParser::T__25:
        case iris_grammarParser::T__26:
        case iris_grammarParser::T__64:
        case iris_grammarParser::T__65:
        case iris_grammarParser::T__66:
        case iris_grammarParser::T__67:
        case iris_grammarParser::T__68:
        case iris_grammarParser::T__69:
        case iris_grammarParser::PRIMITIVE:
        case iris_grammarParser::LABEL: {
          setState(67);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(74);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__7) {
      setState(75);
      match(iris_grammarParser::T__7);
      setState(78);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__9: {
          setState(76);
          block();
          break;
        }

        case iris_grammarParser::T__1:
        case iris_grammarParser::T__12:
        case iris_grammarParser::T__13:
        case iris_grammarParser::T__17:
        case iris_grammarParser::T__18:
        case iris_grammarParser::T__19:
        case iris_grammarParser::T__20:
        case iris_grammarParser::T__21:
        case iris_grammarParser::T__22:
        case iris_grammarParser::T__23:
        case iris_grammarParser::T__24:
        case iris_grammarParser::T__25:
        case iris_grammarParser::T__26:
        case iris_grammarParser::T__64:
        case iris_grammarParser::T__65:
        case iris_grammarParser::T__66:
        case iris_grammarParser::T__67:
        case iris_grammarParser::T__68:
        case iris_grammarParser::T__69:
        case iris_grammarParser::PRIMITIVE:
        case iris_grammarParser::LABEL: {
          setState(77);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
   
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
  enterRule(_localctx, 8, iris_grammarParser::RuleBlock);
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
    setState(82);
    match(iris_grammarParser::T__9);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 268197892) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 2814749767106623) != 0)) {
      setState(83);
      statement();
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
    match(iris_grammarParser::T__10);
   
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

iris_grammarParser::ExprContext* iris_grammarParser::StatementContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}

iris_grammarParser::DeclarationContext* iris_grammarParser::StatementContext::declaration() {
  return getRuleContext<iris_grammarParser::DeclarationContext>(0);
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
  enterRule(_localctx, 10, iris_grammarParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(91);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(92);
      declaration();
      setState(93);
      _la = _input->LA(1);
      if (!(_la == iris_grammarParser::T__11 || _la == iris_grammarParser::NEWLINE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
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

//----------------- ExprContext ------------------------------------------------------------------

iris_grammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t iris_grammarParser::ExprContext::getRuleIndex() const {
  return iris_grammarParser::RuleExpr;
}

void iris_grammarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CastContext ------------------------------------------------------------------

iris_grammarParser::ExprContext* iris_grammarParser::CastContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}

iris_grammarParser::TypeContext* iris_grammarParser::CastContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}

iris_grammarParser::CastContext::CastContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::CastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitCast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallContext ------------------------------------------------------------------

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::CallContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::CallContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}

iris_grammarParser::CallContext::CallContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AbsoluteValueContext ------------------------------------------------------------------

iris_grammarParser::ExprContext* iris_grammarParser::AbsoluteValueContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}

iris_grammarParser::AbsoluteValueContext::AbsoluteValueContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::AbsoluteValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitAbsoluteValue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimitiveContext ------------------------------------------------------------------

tree::TerminalNode* iris_grammarParser::PrimitiveContext::PRIMITIVE() {
  return getToken(iris_grammarParser::PRIMITIVE, 0);
}

iris_grammarParser::PrimitiveContext::PrimitiveContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::PrimitiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitPrimitive(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GetterContext ------------------------------------------------------------------

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::GetterContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::GetterContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}

iris_grammarParser::GetterContext::GetterContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::GetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitGetter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MagnitudeContext ------------------------------------------------------------------

iris_grammarParser::ExprContext* iris_grammarParser::MagnitudeContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}

iris_grammarParser::MagnitudeContext::MagnitudeContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::MagnitudeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitMagnitude(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryOperatorContext ------------------------------------------------------------------

iris_grammarParser::ExprContext* iris_grammarParser::UnaryOperatorContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}

iris_grammarParser::UnaryOperatorContext::UnaryOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryOperatorContext ------------------------------------------------------------------

iris_grammarParser::DeclarationContext* iris_grammarParser::BinaryOperatorContext::declaration() {
  return getRuleContext<iris_grammarParser::DeclarationContext>(0);
}

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::BinaryOperatorContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::BinaryOperatorContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}

iris_grammarParser::BinaryOperatorContext::BinaryOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::BinaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBinaryOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesContext ------------------------------------------------------------------

iris_grammarParser::ExprContext* iris_grammarParser::ParenthesesContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}

iris_grammarParser::ParenthesesContext::ParenthesesContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IndexOperatorContext ------------------------------------------------------------------

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::IndexOperatorContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::IndexOperatorContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}

iris_grammarParser::IndexOperatorContext::IndexOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::IndexOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitIndexOperator(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::ExprContext* iris_grammarParser::expr() {
   return expr(0);
}

iris_grammarParser::ExprContext* iris_grammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  iris_grammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  iris_grammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, iris_grammarParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(98);
      match(iris_grammarParser::T__1);
      setState(99);
      expr(0);
      setState(100);
      match(iris_grammarParser::T__3);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MagnitudeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(102);
      match(iris_grammarParser::T__12);
      setState(103);
      expr(0);
      setState(104);
      match(iris_grammarParser::T__12);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<AbsoluteValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(106);
      match(iris_grammarParser::T__13);
      setState(107);
      expr(0);
      setState(108);
      match(iris_grammarParser::T__13);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<UnaryOperatorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(110);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 268173312) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(111);
      expr(22);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<BinaryOperatorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(112);
      declaration();
      setState(113);
      match(iris_grammarParser::T__47);
      setState(114);
      expr(12);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<BinaryOperatorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(116);
      declaration();
      setState(117);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 71494644084506624) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(118);
      expr(10);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<BinaryOperatorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(120);
      declaration();
      setState(121);
      _la = _input->LA(1);
      if (!(_la == iris_grammarParser::T__55

      || _la == iris_grammarParser::T__56)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(122);
      expr(8);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<BinaryOperatorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(124);
      declaration();
      setState(125);
      _la = _input->LA(1);
      if (!(_la == iris_grammarParser::T__57

      || _la == iris_grammarParser::T__58)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(126);
      expr(6);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<BinaryOperatorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(128);
      declaration();
      setState(129);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 8070450532247928832) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(130);
      expr(4);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<BinaryOperatorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(132);
      declaration();
      setState(133);
      _la = _input->LA(1);
      if (!(_la == iris_grammarParser::T__62

      || _la == iris_grammarParser::T__63)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(134);
      expr(2);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<PrimitiveContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(136);
      match(iris_grammarParser::PRIMITIVE);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(208);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(206);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<GetterContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(139);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(140);
          match(iris_grammarParser::T__16);
          setState(141);
          expr(24);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(142);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");

          setState(143);
          match(iris_grammarParser::T__27);
          setState(144);
          expr(22);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(145);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(146);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 33822867456) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(147);
          expr(21);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(148);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(149);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__19

          || _la == iris_grammarParser::T__20)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(150);
          expr(20);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(151);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(152);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__34

          || _la == iris_grammarParser::T__35)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(153);
          expr(19);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(154);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(155);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 962072674304) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(156);
          expr(18);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(157);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(158);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__39

          || _la == iris_grammarParser::T__40)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(159);
          expr(17);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(160);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(161);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 136339441844224) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(162);
          expr(16);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(163);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(164);
          match(iris_grammarParser::T__47);
          setState(165);
          expr(13);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(166);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(167);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 71494644084506624) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(168);
          expr(12);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(169);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(170);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__55

          || _la == iris_grammarParser::T__56)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(171);
          expr(10);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(172);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(173);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__57

          || _la == iris_grammarParser::T__58)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(174);
          expr(8);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(175);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(176);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 8070450532247928832) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(177);
          expr(6);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(178);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(179);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__62

          || _la == iris_grammarParser::T__63)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(180);
          expr(4);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<CallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(181);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(182);
          match(iris_grammarParser::T__1);
          setState(191);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 268197892) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & 2814749767106623) != 0)) {
            setState(183);
            expr(0);
            setState(188);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == iris_grammarParser::T__2) {
              setState(184);
              match(iris_grammarParser::T__2);
              setState(185);
              expr(0);
              setState(190);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(193);
          match(iris_grammarParser::T__3);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<IndexOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(194);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(199); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(195);
                    match(iris_grammarParser::T__14);
                    setState(196);
                    expr(0);
                    setState(197);
                    match(iris_grammarParser::T__15);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(201); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<CastContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(203);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(204);
          match(iris_grammarParser::T__46);
          setState(205);
          type();
          break;
        }

        default:
          break;
        } 
      }
      setState(210);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DescriptorContext ------------------------------------------------------------------

iris_grammarParser::DescriptorContext::DescriptorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::DescriptorContext::INT() {
  return getToken(iris_grammarParser::INT, 0);
}


size_t iris_grammarParser::DescriptorContext::getRuleIndex() const {
  return iris_grammarParser::RuleDescriptor;
}


std::any iris_grammarParser::DescriptorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitDescriptor(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::DescriptorContext* iris_grammarParser::descriptor() {
  DescriptorContext *_localctx = _tracker.createInstance<DescriptorContext>(_ctx, getState());
  enterRule(_localctx, 14, iris_grammarParser::RuleDescriptor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__64: {
        enterOuterAlt(_localctx, 1);
        setState(211);
        match(iris_grammarParser::T__64);
        break;
      }

      case iris_grammarParser::T__65: {
        enterOuterAlt(_localctx, 2);
        setState(212);
        match(iris_grammarParser::T__65);
        break;
      }

      case iris_grammarParser::T__66: {
        enterOuterAlt(_localctx, 3);
        setState(213);
        match(iris_grammarParser::T__66);
        break;
      }

      case iris_grammarParser::T__67: {
        enterOuterAlt(_localctx, 4);
        setState(214);
        match(iris_grammarParser::T__67);
        break;
      }

      case iris_grammarParser::T__68: {
        enterOuterAlt(_localctx, 5);
        setState(215);
        match(iris_grammarParser::T__68);
        setState(216);
        match(iris_grammarParser::T__14);
        setState(217);
        match(iris_grammarParser::INT);
        setState(218);
        match(iris_grammarParser::T__15);
        break;
      }

      case iris_grammarParser::T__69: {
        enterOuterAlt(_localctx, 6);
        setState(219);
        match(iris_grammarParser::T__69);
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

//----------------- DeclarationContext ------------------------------------------------------------------

iris_grammarParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::DeclarationContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}

std::vector<iris_grammarParser::DescriptorContext *> iris_grammarParser::DeclarationContext::descriptor() {
  return getRuleContexts<iris_grammarParser::DescriptorContext>();
}

iris_grammarParser::DescriptorContext* iris_grammarParser::DeclarationContext::descriptor(size_t i) {
  return getRuleContext<iris_grammarParser::DescriptorContext>(i);
}

iris_grammarParser::TypeContext* iris_grammarParser::DeclarationContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}


size_t iris_grammarParser::DeclarationContext::getRuleIndex() const {
  return iris_grammarParser::RuleDeclaration;
}


std::any iris_grammarParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::DeclarationContext* iris_grammarParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, iris_grammarParser::RuleDeclaration);
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
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 63) != 0)) {
      setState(222);
      descriptor();
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(228);
    match(iris_grammarParser::LABEL);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__70) {
      setState(229);
      match(iris_grammarParser::T__70);
      setState(230);
      type();
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

iris_grammarParser::Precision_qualifierContext* iris_grammarParser::TypeContext::precision_qualifier() {
  return getRuleContext<iris_grammarParser::Precision_qualifierContext>(0);
}

std::vector<tree::TerminalNode *> iris_grammarParser::TypeContext::INT() {
  return getTokens(iris_grammarParser::INT);
}

tree::TerminalNode* iris_grammarParser::TypeContext::INT(size_t i) {
  return getToken(iris_grammarParser::INT, i);
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
  enterRule(_localctx, 18, iris_grammarParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 111) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 111)) & 7) != 0)) {
      setState(233);
      precision_qualifier();
    }
    setState(236);
    _la = _input->LA(1);
    if (!(((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & 549755813887) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(242);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(237);
        match(iris_grammarParser::T__14);
        setState(238);
        match(iris_grammarParser::INT);
        setState(239);
        match(iris_grammarParser::T__15); 
      }
      setState(244);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Precision_qualifierContext ------------------------------------------------------------------

iris_grammarParser::Precision_qualifierContext::Precision_qualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t iris_grammarParser::Precision_qualifierContext::getRuleIndex() const {
  return iris_grammarParser::RulePrecision_qualifier;
}


std::any iris_grammarParser::Precision_qualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitPrecision_qualifier(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Precision_qualifierContext* iris_grammarParser::precision_qualifier() {
  Precision_qualifierContext *_localctx = _tracker.createInstance<Precision_qualifierContext>(_ctx, getState());
  enterRule(_localctx, 20, iris_grammarParser::RulePrecision_qualifier);
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
    setState(245);
    _la = _input->LA(1);
    if (!(((((_la - 111) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 111)) & 7) != 0))) {
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

bool iris_grammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool iris_grammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 23);
    case 1: return precpred(_ctx, 21);
    case 2: return precpred(_ctx, 20);
    case 3: return precpred(_ctx, 19);
    case 4: return precpred(_ctx, 18);
    case 5: return precpred(_ctx, 17);
    case 6: return precpred(_ctx, 16);
    case 7: return precpred(_ctx, 15);
    case 8: return precpred(_ctx, 13);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 9);
    case 11: return precpred(_ctx, 7);
    case 12: return precpred(_ctx, 5);
    case 13: return precpred(_ctx, 3);
    case 14: return precpred(_ctx, 28);
    case 15: return precpred(_ctx, 24);
    case 16: return precpred(_ctx, 14);

  default:
    break;
  }
  return true;
}

void iris_grammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  iris_grammarParserInitialize();
#else
  ::antlr4::internal::call_once(iris_grammarParserOnceFlag, iris_grammarParserInitialize);
#endif
}
