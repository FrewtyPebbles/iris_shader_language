
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
      "root", "statement", "return_statement", "import_statement", "function_definition", 
      "conditional_block", "file_path_part", "import_label", "block", "conditional", 
      "expr", "descriptor", "precision_qualifier", "type", "declaration", 
      "eos", "primitive"
    },
    std::vector<std::string>{
      "", "'return'", "'.'", "','", "'*'", "'('", "')'", "'->'", "'{'", 
      "'}'", "'||'", "'|'", "'['", "']'", "'+'", "'-'", "'^'", "'/'", "'%'", 
      "'''", "'><'", "'<->'", "'<'", "'>'", "'>='", "'<='", "'=='", "'!='", 
      "'='", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "''='", "'><='", 
      "'<->='", "':'", "';'", "'func'", "'if'", "'elif'", "'else'", "'then'", 
      "'import'", "'from'", "'def'", "'in'", "'out'", "'uniform'", "'mut'", 
      "'vertex'", "'not'", "'bits_not'", "'norm'", "'inv'", "'trans'", "'det'", 
      "'deg'", "'rad'", "'and'", "'or'", "'bits_and'", "'bits_xor'", "'bits_or'", 
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
      "", "", "", "", "", "", "FUNC", "IF", "ELIF", "ELSE", "THEN", "IMPORT", 
      "FROM", "DEF", "IN", "OUT", "UNIFORM", "MUT", "VERTEX", "NOT", "BITS_NOT", 
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
  	4,1,125,320,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,1,0,3,0,37,8,0,1,0,1,0,3,0,41,8,0,5,0,43,8,
  	0,10,0,12,0,46,9,0,1,0,1,0,1,1,1,1,1,1,3,1,53,8,1,1,2,1,2,1,2,1,3,1,3,
  	1,3,1,3,5,3,62,8,3,10,3,12,3,65,9,3,1,3,1,3,1,3,1,3,5,3,71,8,3,10,3,12,
  	3,74,9,3,1,3,3,3,77,8,3,1,3,1,3,1,3,1,3,5,3,83,8,3,10,3,12,3,86,9,3,1,
  	3,1,3,3,3,90,8,3,3,3,92,8,3,1,4,1,4,1,4,1,4,1,4,1,4,5,4,100,8,4,10,4,
  	12,4,103,9,4,3,4,105,8,4,1,4,3,4,108,8,4,1,4,1,4,1,4,3,4,113,8,4,1,4,
  	5,4,116,8,4,10,4,12,4,119,9,4,1,4,1,4,1,5,1,5,1,5,1,5,3,5,127,8,5,1,5,
  	1,5,1,5,1,5,3,5,133,8,5,5,5,135,8,5,10,5,12,5,138,9,5,1,5,1,5,1,5,3,5,
  	143,8,5,3,5,145,8,5,1,6,1,6,1,7,1,7,1,7,3,7,152,8,7,1,8,1,8,1,8,3,8,157,
  	8,8,5,8,159,8,8,10,8,12,8,162,9,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,5,10,193,8,10,10,10,12,10,196,9,10,3,10,
  	198,8,10,1,10,1,10,1,10,1,10,1,10,3,10,205,8,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,5,10,248,8,10,10,10,12,10,
  	251,9,10,3,10,253,8,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,5,10,267,8,10,10,10,12,10,270,9,10,1,11,1,11,1,11,1,11,1,
  	11,3,11,277,8,11,1,12,1,12,1,13,3,13,282,8,13,1,13,1,13,1,13,1,13,5,13,
  	288,8,13,10,13,12,13,291,9,13,1,14,1,14,1,14,1,14,3,14,297,8,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,3,14,305,8,14,1,14,1,14,1,14,1,14,1,14,3,14,
  	312,8,14,3,14,314,8,14,1,15,1,15,1,16,1,16,1,16,0,1,20,17,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,0,12,2,0,2,2,119,119,2,0,14,15,53,60,
  	2,0,4,4,17,21,1,0,14,15,1,0,66,67,1,0,22,25,1,0,26,27,2,0,28,37,68,74,
  	1,0,47,51,1,0,115,117,1,0,76,114,1,0,118,120,362,0,44,1,0,0,0,2,52,1,
  	0,0,0,4,54,1,0,0,0,6,91,1,0,0,0,8,93,1,0,0,0,10,122,1,0,0,0,12,146,1,
  	0,0,0,14,148,1,0,0,0,16,153,1,0,0,0,18,165,1,0,0,0,20,204,1,0,0,0,22,
  	276,1,0,0,0,24,278,1,0,0,0,26,281,1,0,0,0,28,313,1,0,0,0,30,315,1,0,0,
  	0,32,317,1,0,0,0,34,36,3,8,4,0,35,37,3,30,15,0,36,35,1,0,0,0,36,37,1,
  	0,0,0,37,43,1,0,0,0,38,40,3,2,1,0,39,41,3,30,15,0,40,39,1,0,0,0,40,41,
  	1,0,0,0,41,43,1,0,0,0,42,34,1,0,0,0,42,38,1,0,0,0,43,46,1,0,0,0,44,42,
  	1,0,0,0,44,45,1,0,0,0,45,47,1,0,0,0,46,44,1,0,0,0,47,48,5,0,0,1,48,1,
  	1,0,0,0,49,53,3,6,3,0,50,53,3,28,14,0,51,53,3,20,10,0,52,49,1,0,0,0,52,
  	50,1,0,0,0,52,51,1,0,0,0,53,3,1,0,0,0,54,55,5,1,0,0,55,56,3,20,10,0,56,
  	5,1,0,0,0,57,58,5,46,0,0,58,63,3,12,6,0,59,60,5,2,0,0,60,62,3,12,6,0,
  	61,59,1,0,0,0,62,65,1,0,0,0,63,61,1,0,0,0,63,64,1,0,0,0,64,66,1,0,0,0,
  	65,63,1,0,0,0,66,76,5,45,0,0,67,72,3,14,7,0,68,69,5,3,0,0,69,71,3,14,
  	7,0,70,68,1,0,0,0,71,74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,77,1,0,
  	0,0,74,72,1,0,0,0,75,77,5,4,0,0,76,67,1,0,0,0,76,75,1,0,0,0,77,92,1,0,
  	0,0,78,79,5,45,0,0,79,84,3,12,6,0,80,81,5,2,0,0,81,83,3,12,6,0,82,80,
  	1,0,0,0,83,86,1,0,0,0,84,82,1,0,0,0,84,85,1,0,0,0,85,89,1,0,0,0,86,84,
  	1,0,0,0,87,88,5,75,0,0,88,90,5,119,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,
  	92,1,0,0,0,91,57,1,0,0,0,91,78,1,0,0,0,92,7,1,0,0,0,93,94,5,40,0,0,94,
  	95,5,119,0,0,95,104,5,5,0,0,96,101,3,28,14,0,97,98,5,3,0,0,98,100,3,28,
  	14,0,99,97,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,
  	105,1,0,0,0,103,101,1,0,0,0,104,96,1,0,0,0,104,105,1,0,0,0,105,107,1,
  	0,0,0,106,108,5,3,0,0,107,106,1,0,0,0,107,108,1,0,0,0,108,109,1,0,0,0,
  	109,112,5,6,0,0,110,111,5,7,0,0,111,113,3,26,13,0,112,110,1,0,0,0,112,
  	113,1,0,0,0,113,117,1,0,0,0,114,116,5,122,0,0,115,114,1,0,0,0,116,119,
  	1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,120,1,0,0,0,119,117,1,0,0,
  	0,120,121,3,16,8,0,121,9,1,0,0,0,122,123,5,41,0,0,123,126,3,20,10,0,124,
  	127,3,16,8,0,125,127,3,2,1,0,126,124,1,0,0,0,126,125,1,0,0,0,127,136,
  	1,0,0,0,128,129,5,42,0,0,129,132,3,20,10,0,130,133,3,16,8,0,131,133,3,
  	2,1,0,132,130,1,0,0,0,132,131,1,0,0,0,133,135,1,0,0,0,134,128,1,0,0,0,
  	135,138,1,0,0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,144,1,0,0,0,138,136,
  	1,0,0,0,139,142,5,43,0,0,140,143,3,16,8,0,141,143,3,2,1,0,142,140,1,0,
  	0,0,142,141,1,0,0,0,143,145,1,0,0,0,144,139,1,0,0,0,144,145,1,0,0,0,145,
  	11,1,0,0,0,146,147,7,0,0,0,147,13,1,0,0,0,148,151,5,119,0,0,149,150,5,
  	75,0,0,150,152,5,119,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,15,1,0,0,
  	0,153,160,5,8,0,0,154,156,3,2,1,0,155,157,5,122,0,0,156,155,1,0,0,0,156,
  	157,1,0,0,0,157,159,1,0,0,0,158,154,1,0,0,0,159,162,1,0,0,0,160,158,1,
  	0,0,0,160,161,1,0,0,0,161,163,1,0,0,0,162,160,1,0,0,0,163,164,5,9,0,0,
  	164,17,1,0,0,0,165,166,5,41,0,0,166,167,3,20,10,0,167,168,5,44,0,0,168,
  	169,3,20,10,0,169,170,5,43,0,0,170,171,3,20,10,0,171,19,1,0,0,0,172,173,
  	6,10,-1,0,173,174,5,5,0,0,174,175,3,20,10,0,175,176,5,6,0,0,176,205,1,
  	0,0,0,177,205,3,32,16,0,178,205,3,4,2,0,179,180,5,10,0,0,180,181,3,20,
  	10,0,181,182,5,10,0,0,182,205,1,0,0,0,183,184,5,11,0,0,184,185,3,20,10,
  	0,185,186,5,11,0,0,186,205,1,0,0,0,187,188,3,26,13,0,188,197,5,5,0,0,
  	189,194,3,20,10,0,190,191,5,3,0,0,191,193,3,20,10,0,192,190,1,0,0,0,193,
  	196,1,0,0,0,194,192,1,0,0,0,194,195,1,0,0,0,195,198,1,0,0,0,196,194,1,
  	0,0,0,197,189,1,0,0,0,197,198,1,0,0,0,198,199,1,0,0,0,199,200,5,6,0,0,
  	200,205,1,0,0,0,201,202,7,1,0,0,202,205,3,20,10,15,203,205,3,18,9,0,204,
  	172,1,0,0,0,204,177,1,0,0,0,204,178,1,0,0,0,204,179,1,0,0,0,204,183,1,
  	0,0,0,204,187,1,0,0,0,204,201,1,0,0,0,204,203,1,0,0,0,205,268,1,0,0,0,
  	206,207,10,14,0,0,207,208,5,16,0,0,208,267,3,20,10,14,209,210,10,13,0,
  	0,210,211,7,2,0,0,211,267,3,20,10,14,212,213,10,12,0,0,213,214,7,3,0,
  	0,214,267,3,20,10,13,215,216,10,11,0,0,216,217,7,4,0,0,217,267,3,20,10,
  	12,218,219,10,10,0,0,219,220,7,5,0,0,220,267,3,20,10,11,221,222,10,9,
  	0,0,222,223,7,6,0,0,223,267,3,20,10,10,224,225,10,8,0,0,225,226,5,63,
  	0,0,226,267,3,20,10,9,227,228,10,7,0,0,228,229,5,64,0,0,229,267,3,20,
  	10,8,230,231,10,6,0,0,231,232,5,65,0,0,232,267,3,20,10,7,233,234,10,5,
  	0,0,234,235,5,61,0,0,235,267,3,20,10,6,236,237,10,4,0,0,237,238,5,62,
  	0,0,238,267,3,20,10,5,239,240,10,1,0,0,240,241,7,7,0,0,241,267,3,20,10,
  	1,242,243,10,19,0,0,243,252,5,5,0,0,244,249,3,20,10,0,245,246,5,3,0,0,
  	246,248,3,20,10,0,247,245,1,0,0,0,248,251,1,0,0,0,249,247,1,0,0,0,249,
  	250,1,0,0,0,250,253,1,0,0,0,251,249,1,0,0,0,252,244,1,0,0,0,252,253,1,
  	0,0,0,253,254,1,0,0,0,254,267,5,6,0,0,255,256,10,17,0,0,256,257,5,12,
  	0,0,257,258,3,20,10,0,258,259,5,13,0,0,259,267,1,0,0,0,260,261,10,16,
  	0,0,261,262,5,2,0,0,262,267,5,119,0,0,263,264,10,3,0,0,264,265,5,75,0,
  	0,265,267,3,26,13,0,266,206,1,0,0,0,266,209,1,0,0,0,266,212,1,0,0,0,266,
  	215,1,0,0,0,266,218,1,0,0,0,266,221,1,0,0,0,266,224,1,0,0,0,266,227,1,
  	0,0,0,266,230,1,0,0,0,266,233,1,0,0,0,266,236,1,0,0,0,266,239,1,0,0,0,
  	266,242,1,0,0,0,266,255,1,0,0,0,266,260,1,0,0,0,266,263,1,0,0,0,267,270,
  	1,0,0,0,268,266,1,0,0,0,268,269,1,0,0,0,269,21,1,0,0,0,270,268,1,0,0,
  	0,271,277,7,8,0,0,272,273,5,52,0,0,273,274,5,12,0,0,274,275,5,120,0,0,
  	275,277,5,13,0,0,276,271,1,0,0,0,276,272,1,0,0,0,277,23,1,0,0,0,278,279,
  	7,9,0,0,279,25,1,0,0,0,280,282,3,24,12,0,281,280,1,0,0,0,281,282,1,0,
  	0,0,282,283,1,0,0,0,283,289,7,10,0,0,284,285,5,12,0,0,285,286,5,120,0,
  	0,286,288,5,13,0,0,287,284,1,0,0,0,288,291,1,0,0,0,289,287,1,0,0,0,289,
  	290,1,0,0,0,290,27,1,0,0,0,291,289,1,0,0,0,292,293,3,22,11,0,293,296,
  	5,119,0,0,294,295,5,28,0,0,295,297,3,20,10,0,296,294,1,0,0,0,296,297,
  	1,0,0,0,297,314,1,0,0,0,298,299,3,22,11,0,299,300,5,119,0,0,300,301,5,
  	38,0,0,301,304,3,26,13,0,302,303,5,28,0,0,303,305,3,20,10,0,304,302,1,
  	0,0,0,304,305,1,0,0,0,305,314,1,0,0,0,306,307,5,119,0,0,307,308,5,38,
  	0,0,308,311,3,26,13,0,309,310,5,28,0,0,310,312,3,20,10,0,311,309,1,0,
  	0,0,311,312,1,0,0,0,312,314,1,0,0,0,313,292,1,0,0,0,313,298,1,0,0,0,313,
  	306,1,0,0,0,314,29,1,0,0,0,315,316,5,39,0,0,316,31,1,0,0,0,317,318,7,
  	11,0,0,318,33,1,0,0,0,38,36,40,42,44,52,63,72,76,84,89,91,101,104,107,
  	112,117,126,132,136,142,144,151,156,160,194,197,204,249,252,266,268,276,
  	281,289,296,304,311,313
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
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2305811123376540706) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & 35184372088831) != 0)) {
      setState(42);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::FUNC: {
          setState(34);
          function_definition();
          setState(36);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == iris_grammarParser::T__38) {
            setState(35);
            eos();
          }
          break;
        }

        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__9:
        case iris_grammarParser::T__10:
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
          setState(38);
          statement();
          setState(40);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == iris_grammarParser::T__38) {
            setState(39);
            eos();
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(46);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(47);
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
    setState(52);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(49);
      import_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(50);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(51);
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

//----------------- Return_statementContext ------------------------------------------------------------------

iris_grammarParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::ExprContext* iris_grammarParser::Return_statementContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}


