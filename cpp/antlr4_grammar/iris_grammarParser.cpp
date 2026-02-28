
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
      "root", "statement", "import_statement", "function_definition", "conditional_block", 
      "import_label", "block", "conditional", "expr", "descriptor", "precision_qualifier", 
      "type", "declaration", "eos", "primitive"
    },
    std::vector<std::string>{
      "", "'.'", "','", "'*'", "'('", "')'", "'->'", "'{'", "'}'", "'='", 
      "'['", "']'", "'||'", "'|'", "'+'", "'-'", "'^'", "'/'", "'%'", "'''", 
      "'><'", "'<->'", "'<'", "'>'", "'>='", "'<='", "'=='", "'^='", "'*='", 
      "'/='", "'%='", "''='", "'><='", "'<->='", "'+='", "'-='", "':'", 
      "';'", "'func'", "'if'", "'elif'", "'else'", "'then'", "'import'", 
      "'from'", "'def'", "'in'", "'out'", "'uniform'", "'mut'", "'vertex'", 
      "'not'", "'bits_not'", "'norm'", "'inv'", "'trans'", "'det'", "'deg'", 
      "'rad'", "'and'", "'or'", "'bits_and'", "'bits_xor'", "'bits_or'", 
      "'bits_left'", "'bits_right'", "'and='", "'or='", "'bits_and='", "'bits_xor='", 
      "'bits_or='", "'bits_left='", "'bits_right='", "'as'", "'none'", "'i8'", 
      "'i16'", "'i32'", "'u8'", "'u16'", "'u32'", "'f8'", "'f16'", "'f32'", 
      "'f64'", "'bool'", "'vec2'", "'vec3'", "'vec4'", "'v2'", "'v3'", "'v4'", 
      "'m2'", "'m3'", "'m4'", "'m2x2'", "'m3x3'", "'m4x4'", "'m2x3'", "'m3x2'", 
      "'m3x4'", "'m4x3'", "'m2x4'", "'m4x2'", "'mat2'", "'mat3'", "'mat4'", 
      "'mat2x3'", "'mat2x4'", "'mat3x2'", "'mat3x4'", "'mat4x2'", "'mat4x3'", 
      "'lp'", "'mp'", "'hp'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "FUNC", "IF", "ELIF", "ELSE", "THEN", "IMPORT", "FROM", 
      "DEF", "IN", "OUT", "UNIFORM", "MUT", "VERTEX", "NOT", "BITS_NOT", 
      "NORM", "INV", "TRANS", "DET", "DEG", "RAD", "AND", "OR", "BITS_AND", 
      "BITS_XOR", "BITS_OR", "BITS_LEFT", "BITS_RIGHT", "AND_EQ", "OR_EQ", 
      "BITS_AND_EQ", "BITS_XOR_EQ", "BITS_OR_EQ", "BITS_LEFT_EQ", "BITS_RIGHT_EQ", 
      "AS", "NONE", "I8", "I16", "I32", "U8", "U16", "U32", "F8", "F16", 
      "F32", "F64", "BOOL", "VEC2", "VEC3", "VEC4", "V2", "V3", "V4", "M2", 
      "M3", "M4", "M2X2", "M3X3", "M4X4", "M2X3", "M3X2", "M3X4", "M4X3", 
      "M2X4", "M4X2", "MAT2", "MAT3", "MAT4", "MAT2X3", "MAT2X4", "MAT3X2", 
      "MAT3X4", "MAT4X2", "MAT4X3", "LP", "MP", "HP", "FLOAT", "LABEL", 
      "INT", "WS", "NEWLINE", "LINE_COMMENT", "BLOCK_COMMENT", "ERROR_TOKEN"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,123,316,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,1,0,3,0,33,8,0,1,0,1,0,3,0,37,8,0,5,0,39,8,0,10,0,12,0,42,9,0,
  	1,0,1,0,1,1,1,1,1,1,3,1,49,8,1,1,2,1,2,1,2,1,2,5,2,55,8,2,10,2,12,2,58,
  	9,2,1,2,1,2,1,2,1,2,5,2,64,8,2,10,2,12,2,67,9,2,1,2,3,2,70,8,2,1,2,1,
  	2,1,2,1,2,5,2,76,8,2,10,2,12,2,79,9,2,1,2,1,2,3,2,83,8,2,3,2,85,8,2,1,
  	3,1,3,1,3,1,3,1,3,1,3,5,3,93,8,3,10,3,12,3,96,9,3,3,3,98,8,3,1,3,3,3,
  	101,8,3,1,3,1,3,1,3,3,3,106,8,3,1,3,5,3,109,8,3,10,3,12,3,112,9,3,1,3,
  	1,3,1,4,1,4,1,4,1,4,3,4,120,8,4,1,4,1,4,1,4,1,4,3,4,126,8,4,5,4,128,8,
  	4,10,4,12,4,131,9,4,1,4,1,4,1,4,3,4,136,8,4,3,4,138,8,4,1,5,1,5,1,5,3,
  	5,143,8,5,1,6,1,6,1,6,3,6,148,8,6,5,6,150,8,6,10,6,12,6,153,9,6,1,6,1,
  	6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,5,8,170,8,8,10,
  	8,12,8,173,9,8,3,8,175,8,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,195,8,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,4,8,241,8,8,11,8,12,8,242,1,8,1,8,1,8,1,8,1,8,5,8,250,8,8,10,
  	8,12,8,253,9,8,3,8,255,8,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,264,8,8,10,
  	8,12,8,267,9,8,1,9,1,9,1,9,1,9,1,9,3,9,274,8,9,1,10,1,10,1,11,3,11,279,
  	8,11,1,11,1,11,1,11,1,11,5,11,285,8,11,10,11,12,11,288,9,11,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,301,8,12,1,12,1,12,
  	1,12,1,12,1,12,3,12,308,8,12,3,12,310,8,12,1,13,1,13,1,14,1,14,1,14,0,
  	1,16,15,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,0,16,2,0,14,15,51,58,
  	2,0,3,3,17,21,1,0,14,15,1,0,64,65,1,0,61,63,1,0,59,60,1,0,22,26,1,0,27,
  	33,1,0,34,35,1,0,71,72,1,0,68,70,1,0,66,67,1,0,45,49,1,0,113,115,1,0,
  	74,112,1,0,116,118,360,0,40,1,0,0,0,2,48,1,0,0,0,4,84,1,0,0,0,6,86,1,
  	0,0,0,8,115,1,0,0,0,10,139,1,0,0,0,12,144,1,0,0,0,14,156,1,0,0,0,16,194,
  	1,0,0,0,18,273,1,0,0,0,20,275,1,0,0,0,22,278,1,0,0,0,24,309,1,0,0,0,26,
  	311,1,0,0,0,28,313,1,0,0,0,30,32,3,6,3,0,31,33,3,26,13,0,32,31,1,0,0,
  	0,32,33,1,0,0,0,33,39,1,0,0,0,34,36,3,2,1,0,35,37,3,26,13,0,36,35,1,0,
  	0,0,36,37,1,0,0,0,37,39,1,0,0,0,38,30,1,0,0,0,38,34,1,0,0,0,39,42,1,0,
  	0,0,40,38,1,0,0,0,40,41,1,0,0,0,41,43,1,0,0,0,42,40,1,0,0,0,43,44,5,0,
  	0,1,44,1,1,0,0,0,45,49,3,4,2,0,46,49,3,24,12,0,47,49,3,16,8,0,48,45,1,
  	0,0,0,48,46,1,0,0,0,48,47,1,0,0,0,49,3,1,0,0,0,50,51,5,44,0,0,51,56,5,
  	117,0,0,52,53,5,1,0,0,53,55,5,117,0,0,54,52,1,0,0,0,55,58,1,0,0,0,56,
  	54,1,0,0,0,56,57,1,0,0,0,57,59,1,0,0,0,58,56,1,0,0,0,59,69,5,43,0,0,60,
  	65,3,10,5,0,61,62,5,2,0,0,62,64,3,10,5,0,63,61,1,0,0,0,64,67,1,0,0,0,
  	65,63,1,0,0,0,65,66,1,0,0,0,66,70,1,0,0,0,67,65,1,0,0,0,68,70,5,3,0,0,
  	69,60,1,0,0,0,69,68,1,0,0,0,70,85,1,0,0,0,71,72,5,43,0,0,72,77,5,117,
  	0,0,73,74,5,1,0,0,74,76,5,117,0,0,75,73,1,0,0,0,76,79,1,0,0,0,77,75,1,
  	0,0,0,77,78,1,0,0,0,78,82,1,0,0,0,79,77,1,0,0,0,80,81,5,73,0,0,81,83,
  	5,117,0,0,82,80,1,0,0,0,82,83,1,0,0,0,83,85,1,0,0,0,84,50,1,0,0,0,84,
  	71,1,0,0,0,85,5,1,0,0,0,86,87,5,38,0,0,87,88,5,117,0,0,88,97,5,4,0,0,
  	89,94,3,24,12,0,90,91,5,2,0,0,91,93,3,24,12,0,92,90,1,0,0,0,93,96,1,0,
  	0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,98,1,0,0,0,96,94,1,0,0,0,97,89,1,0,
  	0,0,97,98,1,0,0,0,98,100,1,0,0,0,99,101,5,2,0,0,100,99,1,0,0,0,100,101,
  	1,0,0,0,101,102,1,0,0,0,102,105,5,5,0,0,103,104,5,6,0,0,104,106,3,22,
  	11,0,105,103,1,0,0,0,105,106,1,0,0,0,106,110,1,0,0,0,107,109,5,120,0,
  	0,108,107,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,110,111,1,0,0,0,111,
  	113,1,0,0,0,112,110,1,0,0,0,113,114,3,12,6,0,114,7,1,0,0,0,115,116,5,
  	39,0,0,116,119,3,16,8,0,117,120,3,12,6,0,118,120,3,2,1,0,119,117,1,0,
  	0,0,119,118,1,0,0,0,120,129,1,0,0,0,121,122,5,40,0,0,122,125,3,16,8,0,
  	123,126,3,12,6,0,124,126,3,2,1,0,125,123,1,0,0,0,125,124,1,0,0,0,126,
  	128,1,0,0,0,127,121,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,0,129,130,1,
  	0,0,0,130,137,1,0,0,0,131,129,1,0,0,0,132,135,5,41,0,0,133,136,3,12,6,
  	0,134,136,3,2,1,0,135,133,1,0,0,0,135,134,1,0,0,0,136,138,1,0,0,0,137,
  	132,1,0,0,0,137,138,1,0,0,0,138,9,1,0,0,0,139,142,5,117,0,0,140,141,5,
  	73,0,0,141,143,5,117,0,0,142,140,1,0,0,0,142,143,1,0,0,0,143,11,1,0,0,
  	0,144,151,5,7,0,0,145,147,3,2,1,0,146,148,5,120,0,0,147,146,1,0,0,0,147,
  	148,1,0,0,0,148,150,1,0,0,0,149,145,1,0,0,0,150,153,1,0,0,0,151,149,1,
  	0,0,0,151,152,1,0,0,0,152,154,1,0,0,0,153,151,1,0,0,0,154,155,5,8,0,0,
  	155,13,1,0,0,0,156,157,5,39,0,0,157,158,3,16,8,0,158,159,5,42,0,0,159,
  	160,3,16,8,0,160,161,5,41,0,0,161,162,3,16,8,0,162,15,1,0,0,0,163,164,
  	6,8,-1,0,164,165,3,22,11,0,165,174,5,4,0,0,166,171,3,16,8,0,167,168,5,
  	2,0,0,168,170,3,16,8,0,169,167,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,
  	0,171,172,1,0,0,0,172,175,1,0,0,0,173,171,1,0,0,0,174,166,1,0,0,0,174,
  	175,1,0,0,0,175,176,1,0,0,0,176,177,5,5,0,0,177,195,1,0,0,0,178,179,5,
  	4,0,0,179,180,3,16,8,0,180,181,5,5,0,0,181,195,1,0,0,0,182,183,5,12,0,
  	0,183,184,3,16,8,0,184,185,5,12,0,0,185,195,1,0,0,0,186,187,5,13,0,0,
  	187,188,3,16,8,0,188,189,5,13,0,0,189,195,1,0,0,0,190,195,3,14,7,0,191,
  	192,7,0,0,0,192,195,3,16,8,15,193,195,3,28,14,0,194,163,1,0,0,0,194,178,
  	1,0,0,0,194,182,1,0,0,0,194,186,1,0,0,0,194,190,1,0,0,0,194,191,1,0,0,
  	0,194,193,1,0,0,0,195,265,1,0,0,0,196,197,10,24,0,0,197,198,5,9,0,0,198,
  	264,3,16,8,25,199,200,10,14,0,0,200,201,5,16,0,0,201,264,3,16,8,15,202,
  	203,10,13,0,0,203,204,7,1,0,0,204,264,3,16,8,14,205,206,10,12,0,0,206,
  	207,7,2,0,0,207,264,3,16,8,13,208,209,10,11,0,0,209,210,7,3,0,0,210,264,
  	3,16,8,12,211,212,10,10,0,0,212,213,7,4,0,0,213,264,3,16,8,11,214,215,
  	10,9,0,0,215,216,7,5,0,0,216,264,3,16,8,10,217,218,10,8,0,0,218,219,7,
  	6,0,0,219,264,3,16,8,9,220,221,10,6,0,0,221,222,7,7,0,0,222,264,3,16,
  	8,7,223,224,10,5,0,0,224,225,7,8,0,0,225,264,3,16,8,6,226,227,10,4,0,
  	0,227,228,7,9,0,0,228,264,3,16,8,5,229,230,10,3,0,0,230,231,7,10,0,0,
  	231,264,3,16,8,4,232,233,10,2,0,0,233,234,7,11,0,0,234,264,3,16,8,3,235,
  	240,10,23,0,0,236,237,5,10,0,0,237,238,3,16,8,0,238,239,5,11,0,0,239,
  	241,1,0,0,0,240,236,1,0,0,0,241,242,1,0,0,0,242,240,1,0,0,0,242,243,1,
  	0,0,0,243,264,1,0,0,0,244,245,10,22,0,0,245,254,5,4,0,0,246,251,3,16,
  	8,0,247,248,5,2,0,0,248,250,3,16,8,0,249,247,1,0,0,0,250,253,1,0,0,0,
  	251,249,1,0,0,0,251,252,1,0,0,0,252,255,1,0,0,0,253,251,1,0,0,0,254,246,
  	1,0,0,0,254,255,1,0,0,0,255,256,1,0,0,0,256,264,5,5,0,0,257,258,10,16,
  	0,0,258,259,5,1,0,0,259,264,5,117,0,0,260,261,10,7,0,0,261,262,5,73,0,
  	0,262,264,3,22,11,0,263,196,1,0,0,0,263,199,1,0,0,0,263,202,1,0,0,0,263,
  	205,1,0,0,0,263,208,1,0,0,0,263,211,1,0,0,0,263,214,1,0,0,0,263,217,1,
  	0,0,0,263,220,1,0,0,0,263,223,1,0,0,0,263,226,1,0,0,0,263,229,1,0,0,0,
  	263,232,1,0,0,0,263,235,1,0,0,0,263,244,1,0,0,0,263,257,1,0,0,0,263,260,
  	1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,0,265,266,1,0,0,0,266,17,1,0,0,
  	0,267,265,1,0,0,0,268,274,7,12,0,0,269,270,5,50,0,0,270,271,5,10,0,0,
  	271,272,5,118,0,0,272,274,5,11,0,0,273,268,1,0,0,0,273,269,1,0,0,0,274,
  	19,1,0,0,0,275,276,7,13,0,0,276,21,1,0,0,0,277,279,3,20,10,0,278,277,
  	1,0,0,0,278,279,1,0,0,0,279,280,1,0,0,0,280,286,7,14,0,0,281,282,5,10,
  	0,0,282,283,5,118,0,0,283,285,5,11,0,0,284,281,1,0,0,0,285,288,1,0,0,
  	0,286,284,1,0,0,0,286,287,1,0,0,0,287,23,1,0,0,0,288,286,1,0,0,0,289,
  	290,3,18,9,0,290,291,5,117,0,0,291,292,5,9,0,0,292,293,3,16,8,0,293,310,
  	1,0,0,0,294,295,3,18,9,0,295,296,5,117,0,0,296,297,5,36,0,0,297,300,3,
  	22,11,0,298,299,5,9,0,0,299,301,3,16,8,0,300,298,1,0,0,0,300,301,1,0,
  	0,0,301,310,1,0,0,0,302,303,5,117,0,0,303,304,5,36,0,0,304,307,3,22,11,
  	0,305,306,5,9,0,0,306,308,3,16,8,0,307,305,1,0,0,0,307,308,1,0,0,0,308,
  	310,1,0,0,0,309,289,1,0,0,0,309,294,1,0,0,0,309,302,1,0,0,0,310,25,1,
  	0,0,0,311,312,5,37,0,0,312,27,1,0,0,0,313,314,7,15,0,0,314,29,1,0,0,0,
  	38,32,36,38,40,48,56,65,69,77,82,84,94,97,100,105,110,119,125,129,135,
  	137,142,147,151,171,174,194,242,251,254,263,265,273,278,286,300,307,309
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

tree::TerminalNode* iris_grammarParser::RootContext::EOF() {
  return getToken(iris_grammarParser::EOF, 0);
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

std::vector<iris_grammarParser::EosContext *> iris_grammarParser::RootContext::eos() {
  return getRuleContexts<iris_grammarParser::EosContext>();
}

iris_grammarParser::EosContext* iris_grammarParser::RootContext::eos(size_t i) {
  return getRuleContext<iris_grammarParser::EosContext>(i);
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
    setState(40);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 576452780844183568) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & 35184372088831) != 0)) {
      setState(38);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::FUNC: {
          setState(30);
          function_definition();
          setState(32);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == iris_grammarParser::T__36) {
            setState(31);
            eos();
          }
          break;
        }

        case iris_grammarParser::T__3:
        case iris_grammarParser::T__11:
        case iris_grammarParser::T__12:
        case iris_grammarParser::T__13:
        case iris_grammarParser::T__14:
        case iris_grammarParser::IF:
        case iris_grammarParser::IMPORT:
        case iris_grammarParser::FROM:
        case iris_grammarParser::DEF:
        case iris_grammarParser::IN:
        case iris_grammarParser::OUT:
        case iris_grammarParser::UNIFORM:
        case iris_grammarParser::MUT:
        case iris_grammarParser::VERTEX:
        case iris_grammarParser::NOT:
        case iris_grammarParser::BITS_NOT:
        case iris_grammarParser::NORM:
        case iris_grammarParser::INV:
        case iris_grammarParser::TRANS:
        case iris_grammarParser::DET:
        case iris_grammarParser::DEG:
        case iris_grammarParser::RAD:
        case iris_grammarParser::NONE:
        case iris_grammarParser::I8:
        case iris_grammarParser::I16:
        case iris_grammarParser::I32:
        case iris_grammarParser::U8:
        case iris_grammarParser::U16:
        case iris_grammarParser::U32:
        case iris_grammarParser::F8:
        case iris_grammarParser::F16:
        case iris_grammarParser::F32:
        case iris_grammarParser::F64:
        case iris_grammarParser::BOOL:
        case iris_grammarParser::VEC2:
        case iris_grammarParser::VEC3:
        case iris_grammarParser::VEC4:
        case iris_grammarParser::V2:
        case iris_grammarParser::V3:
        case iris_grammarParser::V4:
        case iris_grammarParser::M2:
        case iris_grammarParser::M3:
        case iris_grammarParser::M4:
        case iris_grammarParser::M2X2:
        case iris_grammarParser::M3X3:
        case iris_grammarParser::M4X4:
        case iris_grammarParser::M2X3:
        case iris_grammarParser::M3X2:
        case iris_grammarParser::M3X4:
        case iris_grammarParser::M4X3:
        case iris_grammarParser::M2X4:
        case iris_grammarParser::M4X2:
        case iris_grammarParser::MAT2:
        case iris_grammarParser::MAT3:
        case iris_grammarParser::MAT4:
        case iris_grammarParser::MAT2X3:
        case iris_grammarParser::MAT2X4:
        case iris_grammarParser::MAT3X2:
        case iris_grammarParser::MAT3X4:
        case iris_grammarParser::MAT4X2:
        case iris_grammarParser::MAT4X3:
        case iris_grammarParser::LP:
        case iris_grammarParser::MP:
        case iris_grammarParser::HP:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT: {
          setState(34);
          statement();
          setState(36);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == iris_grammarParser::T__36) {
            setState(35);
            eos();
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(42);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(43);
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

iris_grammarParser::Import_statementContext* iris_grammarParser::StatementContext::import_statement() {
  return getRuleContext<iris_grammarParser::Import_statementContext>(0);
}

iris_grammarParser::DeclarationContext* iris_grammarParser::StatementContext::declaration() {
  return getRuleContext<iris_grammarParser::DeclarationContext>(0);
}

iris_grammarParser::ExprContext* iris_grammarParser::StatementContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
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
    setState(48);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(45);
      import_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(46);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(47);
      expr(0);
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

//----------------- Import_statementContext ------------------------------------------------------------------

iris_grammarParser::Import_statementContext::Import_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Import_statementContext::FROM() {
  return getToken(iris_grammarParser::FROM, 0);
}

tree::TerminalNode* iris_grammarParser::Import_statementContext::IMPORT() {
  return getToken(iris_grammarParser::IMPORT, 0);
}

std::vector<iris_grammarParser::Import_labelContext *> iris_grammarParser::Import_statementContext::import_label() {
  return getRuleContexts<iris_grammarParser::Import_labelContext>();
}

iris_grammarParser::Import_labelContext* iris_grammarParser::Import_statementContext::import_label(size_t i) {
  return getRuleContext<iris_grammarParser::Import_labelContext>(i);
}

std::vector<tree::TerminalNode *> iris_grammarParser::Import_statementContext::LABEL() {
  return getTokens(iris_grammarParser::LABEL);
}

tree::TerminalNode* iris_grammarParser::Import_statementContext::LABEL(size_t i) {
  return getToken(iris_grammarParser::LABEL, i);
}

tree::TerminalNode* iris_grammarParser::Import_statementContext::AS() {
  return getToken(iris_grammarParser::AS, 0);
}


size_t iris_grammarParser::Import_statementContext::getRuleIndex() const {
  return iris_grammarParser::RuleImport_statement;
}


std::any iris_grammarParser::Import_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitImport_statement(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Import_statementContext* iris_grammarParser::import_statement() {
  Import_statementContext *_localctx = _tracker.createInstance<Import_statementContext>(_ctx, getState());
  enterRule(_localctx, 4, iris_grammarParser::RuleImport_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::FROM: {
        enterOuterAlt(_localctx, 1);
        setState(50);
        match(iris_grammarParser::FROM);

        setState(51);
        antlrcpp::downCast<Import_statementContext *>(_localctx)->file_path_part = match(iris_grammarParser::LABEL);
        setState(56);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == iris_grammarParser::T__0) {
          setState(52);
          match(iris_grammarParser::T__0);

          setState(53);
          antlrcpp::downCast<Import_statementContext *>(_localctx)->file_path_part = match(iris_grammarParser::LABEL);
          setState(58);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(59);
        match(iris_grammarParser::IMPORT);
        setState(69);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case iris_grammarParser::LABEL: {
            setState(60);
            import_label();
            setState(65);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == iris_grammarParser::T__1) {
              setState(61);
              match(iris_grammarParser::T__1);
              setState(62);
              import_label();
              setState(67);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case iris_grammarParser::T__2: {
            setState(68);
            match(iris_grammarParser::T__2);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case iris_grammarParser::IMPORT: {
        enterOuterAlt(_localctx, 2);
        setState(71);
        match(iris_grammarParser::IMPORT);

        setState(72);
        antlrcpp::downCast<Import_statementContext *>(_localctx)->file_path_part = match(iris_grammarParser::LABEL);
        setState(77);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == iris_grammarParser::T__0) {
          setState(73);
          match(iris_grammarParser::T__0);

          setState(74);
          antlrcpp::downCast<Import_statementContext *>(_localctx)->file_path_part = match(iris_grammarParser::LABEL);
          setState(79);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(82);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == iris_grammarParser::AS) {
          setState(80);
          match(iris_grammarParser::AS);

          setState(81);
          antlrcpp::downCast<Import_statementContext *>(_localctx)->module_alias = match(iris_grammarParser::LABEL);
        }
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

//----------------- Function_definitionContext ------------------------------------------------------------------

iris_grammarParser::Function_definitionContext::Function_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Function_definitionContext::FUNC() {
  return getToken(iris_grammarParser::FUNC, 0);
}

tree::TerminalNode* iris_grammarParser::Function_definitionContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}

iris_grammarParser::BlockContext* iris_grammarParser::Function_definitionContext::block() {
  return getRuleContext<iris_grammarParser::BlockContext>(0);
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

std::vector<tree::TerminalNode *> iris_grammarParser::Function_definitionContext::NEWLINE() {
  return getTokens(iris_grammarParser::NEWLINE);
}

tree::TerminalNode* iris_grammarParser::Function_definitionContext::NEWLINE(size_t i) {
  return getToken(iris_grammarParser::NEWLINE, i);
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
  enterRule(_localctx, 6, iris_grammarParser::RuleFunction_definition);
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
    setState(86);
    match(iris_grammarParser::FUNC);
    setState(87);
    match(iris_grammarParser::LABEL);
    setState(88);
    match(iris_grammarParser::T__3);
    setState(97);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2216615441596416) != 0) || _la == iris_grammarParser::LABEL) {
      setState(89);
      declaration();
      setState(94);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(90);
          match(iris_grammarParser::T__1);
          setState(91);
          declaration(); 
        }
        setState(96);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      }
    }
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__1) {
      setState(99);
      match(iris_grammarParser::T__1);
    }
    setState(102);
    match(iris_grammarParser::T__4);
    setState(105);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__5) {
      setState(103);
      match(iris_grammarParser::T__5);
      setState(104);
      type();
    }
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::NEWLINE) {
      setState(107);
      match(iris_grammarParser::NEWLINE);
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(113);
    block();
   
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

tree::TerminalNode* iris_grammarParser::Conditional_blockContext::IF() {
  return getToken(iris_grammarParser::IF, 0);
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

std::vector<tree::TerminalNode *> iris_grammarParser::Conditional_blockContext::ELIF() {
  return getTokens(iris_grammarParser::ELIF);
}

tree::TerminalNode* iris_grammarParser::Conditional_blockContext::ELIF(size_t i) {
  return getToken(iris_grammarParser::ELIF, i);
}

tree::TerminalNode* iris_grammarParser::Conditional_blockContext::ELSE() {
  return getToken(iris_grammarParser::ELSE, 0);
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
  enterRule(_localctx, 8, iris_grammarParser::RuleConditional_block);
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
    setState(115);
    match(iris_grammarParser::IF);
    setState(116);
    expr(0);
    setState(119);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__6: {
        setState(117);
        block();
        break;
      }

      case iris_grammarParser::T__3:
      case iris_grammarParser::T__11:
      case iris_grammarParser::T__12:
      case iris_grammarParser::T__13:
      case iris_grammarParser::T__14:
      case iris_grammarParser::IF:
      case iris_grammarParser::IMPORT:
      case iris_grammarParser::FROM:
      case iris_grammarParser::DEF:
      case iris_grammarParser::IN:
      case iris_grammarParser::OUT:
      case iris_grammarParser::UNIFORM:
      case iris_grammarParser::MUT:
      case iris_grammarParser::VERTEX:
      case iris_grammarParser::NOT:
      case iris_grammarParser::BITS_NOT:
      case iris_grammarParser::NORM:
      case iris_grammarParser::INV:
      case iris_grammarParser::TRANS:
      case iris_grammarParser::DET:
      case iris_grammarParser::DEG:
      case iris_grammarParser::RAD:
      case iris_grammarParser::NONE:
      case iris_grammarParser::I8:
      case iris_grammarParser::I16:
      case iris_grammarParser::I32:
      case iris_grammarParser::U8:
      case iris_grammarParser::U16:
      case iris_grammarParser::U32:
      case iris_grammarParser::F8:
      case iris_grammarParser::F16:
      case iris_grammarParser::F32:
      case iris_grammarParser::F64:
      case iris_grammarParser::BOOL:
      case iris_grammarParser::VEC2:
      case iris_grammarParser::VEC3:
      case iris_grammarParser::VEC4:
      case iris_grammarParser::V2:
      case iris_grammarParser::V3:
      case iris_grammarParser::V4:
      case iris_grammarParser::M2:
      case iris_grammarParser::M3:
      case iris_grammarParser::M4:
      case iris_grammarParser::M2X2:
      case iris_grammarParser::M3X3:
      case iris_grammarParser::M4X4:
      case iris_grammarParser::M2X3:
      case iris_grammarParser::M3X2:
      case iris_grammarParser::M3X4:
      case iris_grammarParser::M4X3:
      case iris_grammarParser::M2X4:
      case iris_grammarParser::M4X2:
      case iris_grammarParser::MAT2:
      case iris_grammarParser::MAT3:
      case iris_grammarParser::MAT4:
      case iris_grammarParser::MAT2X3:
      case iris_grammarParser::MAT2X4:
      case iris_grammarParser::MAT3X2:
      case iris_grammarParser::MAT3X4:
      case iris_grammarParser::MAT4X2:
      case iris_grammarParser::MAT4X3:
      case iris_grammarParser::LP:
      case iris_grammarParser::MP:
      case iris_grammarParser::HP:
      case iris_grammarParser::FLOAT:
      case iris_grammarParser::LABEL:
      case iris_grammarParser::INT: {
        setState(118);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::ELIF) {
      setState(121);
      match(iris_grammarParser::ELIF);
      setState(122);
      expr(0);
      setState(125);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__6: {
          setState(123);
          block();
          break;
        }

        case iris_grammarParser::T__3:
        case iris_grammarParser::T__11:
        case iris_grammarParser::T__12:
        case iris_grammarParser::T__13:
        case iris_grammarParser::T__14:
        case iris_grammarParser::IF:
        case iris_grammarParser::IMPORT:
        case iris_grammarParser::FROM:
        case iris_grammarParser::DEF:
        case iris_grammarParser::IN:
        case iris_grammarParser::OUT:
        case iris_grammarParser::UNIFORM:
        case iris_grammarParser::MUT:
        case iris_grammarParser::VERTEX:
        case iris_grammarParser::NOT:
        case iris_grammarParser::BITS_NOT:
        case iris_grammarParser::NORM:
        case iris_grammarParser::INV:
        case iris_grammarParser::TRANS:
        case iris_grammarParser::DET:
        case iris_grammarParser::DEG:
        case iris_grammarParser::RAD:
        case iris_grammarParser::NONE:
        case iris_grammarParser::I8:
        case iris_grammarParser::I16:
        case iris_grammarParser::I32:
        case iris_grammarParser::U8:
        case iris_grammarParser::U16:
        case iris_grammarParser::U32:
        case iris_grammarParser::F8:
        case iris_grammarParser::F16:
        case iris_grammarParser::F32:
        case iris_grammarParser::F64:
        case iris_grammarParser::BOOL:
        case iris_grammarParser::VEC2:
        case iris_grammarParser::VEC3:
        case iris_grammarParser::VEC4:
        case iris_grammarParser::V2:
        case iris_grammarParser::V3:
        case iris_grammarParser::V4:
        case iris_grammarParser::M2:
        case iris_grammarParser::M3:
        case iris_grammarParser::M4:
        case iris_grammarParser::M2X2:
        case iris_grammarParser::M3X3:
        case iris_grammarParser::M4X4:
        case iris_grammarParser::M2X3:
        case iris_grammarParser::M3X2:
        case iris_grammarParser::M3X4:
        case iris_grammarParser::M4X3:
        case iris_grammarParser::M2X4:
        case iris_grammarParser::M4X2:
        case iris_grammarParser::MAT2:
        case iris_grammarParser::MAT3:
        case iris_grammarParser::MAT4:
        case iris_grammarParser::MAT2X3:
        case iris_grammarParser::MAT2X4:
        case iris_grammarParser::MAT3X2:
        case iris_grammarParser::MAT3X4:
        case iris_grammarParser::MAT4X2:
        case iris_grammarParser::MAT4X3:
        case iris_grammarParser::LP:
        case iris_grammarParser::MP:
        case iris_grammarParser::HP:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT: {
          setState(124);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::ELSE) {
      setState(132);
      match(iris_grammarParser::ELSE);
      setState(135);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__6: {
          setState(133);
          block();
          break;
        }

        case iris_grammarParser::T__3:
        case iris_grammarParser::T__11:
        case iris_grammarParser::T__12:
        case iris_grammarParser::T__13:
        case iris_grammarParser::T__14:
        case iris_grammarParser::IF:
        case iris_grammarParser::IMPORT:
        case iris_grammarParser::FROM:
        case iris_grammarParser::DEF:
        case iris_grammarParser::IN:
        case iris_grammarParser::OUT:
        case iris_grammarParser::UNIFORM:
        case iris_grammarParser::MUT:
        case iris_grammarParser::VERTEX:
        case iris_grammarParser::NOT:
        case iris_grammarParser::BITS_NOT:
        case iris_grammarParser::NORM:
        case iris_grammarParser::INV:
        case iris_grammarParser::TRANS:
        case iris_grammarParser::DET:
        case iris_grammarParser::DEG:
        case iris_grammarParser::RAD:
        case iris_grammarParser::NONE:
        case iris_grammarParser::I8:
        case iris_grammarParser::I16:
        case iris_grammarParser::I32:
        case iris_grammarParser::U8:
        case iris_grammarParser::U16:
        case iris_grammarParser::U32:
        case iris_grammarParser::F8:
        case iris_grammarParser::F16:
        case iris_grammarParser::F32:
        case iris_grammarParser::F64:
        case iris_grammarParser::BOOL:
        case iris_grammarParser::VEC2:
        case iris_grammarParser::VEC3:
        case iris_grammarParser::VEC4:
        case iris_grammarParser::V2:
        case iris_grammarParser::V3:
        case iris_grammarParser::V4:
        case iris_grammarParser::M2:
        case iris_grammarParser::M3:
        case iris_grammarParser::M4:
        case iris_grammarParser::M2X2:
        case iris_grammarParser::M3X3:
        case iris_grammarParser::M4X4:
        case iris_grammarParser::M2X3:
        case iris_grammarParser::M3X2:
        case iris_grammarParser::M3X4:
        case iris_grammarParser::M4X3:
        case iris_grammarParser::M2X4:
        case iris_grammarParser::M4X2:
        case iris_grammarParser::MAT2:
        case iris_grammarParser::MAT3:
        case iris_grammarParser::MAT4:
        case iris_grammarParser::MAT2X3:
        case iris_grammarParser::MAT2X4:
        case iris_grammarParser::MAT3X2:
        case iris_grammarParser::MAT3X4:
        case iris_grammarParser::MAT4X2:
        case iris_grammarParser::MAT4X3:
        case iris_grammarParser::LP:
        case iris_grammarParser::MP:
        case iris_grammarParser::HP:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT: {
          setState(134);
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

//----------------- Import_labelContext ------------------------------------------------------------------

iris_grammarParser::Import_labelContext::Import_labelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> iris_grammarParser::Import_labelContext::LABEL() {
  return getTokens(iris_grammarParser::LABEL);
}

tree::TerminalNode* iris_grammarParser::Import_labelContext::LABEL(size_t i) {
  return getToken(iris_grammarParser::LABEL, i);
}

tree::TerminalNode* iris_grammarParser::Import_labelContext::AS() {
  return getToken(iris_grammarParser::AS, 0);
}


size_t iris_grammarParser::Import_labelContext::getRuleIndex() const {
  return iris_grammarParser::RuleImport_label;
}


std::any iris_grammarParser::Import_labelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitImport_label(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Import_labelContext* iris_grammarParser::import_label() {
  Import_labelContext *_localctx = _tracker.createInstance<Import_labelContext>(_ctx, getState());
  enterRule(_localctx, 10, iris_grammarParser::RuleImport_label);
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
    setState(139);
    antlrcpp::downCast<Import_labelContext *>(_localctx)->import_name = match(iris_grammarParser::LABEL);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::AS) {
      setState(140);
      match(iris_grammarParser::AS);
      setState(141);
      antlrcpp::downCast<Import_labelContext *>(_localctx)->import_alias = match(iris_grammarParser::LABEL);
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

std::vector<tree::TerminalNode *> iris_grammarParser::BlockContext::NEWLINE() {
  return getTokens(iris_grammarParser::NEWLINE);
}

tree::TerminalNode* iris_grammarParser::BlockContext::NEWLINE(size_t i) {
  return getToken(iris_grammarParser::NEWLINE, i);
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
  enterRule(_localctx, 12, iris_grammarParser::RuleBlock);
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
    match(iris_grammarParser::T__6);
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 576452505966276624) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & 35184372088831) != 0)) {
      setState(145);
      statement();
      setState(147);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(146);
        match(iris_grammarParser::NEWLINE);
      }
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(iris_grammarParser::T__7);
   
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

tree::TerminalNode* iris_grammarParser::ConditionalContext::IF() {
  return getToken(iris_grammarParser::IF, 0);
}

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::ConditionalContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::ConditionalContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}

tree::TerminalNode* iris_grammarParser::ConditionalContext::THEN() {
  return getToken(iris_grammarParser::THEN, 0);
}

tree::TerminalNode* iris_grammarParser::ConditionalContext::ELSE() {
  return getToken(iris_grammarParser::ELSE, 0);
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
  enterRule(_localctx, 14, iris_grammarParser::RuleConditional);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(iris_grammarParser::IF);
    setState(157);
    expr(0);
    setState(158);
    match(iris_grammarParser::THEN);
    setState(159);
    expr(0);
    setState(160);
    match(iris_grammarParser::ELSE);
    setState(161);
    expr(0);
   
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

tree::TerminalNode* iris_grammarParser::CastContext::AS() {
  return getToken(iris_grammarParser::AS, 0);
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

iris_grammarParser::TypeContext* iris_grammarParser::CallContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}

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
//----------------- TernaryContext ------------------------------------------------------------------

iris_grammarParser::ConditionalContext* iris_grammarParser::TernaryContext::conditional() {
  return getRuleContext<iris_grammarParser::ConditionalContext>(0);
}

iris_grammarParser::TernaryContext::TernaryContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::TernaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitTernary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GetterContext ------------------------------------------------------------------

iris_grammarParser::ExprContext* iris_grammarParser::GetterContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}

tree::TerminalNode* iris_grammarParser::GetterContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
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

tree::TerminalNode* iris_grammarParser::UnaryOperatorContext::NOT() {
  return getToken(iris_grammarParser::NOT, 0);
}

tree::TerminalNode* iris_grammarParser::UnaryOperatorContext::BITS_NOT() {
  return getToken(iris_grammarParser::BITS_NOT, 0);
}

tree::TerminalNode* iris_grammarParser::UnaryOperatorContext::NORM() {
  return getToken(iris_grammarParser::NORM, 0);
}

tree::TerminalNode* iris_grammarParser::UnaryOperatorContext::INV() {
  return getToken(iris_grammarParser::INV, 0);
}

tree::TerminalNode* iris_grammarParser::UnaryOperatorContext::TRANS() {
  return getToken(iris_grammarParser::TRANS, 0);
}

tree::TerminalNode* iris_grammarParser::UnaryOperatorContext::DET() {
  return getToken(iris_grammarParser::DET, 0);
}

tree::TerminalNode* iris_grammarParser::UnaryOperatorContext::DEG() {
  return getToken(iris_grammarParser::DEG, 0);
}

tree::TerminalNode* iris_grammarParser::UnaryOperatorContext::RAD() {
  return getToken(iris_grammarParser::RAD, 0);
}

iris_grammarParser::UnaryOperatorContext::UnaryOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryOperatorContext ------------------------------------------------------------------

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::BinaryOperatorContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::BinaryOperatorContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_LEFT() {
  return getToken(iris_grammarParser::BITS_LEFT, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_RIGHT() {
  return getToken(iris_grammarParser::BITS_RIGHT, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_AND() {
  return getToken(iris_grammarParser::BITS_AND, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_XOR() {
  return getToken(iris_grammarParser::BITS_XOR, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_OR() {
  return getToken(iris_grammarParser::BITS_OR, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::AND() {
  return getToken(iris_grammarParser::AND, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::OR() {
  return getToken(iris_grammarParser::OR, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_LEFT_EQ() {
  return getToken(iris_grammarParser::BITS_LEFT_EQ, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_RIGHT_EQ() {
  return getToken(iris_grammarParser::BITS_RIGHT_EQ, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_AND_EQ() {
  return getToken(iris_grammarParser::BITS_AND_EQ, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_XOR_EQ() {
  return getToken(iris_grammarParser::BITS_XOR_EQ, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::BITS_OR_EQ() {
  return getToken(iris_grammarParser::BITS_OR_EQ, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::AND_EQ() {
  return getToken(iris_grammarParser::AND_EQ, 0);
}

tree::TerminalNode* iris_grammarParser::BinaryOperatorContext::OR_EQ() {
  return getToken(iris_grammarParser::OR_EQ, 0);
}

iris_grammarParser::BinaryOperatorContext::BinaryOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::BinaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBinaryOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimitiveExpressionContext ------------------------------------------------------------------

iris_grammarParser::PrimitiveContext* iris_grammarParser::PrimitiveExpressionContext::primitive() {
  return getRuleContext<iris_grammarParser::PrimitiveContext>(0);
}

iris_grammarParser::PrimitiveExpressionContext::PrimitiveExpressionContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::PrimitiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitPrimitiveExpression(this);
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
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, iris_grammarParser::RuleExpr, precedence);

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
    setState(194);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::NONE:
      case iris_grammarParser::I8:
      case iris_grammarParser::I16:
      case iris_grammarParser::I32:
      case iris_grammarParser::U8:
      case iris_grammarParser::U16:
      case iris_grammarParser::U32:
      case iris_grammarParser::F8:
      case iris_grammarParser::F16:
      case iris_grammarParser::F32:
      case iris_grammarParser::F64:
      case iris_grammarParser::BOOL:
      case iris_grammarParser::VEC2:
      case iris_grammarParser::VEC3:
      case iris_grammarParser::VEC4:
      case iris_grammarParser::V2:
      case iris_grammarParser::V3:
      case iris_grammarParser::V4:
      case iris_grammarParser::M2:
      case iris_grammarParser::M3:
      case iris_grammarParser::M4:
      case iris_grammarParser::M2X2:
      case iris_grammarParser::M3X3:
      case iris_grammarParser::M4X4:
      case iris_grammarParser::M2X3:
      case iris_grammarParser::M3X2:
      case iris_grammarParser::M3X4:
      case iris_grammarParser::M4X3:
      case iris_grammarParser::M2X4:
      case iris_grammarParser::M4X2:
      case iris_grammarParser::MAT2:
      case iris_grammarParser::MAT3:
      case iris_grammarParser::MAT4:
      case iris_grammarParser::MAT2X3:
      case iris_grammarParser::MAT2X4:
      case iris_grammarParser::MAT3X2:
      case iris_grammarParser::MAT3X4:
      case iris_grammarParser::MAT4X2:
      case iris_grammarParser::MAT4X3:
      case iris_grammarParser::LP:
      case iris_grammarParser::MP:
      case iris_grammarParser::HP: {
        _localctx = _tracker.createInstance<CallContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(164);
        type();
        setState(165);
        match(iris_grammarParser::T__3);
        setState(174);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 574209502245613584) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 74)) & 35184372088831) != 0)) {
          setState(166);
          expr(0);
          setState(171);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == iris_grammarParser::T__1) {
            setState(167);
            match(iris_grammarParser::T__1);
            setState(168);
            expr(0);
            setState(173);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(176);
        match(iris_grammarParser::T__4);
        break;
      }

      case iris_grammarParser::T__3: {
        _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(178);
        match(iris_grammarParser::T__3);
        setState(179);
        expr(0);
        setState(180);
        match(iris_grammarParser::T__4);
        break;
      }

      case iris_grammarParser::T__11: {
        _localctx = _tracker.createInstance<MagnitudeContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(182);
        match(iris_grammarParser::T__11);
        setState(183);
        expr(0);
        setState(184);
        match(iris_grammarParser::T__11);
        break;
      }

      case iris_grammarParser::T__12: {
        _localctx = _tracker.createInstance<AbsoluteValueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(186);
        match(iris_grammarParser::T__12);
        setState(187);
        expr(0);
        setState(188);
        match(iris_grammarParser::T__12);
        break;
      }

      case iris_grammarParser::IF: {
        _localctx = _tracker.createInstance<TernaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(190);
        conditional();
        break;
      }

      case iris_grammarParser::T__13:
      case iris_grammarParser::T__14:
      case iris_grammarParser::NOT:
      case iris_grammarParser::BITS_NOT:
      case iris_grammarParser::NORM:
      case iris_grammarParser::INV:
      case iris_grammarParser::TRANS:
      case iris_grammarParser::DET:
      case iris_grammarParser::DEG:
      case iris_grammarParser::RAD: {
        _localctx = _tracker.createInstance<UnaryOperatorContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(191);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 574208952489787392) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(192);
        expr(15);
        break;
      }

      case iris_grammarParser::FLOAT:
      case iris_grammarParser::LABEL:
      case iris_grammarParser::INT: {
        _localctx = _tracker.createInstance<PrimitiveExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(193);
        primitive();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(265);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(263);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(196);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(197);
          match(iris_grammarParser::T__8);
          setState(198);
          expr(25);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(199);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");

          setState(200);
          match(iris_grammarParser::T__15);
          setState(201);
          expr(15);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(202);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(203);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 4063240) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(204);
          expr(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(205);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(206);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__13

          || _la == iris_grammarParser::T__14)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(207);
          expr(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(208);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(209);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::BITS_LEFT

          || _la == iris_grammarParser::BITS_RIGHT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(210);
          expr(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(211);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(212);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & -2305843009213693952) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(213);
          expr(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(214);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(215);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::AND

          || _la == iris_grammarParser::OR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(216);
          expr(10);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(217);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(218);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 130023424) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(219);
          expr(9);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(220);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(221);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 17045651456) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(222);
          expr(7);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(223);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(224);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__33

          || _la == iris_grammarParser::T__34)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(225);
          expr(6);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(226);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(227);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::BITS_LEFT_EQ

          || _la == iris_grammarParser::BITS_RIGHT_EQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(228);
          expr(5);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(229);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(230);
          _la = _input->LA(1);
          if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 68)) & 7) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(231);
          expr(4);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(232);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(233);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::AND_EQ

          || _la == iris_grammarParser::OR_EQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(234);
          expr(3);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<IndexOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(235);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(240); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(236);
                    match(iris_grammarParser::T__9);
                    setState(237);
                    expr(0);
                    setState(238);
                    match(iris_grammarParser::T__10);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(242); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<CallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(244);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(245);
          match(iris_grammarParser::T__3);
          setState(254);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 574209502245613584) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 74)) & 35184372088831) != 0)) {
            setState(246);
            expr(0);
            setState(251);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == iris_grammarParser::T__1) {
              setState(247);
              match(iris_grammarParser::T__1);
              setState(248);
              expr(0);
              setState(253);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(256);
          match(iris_grammarParser::T__4);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<GetterContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(257);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(258);
          match(iris_grammarParser::T__0);
          setState(259);
          match(iris_grammarParser::LABEL);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<CastContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(260);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(261);
          match(iris_grammarParser::AS);
          setState(262);
          type();
          break;
        }

        default:
          break;
        } 
      }
      setState(267);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
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

tree::TerminalNode* iris_grammarParser::DescriptorContext::DEF() {
  return getToken(iris_grammarParser::DEF, 0);
}

tree::TerminalNode* iris_grammarParser::DescriptorContext::IN() {
  return getToken(iris_grammarParser::IN, 0);
}

tree::TerminalNode* iris_grammarParser::DescriptorContext::OUT() {
  return getToken(iris_grammarParser::OUT, 0);
}

tree::TerminalNode* iris_grammarParser::DescriptorContext::UNIFORM() {
  return getToken(iris_grammarParser::UNIFORM, 0);
}

tree::TerminalNode* iris_grammarParser::DescriptorContext::MUT() {
  return getToken(iris_grammarParser::MUT, 0);
}

tree::TerminalNode* iris_grammarParser::DescriptorContext::INT() {
  return getToken(iris_grammarParser::INT, 0);
}

tree::TerminalNode* iris_grammarParser::DescriptorContext::VERTEX() {
  return getToken(iris_grammarParser::VERTEX, 0);
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
  enterRule(_localctx, 18, iris_grammarParser::RuleDescriptor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(273);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::DEF:
      case iris_grammarParser::IN:
      case iris_grammarParser::OUT:
      case iris_grammarParser::UNIFORM:
      case iris_grammarParser::MUT: {
        enterOuterAlt(_localctx, 1);
        setState(268);
        antlrcpp::downCast<DescriptorContext *>(_localctx)->descriptor_name = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1090715534753792) != 0))) {
          antlrcpp::downCast<DescriptorContext *>(_localctx)->descriptor_name = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case iris_grammarParser::VERTEX: {
        enterOuterAlt(_localctx, 2);
        setState(269);
        antlrcpp::downCast<DescriptorContext *>(_localctx)->descriptor_name = match(iris_grammarParser::VERTEX);
        setState(270);
        match(iris_grammarParser::T__9);
        setState(271);
        match(iris_grammarParser::INT);
        setState(272);
        match(iris_grammarParser::T__10);
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

//----------------- Precision_qualifierContext ------------------------------------------------------------------

iris_grammarParser::Precision_qualifierContext::Precision_qualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Precision_qualifierContext::LP() {
  return getToken(iris_grammarParser::LP, 0);
}

tree::TerminalNode* iris_grammarParser::Precision_qualifierContext::MP() {
  return getToken(iris_grammarParser::MP, 0);
}

tree::TerminalNode* iris_grammarParser::Precision_qualifierContext::HP() {
  return getToken(iris_grammarParser::HP, 0);
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
    setState(275);
    _la = _input->LA(1);
    if (!(((((_la - 113) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 113)) & 7) != 0))) {
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

iris_grammarParser::Precision_qualifierContext* iris_grammarParser::TypeContext::precision_qualifier() {
  return getRuleContext<iris_grammarParser::Precision_qualifierContext>(0);
}

std::vector<tree::TerminalNode *> iris_grammarParser::TypeContext::INT() {
  return getTokens(iris_grammarParser::INT);
}

tree::TerminalNode* iris_grammarParser::TypeContext::INT(size_t i) {
  return getToken(iris_grammarParser::INT, i);
}

tree::TerminalNode* iris_grammarParser::TypeContext::NONE() {
  return getToken(iris_grammarParser::NONE, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::I8() {
  return getToken(iris_grammarParser::I8, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::I16() {
  return getToken(iris_grammarParser::I16, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::I32() {
  return getToken(iris_grammarParser::I32, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::U8() {
  return getToken(iris_grammarParser::U8, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::U16() {
  return getToken(iris_grammarParser::U16, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::U32() {
  return getToken(iris_grammarParser::U32, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::F8() {
  return getToken(iris_grammarParser::F8, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::F16() {
  return getToken(iris_grammarParser::F16, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::F32() {
  return getToken(iris_grammarParser::F32, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::F64() {
  return getToken(iris_grammarParser::F64, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::BOOL() {
  return getToken(iris_grammarParser::BOOL, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::VEC2() {
  return getToken(iris_grammarParser::VEC2, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::VEC3() {
  return getToken(iris_grammarParser::VEC3, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::VEC4() {
  return getToken(iris_grammarParser::VEC4, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::V2() {
  return getToken(iris_grammarParser::V2, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::V3() {
  return getToken(iris_grammarParser::V3, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::V4() {
  return getToken(iris_grammarParser::V4, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M2() {
  return getToken(iris_grammarParser::M2, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M3() {
  return getToken(iris_grammarParser::M3, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M4() {
  return getToken(iris_grammarParser::M4, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M2X2() {
  return getToken(iris_grammarParser::M2X2, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M3X3() {
  return getToken(iris_grammarParser::M3X3, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M4X4() {
  return getToken(iris_grammarParser::M4X4, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M2X3() {
  return getToken(iris_grammarParser::M2X3, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M3X2() {
  return getToken(iris_grammarParser::M3X2, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M3X4() {
  return getToken(iris_grammarParser::M3X4, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M4X3() {
  return getToken(iris_grammarParser::M4X3, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M2X4() {
  return getToken(iris_grammarParser::M2X4, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::M4X2() {
  return getToken(iris_grammarParser::M4X2, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::MAT2() {
  return getToken(iris_grammarParser::MAT2, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::MAT3() {
  return getToken(iris_grammarParser::MAT3, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::MAT4() {
  return getToken(iris_grammarParser::MAT4, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::MAT2X3() {
  return getToken(iris_grammarParser::MAT2X3, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::MAT2X4() {
  return getToken(iris_grammarParser::MAT2X4, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::MAT3X2() {
  return getToken(iris_grammarParser::MAT3X2, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::MAT3X4() {
  return getToken(iris_grammarParser::MAT3X4, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::MAT4X2() {
  return getToken(iris_grammarParser::MAT4X2, 0);
}

tree::TerminalNode* iris_grammarParser::TypeContext::MAT4X3() {
  return getToken(iris_grammarParser::MAT4X3, 0);
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
  enterRule(_localctx, 22, iris_grammarParser::RuleType);
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
    setState(278);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 113) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 113)) & 7) != 0)) {
      setState(277);
      precision_qualifier();
    }

    setState(280);
    antlrcpp::downCast<TypeContext *>(_localctx)->type_name = _input->LT(1);
    _la = _input->LA(1);
    if (!(((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & 549755813887) != 0))) {
      antlrcpp::downCast<TypeContext *>(_localctx)->type_name = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(286);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(281);
        match(iris_grammarParser::T__9);
        setState(282);
        match(iris_grammarParser::INT);
        setState(283);
        match(iris_grammarParser::T__10); 
      }
      setState(288);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
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

iris_grammarParser::DescriptorContext* iris_grammarParser::DeclarationContext::descriptor() {
  return getRuleContext<iris_grammarParser::DescriptorContext>(0);
}

tree::TerminalNode* iris_grammarParser::DeclarationContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}

iris_grammarParser::ExprContext* iris_grammarParser::DeclarationContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
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
  enterRule(_localctx, 24, iris_grammarParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(309);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(289);
      descriptor();
      setState(290);
      match(iris_grammarParser::LABEL);

      setState(291);
      match(iris_grammarParser::T__8);
      setState(292);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(294);
      descriptor();
      setState(295);
      match(iris_grammarParser::LABEL);
      setState(296);
      match(iris_grammarParser::T__35);
      setState(297);
      type();
      setState(300);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__8) {
        setState(298);
        match(iris_grammarParser::T__8);
        setState(299);
        expr(0);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(302);
      match(iris_grammarParser::LABEL);
      setState(303);
      match(iris_grammarParser::T__35);
      setState(304);
      type();
      setState(307);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__8) {
        setState(305);
        match(iris_grammarParser::T__8);
        setState(306);
        expr(0);
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

//----------------- EosContext ------------------------------------------------------------------

iris_grammarParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t iris_grammarParser::EosContext::getRuleIndex() const {
  return iris_grammarParser::RuleEos;
}


std::any iris_grammarParser::EosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitEos(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::EosContext* iris_grammarParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 26, iris_grammarParser::RuleEos);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(iris_grammarParser::T__36);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveContext ------------------------------------------------------------------

iris_grammarParser::PrimitiveContext::PrimitiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::PrimitiveContext::INT() {
  return getToken(iris_grammarParser::INT, 0);
}

tree::TerminalNode* iris_grammarParser::PrimitiveContext::FLOAT() {
  return getToken(iris_grammarParser::FLOAT, 0);
}

tree::TerminalNode* iris_grammarParser::PrimitiveContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}


size_t iris_grammarParser::PrimitiveContext::getRuleIndex() const {
  return iris_grammarParser::RulePrimitive;
}


std::any iris_grammarParser::PrimitiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitPrimitive(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::PrimitiveContext* iris_grammarParser::primitive() {
  PrimitiveContext *_localctx = _tracker.createInstance<PrimitiveContext>(_ctx, getState());
  enterRule(_localctx, 28, iris_grammarParser::RulePrimitive);
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
    setState(313);
    _la = _input->LA(1);
    if (!(((((_la - 116) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 116)) & 7) != 0))) {
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
    case 8: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool iris_grammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 24);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 6);
    case 9: return precpred(_ctx, 5);
    case 10: return precpred(_ctx, 4);
    case 11: return precpred(_ctx, 3);
    case 12: return precpred(_ctx, 2);
    case 13: return precpred(_ctx, 23);
    case 14: return precpred(_ctx, 22);
    case 15: return precpred(_ctx, 16);
    case 16: return precpred(_ctx, 7);

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
