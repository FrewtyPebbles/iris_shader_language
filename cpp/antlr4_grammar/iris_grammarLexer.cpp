
#include <stack>


// Generated from ./cpp/iris_grammar.g4 by ANTLR 4.13.2


#include "iris_grammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Iris_grammarLexerStaticData final {
  Iris_grammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Iris_grammarLexerStaticData(const Iris_grammarLexerStaticData&) = delete;
  Iris_grammarLexerStaticData(Iris_grammarLexerStaticData&&) = delete;
  Iris_grammarLexerStaticData& operator=(const Iris_grammarLexerStaticData&) = delete;
  Iris_grammarLexerStaticData& operator=(Iris_grammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag iris_grammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Iris_grammarLexerStaticData> iris_grammarlexerLexerStaticData = nullptr;

void iris_grammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (iris_grammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(iris_grammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Iris_grammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "DEF", 
      "UNIFORM", "VERTEX", "OUT", "FUNC", "RETURN", "ARROW", "INTEGER", 
      "FLOAT", "IDENTIFIER", "COLON", "LPAREN", "RPAREN", "LBRACK", "RBRACK", 
      "NEWLINE", "WS", "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
      "NEWLINE", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,34,205,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,
  	1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,
  	1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,23,4,23,
  	147,8,23,11,23,12,23,148,1,24,4,24,152,8,24,11,24,12,24,153,1,24,1,24,
  	5,24,158,8,24,10,24,12,24,161,9,24,1,25,1,25,5,25,165,8,25,10,25,12,25,
  	168,9,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,3,31,
  	181,8,31,1,31,4,31,184,8,31,11,31,12,31,185,1,31,1,31,1,32,4,32,191,8,
  	32,11,32,12,32,192,1,32,1,32,1,33,1,33,5,33,199,8,33,10,33,12,33,202,
  	9,33,1,33,1,33,0,0,34,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,
  	11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,
  	45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,
  	34,1,0,5,1,0,48,57,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,
  	2,0,9,9,32,32,2,0,10,10,13,13,212,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,
  	0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,
  	0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,
  	0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,
  	39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,
  	0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,
  	0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,1,69,1,0,0,0,3,
  	71,1,0,0,0,5,73,1,0,0,0,7,76,1,0,0,0,9,79,1,0,0,0,11,82,1,0,0,0,13,85,
  	1,0,0,0,15,87,1,0,0,0,17,89,1,0,0,0,19,92,1,0,0,0,21,95,1,0,0,0,23,97,
  	1,0,0,0,25,99,1,0,0,0,27,101,1,0,0,0,29,103,1,0,0,0,31,105,1,0,0,0,33,
  	107,1,0,0,0,35,111,1,0,0,0,37,119,1,0,0,0,39,126,1,0,0,0,41,130,1,0,0,
  	0,43,135,1,0,0,0,45,142,1,0,0,0,47,146,1,0,0,0,49,151,1,0,0,0,51,162,
  	1,0,0,0,53,169,1,0,0,0,55,171,1,0,0,0,57,173,1,0,0,0,59,175,1,0,0,0,61,
  	177,1,0,0,0,63,183,1,0,0,0,65,190,1,0,0,0,67,196,1,0,0,0,69,70,5,61,0,
  	0,70,2,1,0,0,0,71,72,5,44,0,0,72,4,1,0,0,0,73,74,5,124,0,0,74,75,5,124,
  	0,0,75,6,1,0,0,0,76,77,5,38,0,0,77,78,5,38,0,0,78,8,1,0,0,0,79,80,5,61,
  	0,0,80,81,5,61,0,0,81,10,1,0,0,0,82,83,5,33,0,0,83,84,5,61,0,0,84,12,
  	1,0,0,0,85,86,5,60,0,0,86,14,1,0,0,0,87,88,5,62,0,0,88,16,1,0,0,0,89,
  	90,5,60,0,0,90,91,5,61,0,0,91,18,1,0,0,0,92,93,5,62,0,0,93,94,5,61,0,
  	0,94,20,1,0,0,0,95,96,5,43,0,0,96,22,1,0,0,0,97,98,5,45,0,0,98,24,1,0,
  	0,0,99,100,5,42,0,0,100,26,1,0,0,0,101,102,5,47,0,0,102,28,1,0,0,0,103,
  	104,5,33,0,0,104,30,1,0,0,0,105,106,5,46,0,0,106,32,1,0,0,0,107,108,5,
  	100,0,0,108,109,5,101,0,0,109,110,5,102,0,0,110,34,1,0,0,0,111,112,5,
  	117,0,0,112,113,5,110,0,0,113,114,5,105,0,0,114,115,5,102,0,0,115,116,
  	5,111,0,0,116,117,5,114,0,0,117,118,5,109,0,0,118,36,1,0,0,0,119,120,
  	5,118,0,0,120,121,5,101,0,0,121,122,5,114,0,0,122,123,5,116,0,0,123,124,
  	5,101,0,0,124,125,5,120,0,0,125,38,1,0,0,0,126,127,5,111,0,0,127,128,
  	5,117,0,0,128,129,5,116,0,0,129,40,1,0,0,0,130,131,5,102,0,0,131,132,
  	5,117,0,0,132,133,5,110,0,0,133,134,5,99,0,0,134,42,1,0,0,0,135,136,5,
  	114,0,0,136,137,5,101,0,0,137,138,5,116,0,0,138,139,5,117,0,0,139,140,
  	5,114,0,0,140,141,5,110,0,0,141,44,1,0,0,0,142,143,5,45,0,0,143,144,5,
  	62,0,0,144,46,1,0,0,0,145,147,7,0,0,0,146,145,1,0,0,0,147,148,1,0,0,0,
  	148,146,1,0,0,0,148,149,1,0,0,0,149,48,1,0,0,0,150,152,7,0,0,0,151,150,
  	1,0,0,0,152,153,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,155,1,0,0,
  	0,155,159,5,46,0,0,156,158,7,0,0,0,157,156,1,0,0,0,158,161,1,0,0,0,159,
  	157,1,0,0,0,159,160,1,0,0,0,160,50,1,0,0,0,161,159,1,0,0,0,162,166,7,
  	1,0,0,163,165,7,2,0,0,164,163,1,0,0,0,165,168,1,0,0,0,166,164,1,0,0,0,
  	166,167,1,0,0,0,167,52,1,0,0,0,168,166,1,0,0,0,169,170,5,58,0,0,170,54,
  	1,0,0,0,171,172,5,40,0,0,172,56,1,0,0,0,173,174,5,41,0,0,174,58,1,0,0,
  	0,175,176,5,91,0,0,176,60,1,0,0,0,177,178,5,93,0,0,178,62,1,0,0,0,179,
  	181,5,13,0,0,180,179,1,0,0,0,180,181,1,0,0,0,181,182,1,0,0,0,182,184,
  	5,10,0,0,183,180,1,0,0,0,184,185,1,0,0,0,185,183,1,0,0,0,185,186,1,0,
  	0,0,186,187,1,0,0,0,187,188,6,31,0,0,188,64,1,0,0,0,189,191,7,3,0,0,190,
  	189,1,0,0,0,191,192,1,0,0,0,192,190,1,0,0,0,192,193,1,0,0,0,193,194,1,
  	0,0,0,194,195,6,32,1,0,195,66,1,0,0,0,196,200,5,35,0,0,197,199,8,4,0,
  	0,198,197,1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,
  	203,1,0,0,0,202,200,1,0,0,0,203,204,6,33,1,0,204,68,1,0,0,0,9,0,148,153,
  	159,166,180,185,192,200,2,1,31,0,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  iris_grammarlexerLexerStaticData = std::move(staticData);
}

}

iris_grammarLexer::iris_grammarLexer(CharStream *input) : Lexer(input) {
  iris_grammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *iris_grammarlexerLexerStaticData->atn, iris_grammarlexerLexerStaticData->decisionToDFA, iris_grammarlexerLexerStaticData->sharedContextCache);
}