size_t iris_grammarParser::Return_statementContext::getRuleIndex() const {
  return iris_grammarParser::RuleReturn_statement;
}


std::any iris_grammarParser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Return_statementContext* iris_grammarParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 4, iris_grammarParser::RuleReturn_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(iris_grammarParser::T__0);
    setState(55);
    expr(0);
   
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

std::vector<iris_grammarParser::File_path_partContext *> iris_grammarParser::Import_statementContext::file_path_part() {
  return getRuleContexts<iris_grammarParser::File_path_partContext>();
}

iris_grammarParser::File_path_partContext* iris_grammarParser::Import_statementContext::file_path_part(size_t i) {
  return getRuleContext<iris_grammarParser::File_path_partContext>(i);
}

std::vector<iris_grammarParser::Import_labelContext *> iris_grammarParser::Import_statementContext::import_label() {
  return getRuleContexts<iris_grammarParser::Import_labelContext>();
}

iris_grammarParser::Import_labelContext* iris_grammarParser::Import_statementContext::import_label(size_t i) {
  return getRuleContext<iris_grammarParser::Import_labelContext>(i);
}

tree::TerminalNode* iris_grammarParser::Import_statementContext::AS() {
  return getToken(iris_grammarParser::AS, 0);
}

tree::TerminalNode* iris_grammarParser::Import_statementContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
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
  enterRule(_localctx, 6, iris_grammarParser::RuleImport_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::FROM: {
        enterOuterAlt(_localctx, 1);
        setState(57);
        match(iris_grammarParser::FROM);

        setState(58);
        file_path_part();
        setState(63);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == iris_grammarParser::T__1) {
          setState(59);
          match(iris_grammarParser::T__1);
          setState(60);
          file_path_part();
          setState(65);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(66);
        match(iris_grammarParser::IMPORT);
        setState(76);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case iris_grammarParser::LABEL: {
            setState(67);
            import_label();
            setState(72);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == iris_grammarParser::T__2) {
              setState(68);
              match(iris_grammarParser::T__2);
              setState(69);
              import_label();
              setState(74);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case iris_grammarParser::T__3: {
            setState(75);
            match(iris_grammarParser::T__3);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case iris_grammarParser::IMPORT: {
        enterOuterAlt(_localctx, 2);
        setState(78);
        match(iris_grammarParser::IMPORT);

        setState(79);
        file_path_part();
        setState(84);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == iris_grammarParser::T__1) {
          setState(80);
          match(iris_grammarParser::T__1);
          setState(81);
          file_path_part();
          setState(86);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(89);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == iris_grammarParser::AS) {
          setState(87);
          match(iris_grammarParser::AS);

          setState(88);
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
  enterRule(_localctx, 8, iris_grammarParser::RuleFunction_definition);
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
    setState(93);
    match(iris_grammarParser::FUNC);
    setState(94);
    match(iris_grammarParser::LABEL);
    setState(95);
    match(iris_grammarParser::T__4);
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8866461766385664) != 0) || _la == iris_grammarParser::LABEL) {
      setState(96);
      declaration();
      setState(101);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(97);
          match(iris_grammarParser::T__2);
          setState(98);
          declaration(); 
        }
        setState(103);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      }
    }
    setState(107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__2) {
      setState(106);
      match(iris_grammarParser::T__2);
    }
    setState(109);
    match(iris_grammarParser::T__5);
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__6) {
      setState(110);
      match(iris_grammarParser::T__6);
      setState(111);
      type();
    }
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::NEWLINE) {
      setState(114);
      match(iris_grammarParser::NEWLINE);
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(120);
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
  enterRule(_localctx, 10, iris_grammarParser::RuleConditional_block);
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
    setState(122);
    match(iris_grammarParser::IF);
    setState(123);
    expr(0);
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__7: {
        setState(124);
        block();
        break;
      }

      case iris_grammarParser::T__0:
      case iris_grammarParser::T__4:
      case iris_grammarParser::T__9:
      case iris_grammarParser::T__10:
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
        setState(125);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::ELIF) {
      setState(128);
      match(iris_grammarParser::ELIF);
      setState(129);
      expr(0);
      setState(132);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__7: {
          setState(130);
          block();
          break;
        }

        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__9:
        case iris_grammarParser::T__10:
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
          setState(131);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::ELSE) {
      setState(139);
      match(iris_grammarParser::ELSE);
      setState(142);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__7: {
          setState(140);
          block();
          break;
        }

        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__9:
        case iris_grammarParser::T__10:
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
          setState(141);
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

//----------------- File_path_partContext ------------------------------------------------------------------

iris_grammarParser::File_path_partContext::File_path_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::File_path_partContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}


size_t iris_grammarParser::File_path_partContext::getRuleIndex() const {
  return iris_grammarParser::RuleFile_path_part;
}


std::any iris_grammarParser::File_path_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitFile_path_part(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::File_path_partContext* iris_grammarParser::file_path_part() {
  File_path_partContext *_localctx = _tracker.createInstance<File_path_partContext>(_ctx, getState());
  enterRule(_localctx, 12, iris_grammarParser::RuleFile_path_part);
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
    setState(146);
    _la = _input->LA(1);
    if (!(_la == iris_grammarParser::T__1 || _la == iris_grammarParser::LABEL)) {
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
  enterRule(_localctx, 14, iris_grammarParser::RuleImport_label);
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
    setState(148);
    antlrcpp::downCast<Import_labelContext *>(_localctx)->import_name = match(iris_grammarParser::LABEL);
    setState(151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::AS) {
      setState(149);
      match(iris_grammarParser::AS);
      setState(150);
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
  enterRule(_localctx, 16, iris_grammarParser::RuleBlock);
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
    setState(153);
    match(iris_grammarParser::T__7);
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2305810023864912930) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & 35184372088831) != 0)) {
      setState(154);
      statement();
      setState(156);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(155);
        match(iris_grammarParser::NEWLINE);
      }
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(163);
    match(iris_grammarParser::T__8);
   
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
  enterRule(_localctx, 18, iris_grammarParser::RuleConditional);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(iris_grammarParser::IF);
    setState(166);
    expr(0);
    setState(167);
    match(iris_grammarParser::THEN);
    setState(168);
    expr(0);
    setState(169);
    match(iris_grammarParser::ELSE);
    setState(170);
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
//----------------- ReturnContext ------------------------------------------------------------------