iris_grammarLexer::~iris_grammarLexer() {
  delete _interpreter;
}

std::string iris_grammarLexer::getGrammarFileName() const {
  return "iris_grammar.g4";
}

const std::vector<std::string>& iris_grammarLexer::getRuleNames() const {
  return iris_grammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& iris_grammarLexer::getChannelNames() const {
  return iris_grammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& iris_grammarLexer::getModeNames() const {
  return iris_grammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& iris_grammarLexer::getVocabulary() const {
  return iris_grammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView iris_grammarLexer::getSerializedATN() const {
  return iris_grammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& iris_grammarLexer::getATN() const {
  return *iris_grammarlexerLexerStaticData->atn;
}


void iris_grammarLexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 31: NEWLINEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

void iris_grammarLexer::NEWLINEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0: 
              {   // <-- add extra braces here
                  std::string newLine = getText();
                  std::string spaces;
                  int next = _input->LA(1);
                  while (next == ' ' || next == '\t') {
                      spaces += (char)next;
                      _input->consume();
                      next = _input->LA(1);
                  }

                  int indent = spaces.length();
                  int previous = indents.empty() ? 0 : indents.top();

                  if (indent > previous) {
                      indents.push(indent);
                      emit(commonToken(INDENT, ""));
                  }
                  else {
                      while (!indents.empty() && indents.top() > indent) {
                          indents.pop();
                          emit(commonToken(DEDENT, ""));
                      }
                  }
              }   // <-- end scope
           break;

  default:
    break;
  }
}



void iris_grammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  iris_grammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(iris_grammarlexerLexerOnceFlag, iris_grammarlexerLexerInitialize);
#endif
}