iris_grammarParser::Return_statementContext* iris_grammarParser::ReturnContext::return_statement() {
  return getRuleContext<iris_grammarParser::Return_statementContext>(0);
}

iris_grammarParser::ReturnContext::ReturnContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
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
//----------------- ConstructorCallContext ------------------------------------------------------------------

iris_grammarParser::TypeContext* iris_grammarParser::ConstructorCallContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::ConstructorCallContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::ConstructorCallContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}

iris_grammarParser::ConstructorCallContext::ConstructorCallContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::ConstructorCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitConstructorCall(this);
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

iris_grammarParser::ExprContext* iris_grammarParser::expr() {
   return expr(0);
}

iris_grammarParser::ExprContext* iris_grammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  iris_grammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  iris_grammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, iris_grammarParser::RuleExpr, precedence);

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
    setState(204);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__4: {
        _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(173);
        match(iris_grammarParser::T__4);
        setState(174);
        expr(0);
        setState(175);
        match(iris_grammarParser::T__5);
        break;
      }

      case iris_grammarParser::FLOAT:
      case iris_grammarParser::LABEL:
      case iris_grammarParser::INT: {
        _localctx = _tracker.createInstance<PrimitiveExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(177);
        primitive();
        break;
      }

      case iris_grammarParser::T__0: {
        _localctx = _tracker.createInstance<ReturnContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(178);
        return_statement();
        break;
      }

      case iris_grammarParser::T__9: {
        _localctx = _tracker.createInstance<MagnitudeContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(179);
        match(iris_grammarParser::T__9);
        setState(180);
        expr(0);
        setState(181);
        match(iris_grammarParser::T__9);
        break;
      }

      case iris_grammarParser::T__10: {
        _localctx = _tracker.createInstance<AbsoluteValueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(183);
        match(iris_grammarParser::T__10);
        setState(184);
        expr(0);
        setState(185);
        match(iris_grammarParser::T__10);
        break;
      }

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
        _localctx = _tracker.createInstance<ConstructorCallContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(187);
        type();
        setState(188);
        match(iris_grammarParser::T__4);
        setState(197);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 2296838008982260770) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 76)) & 35184372088831) != 0)) {
          setState(189);
          expr(0);
          setState(194);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == iris_grammarParser::T__2) {
            setState(190);
            match(iris_grammarParser::T__2);
            setState(191);
            expr(0);
            setState(196);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(199);
        match(iris_grammarParser::T__5);
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
        setState(201);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 2296835809959002112) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(202);
        expr(15);
        break;
      }

      case iris_grammarParser::IF: {
        _localctx = _tracker.createInstance<TernaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(203);
        conditional();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(266);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(206);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(207);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::T__15);
          setState(208);
          expr(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(209);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(210);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 4063248) != 0))) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(211);
          expr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(212);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(213);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__13

          || _la == iris_grammarParser::T__14)) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(214);
          expr(13);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(215);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(216);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::BITS_LEFT

          || _la == iris_grammarParser::BITS_RIGHT)) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(217);
          expr(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(218);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(219);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 62914560) != 0))) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(220);
          expr(11);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(221);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(222);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__25

          || _la == iris_grammarParser::T__26)) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(223);
          expr(10);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(224);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(225);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::BITS_AND);
          setState(226);
          expr(9);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(227);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(228);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::BITS_XOR);
          setState(229);
          expr(8);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(230);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(231);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::BITS_OR);
          setState(232);
          expr(7);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(233);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(234);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::AND);
          setState(235);
          expr(6);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(236);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(237);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::OR);
          setState(238);
          expr(5);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(239);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(240);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 28) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 28)) & 139637976728575) != 0))) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(241);
          expr(1);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<CallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(242);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(243);
          match(iris_grammarParser::T__4);
          setState(252);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 2296838008982260770) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 76)) & 35184372088831) != 0)) {
            setState(244);
            expr(0);
            setState(249);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == iris_grammarParser::T__2) {
              setState(245);
              match(iris_grammarParser::T__2);
              setState(246);
              expr(0);
              setState(251);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(254);
          match(iris_grammarParser::T__5);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<IndexOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(255);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(256);
          match(iris_grammarParser::T__11);
          setState(257);
          expr(0);
          setState(258);
          match(iris_grammarParser::T__12);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<GetterContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(260);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(261);
          match(iris_grammarParser::T__1);
          setState(262);
          match(iris_grammarParser::LABEL);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<CastContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(263);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(264);
          match(iris_grammarParser::AS);
          setState(265);
          type();
          break;
        }

        default:
          break;
        } 
      }
      setState(270);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
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
  enterRule(_localctx, 22, iris_grammarParser::RuleDescriptor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(276);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::DEF:
      case iris_grammarParser::IN:
      case iris_grammarParser::OUT:
      case iris_grammarParser::UNIFORM:
      case iris_grammarParser::MUT: {
        enterOuterAlt(_localctx, 1);
        setState(271);
        antlrcpp::downCast<DescriptorContext *>(_localctx)->descriptor_name = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 4362862139015168) != 0))) {
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
        setState(272);
        antlrcpp::downCast<DescriptorContext *>(_localctx)->descriptor_name = match(iris_grammarParser::VERTEX);
        setState(273);
        match(iris_grammarParser::T__11);
        setState(274);
        match(iris_grammarParser::INT);
        setState(275);
        match(iris_grammarParser::T__12);
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
  enterRule(_localctx, 24, iris_grammarParser::RulePrecision_qualifier);
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
    setState(278);
    _la = _input->LA(1);
    if (!(((((_la - 115) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 115)) & 7) != 0))) {
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
  enterRule(_localctx, 26, iris_grammarParser::RuleType);
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
    setState(281);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 115) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 115)) & 7) != 0)) {
      setState(280);
      precision_qualifier();
    }

    setState(283);
    antlrcpp::downCast<TypeContext *>(_localctx)->type_name = _input->LT(1);
    _la = _input->LA(1);
    if (!(((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & 549755813887) != 0))) {
      antlrcpp::downCast<TypeContext *>(_localctx)->type_name = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(289);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(284);
        match(iris_grammarParser::T__11);
        setState(285);
        match(iris_grammarParser::INT);
        setState(286);
        match(iris_grammarParser::T__12); 
      }
      setState(291);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
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
  enterRule(_localctx, 28, iris_grammarParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(313);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(292);
      descriptor();
      setState(293);
      match(iris_grammarParser::LABEL);
      setState(296);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__27) {
        setState(294);
        match(iris_grammarParser::T__27);
        setState(295);
        expr(0);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(298);
      descriptor();
      setState(299);
      match(iris_grammarParser::LABEL);
      setState(300);
      match(iris_grammarParser::T__37);
      setState(301);
      type();
      setState(304);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__27) {
        setState(302);
        match(iris_grammarParser::T__27);
        setState(303);
        expr(0);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(306);
      match(iris_grammarParser::LABEL);
      setState(307);
      match(iris_grammarParser::T__37);
      setState(308);
      type();
      setState(311);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__27) {
        setState(309);
        match(iris_grammarParser::T__27);
        setState(310);
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
  enterRule(_localctx, 30, iris_grammarParser::RuleEos);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    match(iris_grammarParser::T__38);
   
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
  enterRule(_localctx, 32, iris_grammarParser::RulePrimitive);
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
    setState(317);
    _la = _input->LA(1);
    if (!(((((_la - 118) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 118)) & 7) != 0))) {
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
    case 10: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool iris_grammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 13);
    case 2: return precpred(_ctx, 12);
    case 3: return precpred(_ctx, 11);
    case 4: return precpred(_ctx, 10);
    case 5: return precpred(_ctx, 9);
    case 6: return precpred(_ctx, 8);
    case 7: return precpred(_ctx, 7);
    case 8: return precpred(_ctx, 6);
    case 9: return precpred(_ctx, 5);
    case 10: return precpred(_ctx, 4);
    case 11: return precpred(_ctx, 1);
    case 12: return precpred(_ctx, 19);
    case 13: return precpred(_ctx, 17);
    case 14: return precpred(_ctx, 16);
    case 15: return precpred(_ctx, 3);

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
