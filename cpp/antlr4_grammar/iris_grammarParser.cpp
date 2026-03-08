
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
      "conditional_block", "for_block", "unpacking_list", "unpacking_item", 
      "while_block", "do_while_block", "match_block", "case_block", "file_path_part", 
      "import_label", "block", "block_item", "conditional", "expr", "descriptor", 
      "precision_qualifier", "type", "declaration", "eos", "primitive"
    },
    std::vector<std::string>{
      "", "'return'", "'.'", "','", "'*'", "'('", "')'", "'->'", "'for'", 
      "'while'", "'do'", "'match'", "'{'", "'}'", "'other'", "'||'", "'|'", 
      "'['", "']'", "'+'", "'-'", "'^'", "'/'", "'%'", "'@'", "'><'", "'<'", 
      "'>'", "'>='", "'<='", "'=='", "'!='", "'='", "'+='", "'-='", "'*='", 
      "'/='", "'%='", "'^='", "''='", "'><='", "'<->='", "':'", "';'", "'func'", 
      "'if'", "'elif'", "'else'", "'then'", "'import'", "'from'", "'def'", 
      "'in'", "'out'", "'uniform'", "'mut'", "'vertex'", "'not'", "'bits_not'", 
      "'norm:'", "'inv:'", "'trans:'", "'det:'", "'deg:'", "'rad:'", "'and'", 
      "'or'", "'bits_and'", "'bits_xor'", "'bits_or'", "'bits_left'", "'bits_right'", 
      "'and='", "'or='", "'bits_and='", "'bits_xor='", "'bits_or='", "'bits_left='", 
      "'bits_right='", "'as'", "'none'", "'i8'", "'i16'", "'i32'", "'u8'", 
      "'u16'", "'u32'", "'f8'", "'f16'", "'f32'", "'f64'", "'bool'", "'vec2'", 
      "'vec3'", "'vec4'", "'v2'", "'v3'", "'v4'", "'m2'", "'m3'", "'m4'", 
      "'m2x2'", "'m3x3'", "'m4x4'", "'m2x3'", "'m3x2'", "'m3x4'", "'m4x3'", 
      "'m2x4'", "'m4x2'", "'mat2'", "'mat3'", "'mat4'", "'mat2x3'", "'mat2x4'", 
      "'mat3x2'", "'mat3x4'", "'mat4x2'", "'mat4x3'", "'lp'", "'mp'", "'hp'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "FUNC", "IF", "ELIF", "ELSE", 
      "THEN", "IMPORT", "FROM", "DEF", "IN", "OUT", "UNIFORM", "MUT", "VERTEX", 
      "NOT", "BITS_NOT", "NORM", "INV", "TRANS", "DET", "DEG", "RAD", "AND", 
      "OR", "BITS_AND", "BITS_XOR", "BITS_OR", "BITS_LEFT", "BITS_RIGHT", 
      "AND_EQ", "OR_EQ", "BITS_AND_EQ", "BITS_XOR_EQ", "BITS_OR_EQ", "BITS_LEFT_EQ", 
      "BITS_RIGHT_EQ", "AS", "NONE", "I8", "I16", "I32", "U8", "U16", "U32", 
      "F8", "F16", "F32", "F64", "BOOL", "VEC2", "VEC3", "VEC4", "V2", "V3", 
      "V4", "M2", "M3", "M4", "M2X2", "M3X3", "M4X4", "M2X3", "M3X2", "M3X4", 
      "M4X3", "M2X4", "M4X2", "MAT2", "MAT3", "MAT4", "MAT2X3", "MAT2X4", 
      "MAT3X2", "MAT3X4", "MAT4X2", "MAT4X3", "LP", "MP", "HP", "BOOLEAN", 
      "FLOAT", "LABEL", "INT", "WS", "NEWLINE", "LINE_COMMENT", "BLOCK_COMMENT", 
      "ERROR_TOKEN"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,130,408,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,3,0,53,8,0,1,0,1,0,3,0,57,8,
  	0,5,0,59,8,0,10,0,12,0,62,9,0,1,0,1,0,1,1,1,1,1,1,3,1,69,8,1,1,2,1,2,
  	3,2,73,8,2,1,3,1,3,1,3,1,3,5,3,79,8,3,10,3,12,3,82,9,3,1,3,1,3,1,3,1,
  	3,5,3,88,8,3,10,3,12,3,91,9,3,1,3,3,3,94,8,3,1,3,1,3,1,3,1,3,5,3,100,
  	8,3,10,3,12,3,103,9,3,1,3,1,3,3,3,107,8,3,3,3,109,8,3,1,4,1,4,1,4,1,4,
  	1,4,1,4,5,4,117,8,4,10,4,12,4,120,9,4,3,4,122,8,4,1,4,3,4,125,8,4,1,4,
  	1,4,1,4,3,4,130,8,4,1,4,5,4,133,8,4,10,4,12,4,136,9,4,1,4,1,4,1,5,1,5,
  	1,5,1,5,3,5,144,8,5,1,5,1,5,1,5,1,5,3,5,150,8,5,5,5,152,8,5,10,5,12,5,
  	155,9,5,1,5,1,5,1,5,3,5,160,8,5,3,5,162,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,177,8,6,1,7,1,7,1,7,5,7,182,8,7,10,7,12,
  	7,185,9,7,1,8,1,8,1,8,1,8,1,8,1,8,3,8,193,8,8,1,9,1,9,1,9,1,9,1,10,1,
  	10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,3,11,209,8,11,5,11,211,8,11,
  	10,11,12,11,214,9,11,1,11,1,11,1,12,1,12,3,12,220,8,12,1,12,1,12,1,12,
  	3,12,225,8,12,1,13,1,13,1,14,1,14,1,14,3,14,232,8,14,1,15,1,15,5,15,236,
  	8,15,10,15,12,15,239,9,15,1,15,1,15,1,16,1,16,3,16,245,8,16,1,16,1,16,
  	1,16,1,16,3,16,251,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,5,18,280,8,18,10,18,12,18,283,9,18,3,18,285,8,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,3,18,293,8,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,336,8,18,10,18,12,18,339,
  	9,18,3,18,341,8,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,5,18,355,8,18,10,18,12,18,358,9,18,1,19,1,19,1,19,1,19,1,19,
  	3,19,365,8,19,1,20,1,20,1,21,3,21,370,8,21,1,21,1,21,1,21,1,21,5,21,376,
  	8,21,10,21,12,21,379,9,21,1,22,1,22,1,22,1,22,3,22,385,8,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,3,22,393,8,22,1,22,1,22,1,22,1,22,1,22,3,22,400,8,
  	22,3,22,402,8,22,1,23,1,23,1,24,1,24,1,24,0,1,36,25,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,0,12,2,0,2,2,124,124,
  	2,0,19,20,57,64,2,0,4,4,22,25,1,0,19,20,1,0,70,71,1,0,26,29,1,0,30,31,
  	2,0,32,41,72,78,1,0,51,55,1,0,119,121,1,0,80,118,1,0,122,125,456,0,60,
  	1,0,0,0,2,68,1,0,0,0,4,70,1,0,0,0,6,108,1,0,0,0,8,110,1,0,0,0,10,139,
  	1,0,0,0,12,176,1,0,0,0,14,178,1,0,0,0,16,192,1,0,0,0,18,194,1,0,0,0,20,
  	198,1,0,0,0,22,203,1,0,0,0,24,224,1,0,0,0,26,226,1,0,0,0,28,228,1,0,0,
  	0,30,233,1,0,0,0,32,250,1,0,0,0,34,252,1,0,0,0,36,292,1,0,0,0,38,364,
  	1,0,0,0,40,366,1,0,0,0,42,369,1,0,0,0,44,401,1,0,0,0,46,403,1,0,0,0,48,
  	405,1,0,0,0,50,52,3,8,4,0,51,53,3,46,23,0,52,51,1,0,0,0,52,53,1,0,0,0,
  	53,59,1,0,0,0,54,56,3,2,1,0,55,57,3,46,23,0,56,55,1,0,0,0,56,57,1,0,0,
  	0,57,59,1,0,0,0,58,50,1,0,0,0,58,54,1,0,0,0,59,62,1,0,0,0,60,58,1,0,0,
  	0,60,61,1,0,0,0,61,63,1,0,0,0,62,60,1,0,0,0,63,64,5,0,0,1,64,1,1,0,0,
  	0,65,69,3,6,3,0,66,69,3,44,22,0,67,69,3,36,18,0,68,65,1,0,0,0,68,66,1,
  	0,0,0,68,67,1,0,0,0,69,3,1,0,0,0,70,72,5,1,0,0,71,73,3,36,18,0,72,71,
  	1,0,0,0,72,73,1,0,0,0,73,5,1,0,0,0,74,75,5,50,0,0,75,80,3,26,13,0,76,
  	77,5,2,0,0,77,79,3,26,13,0,78,76,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,
  	80,81,1,0,0,0,81,83,1,0,0,0,82,80,1,0,0,0,83,93,5,49,0,0,84,89,3,28,14,
  	0,85,86,5,3,0,0,86,88,3,28,14,0,87,85,1,0,0,0,88,91,1,0,0,0,89,87,1,0,
  	0,0,89,90,1,0,0,0,90,94,1,0,0,0,91,89,1,0,0,0,92,94,5,4,0,0,93,84,1,0,
  	0,0,93,92,1,0,0,0,94,109,1,0,0,0,95,96,5,49,0,0,96,101,3,26,13,0,97,98,
  	5,2,0,0,98,100,3,26,13,0,99,97,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,
  	101,102,1,0,0,0,102,106,1,0,0,0,103,101,1,0,0,0,104,105,5,79,0,0,105,
  	107,5,124,0,0,106,104,1,0,0,0,106,107,1,0,0,0,107,109,1,0,0,0,108,74,
  	1,0,0,0,108,95,1,0,0,0,109,7,1,0,0,0,110,111,5,44,0,0,111,112,5,124,0,
  	0,112,121,5,5,0,0,113,118,3,44,22,0,114,115,5,3,0,0,115,117,3,44,22,0,
  	116,114,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,122,
  	1,0,0,0,120,118,1,0,0,0,121,113,1,0,0,0,121,122,1,0,0,0,122,124,1,0,0,
  	0,123,125,5,3,0,0,124,123,1,0,0,0,124,125,1,0,0,0,125,126,1,0,0,0,126,
  	129,5,6,0,0,127,128,5,7,0,0,128,130,3,42,21,0,129,127,1,0,0,0,129,130,
  	1,0,0,0,130,134,1,0,0,0,131,133,5,127,0,0,132,131,1,0,0,0,133,136,1,0,
  	0,0,134,132,1,0,0,0,134,135,1,0,0,0,135,137,1,0,0,0,136,134,1,0,0,0,137,
  	138,3,30,15,0,138,9,1,0,0,0,139,140,5,45,0,0,140,143,3,36,18,0,141,144,
  	3,30,15,0,142,144,3,2,1,0,143,141,1,0,0,0,143,142,1,0,0,0,144,153,1,0,
  	0,0,145,146,5,46,0,0,146,149,3,36,18,0,147,150,3,30,15,0,148,150,3,2,
  	1,0,149,147,1,0,0,0,149,148,1,0,0,0,150,152,1,0,0,0,151,145,1,0,0,0,152,
  	155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,161,1,0,0,0,155,153,1,
  	0,0,0,156,159,5,47,0,0,157,160,3,30,15,0,158,160,3,2,1,0,159,157,1,0,
  	0,0,159,158,1,0,0,0,160,162,1,0,0,0,161,156,1,0,0,0,161,162,1,0,0,0,162,
  	11,1,0,0,0,163,164,5,8,0,0,164,165,3,14,7,0,165,166,5,52,0,0,166,167,
  	3,36,18,0,167,177,1,0,0,0,168,169,5,8,0,0,169,170,3,44,22,0,170,171,5,
  	3,0,0,171,172,3,36,18,0,172,173,5,3,0,0,173,174,3,36,18,0,174,175,3,30,
  	15,0,175,177,1,0,0,0,176,163,1,0,0,0,176,168,1,0,0,0,177,13,1,0,0,0,178,
  	183,3,16,8,0,179,180,5,3,0,0,180,182,3,16,8,0,181,179,1,0,0,0,182,185,
  	1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,15,1,0,0,0,185,183,1,0,0,
  	0,186,193,5,124,0,0,187,193,3,44,22,0,188,189,5,5,0,0,189,190,3,14,7,
  	0,190,191,5,6,0,0,191,193,1,0,0,0,192,186,1,0,0,0,192,187,1,0,0,0,192,
  	188,1,0,0,0,193,17,1,0,0,0,194,195,5,9,0,0,195,196,3,36,18,0,196,197,
  	3,30,15,0,197,19,1,0,0,0,198,199,5,10,0,0,199,200,3,30,15,0,200,201,5,
  	9,0,0,201,202,3,36,18,0,202,21,1,0,0,0,203,204,5,11,0,0,204,205,3,36,
  	18,0,205,212,5,12,0,0,206,208,3,24,12,0,207,209,5,127,0,0,208,207,1,0,
  	0,0,208,209,1,0,0,0,209,211,1,0,0,0,210,206,1,0,0,0,211,214,1,0,0,0,212,
  	210,1,0,0,0,212,213,1,0,0,0,213,215,1,0,0,0,214,212,1,0,0,0,215,216,5,
  	13,0,0,216,23,1,0,0,0,217,220,3,36,18,0,218,220,5,14,0,0,219,217,1,0,
  	0,0,219,218,1,0,0,0,220,221,1,0,0,0,221,222,5,7,0,0,222,225,3,30,15,0,
  	223,225,3,36,18,0,224,219,1,0,0,0,224,223,1,0,0,0,225,25,1,0,0,0,226,
  	227,7,0,0,0,227,27,1,0,0,0,228,231,5,124,0,0,229,230,5,79,0,0,230,232,
  	5,124,0,0,231,229,1,0,0,0,231,232,1,0,0,0,232,29,1,0,0,0,233,237,5,12,
  	0,0,234,236,3,32,16,0,235,234,1,0,0,0,236,239,1,0,0,0,237,235,1,0,0,0,
  	237,238,1,0,0,0,238,240,1,0,0,0,239,237,1,0,0,0,240,241,5,13,0,0,241,
  	31,1,0,0,0,242,244,3,2,1,0,243,245,5,127,0,0,244,243,1,0,0,0,244,245,
  	1,0,0,0,245,251,1,0,0,0,246,251,3,18,9,0,247,251,3,20,10,0,248,251,3,
  	12,6,0,249,251,3,10,5,0,250,242,1,0,0,0,250,246,1,0,0,0,250,247,1,0,0,
  	0,250,248,1,0,0,0,250,249,1,0,0,0,251,33,1,0,0,0,252,253,5,45,0,0,253,
  	254,3,36,18,0,254,255,5,48,0,0,255,256,3,36,18,0,256,257,5,47,0,0,257,
  	258,3,36,18,0,258,35,1,0,0,0,259,260,6,18,-1,0,260,293,3,4,2,0,261,262,
  	5,5,0,0,262,263,3,36,18,0,263,264,5,6,0,0,264,293,1,0,0,0,265,293,3,48,
  	24,0,266,267,5,15,0,0,267,268,3,36,18,0,268,269,5,15,0,0,269,293,1,0,
  	0,0,270,271,5,16,0,0,271,272,3,36,18,0,272,273,5,16,0,0,273,293,1,0,0,
  	0,274,275,3,42,21,0,275,284,5,5,0,0,276,281,3,36,18,0,277,278,5,3,0,0,
  	278,280,3,36,18,0,279,277,1,0,0,0,280,283,1,0,0,0,281,279,1,0,0,0,281,
  	282,1,0,0,0,282,285,1,0,0,0,283,281,1,0,0,0,284,276,1,0,0,0,284,285,1,
  	0,0,0,285,286,1,0,0,0,286,287,5,6,0,0,287,293,1,0,0,0,288,289,7,1,0,0,
  	289,293,3,36,18,16,290,293,3,34,17,0,291,293,3,22,11,0,292,259,1,0,0,
  	0,292,261,1,0,0,0,292,265,1,0,0,0,292,266,1,0,0,0,292,270,1,0,0,0,292,
  	274,1,0,0,0,292,288,1,0,0,0,292,290,1,0,0,0,292,291,1,0,0,0,293,356,1,
  	0,0,0,294,295,10,15,0,0,295,296,5,21,0,0,296,355,3,36,18,15,297,298,10,
  	14,0,0,298,299,7,2,0,0,299,355,3,36,18,15,300,301,10,13,0,0,301,302,7,
  	3,0,0,302,355,3,36,18,14,303,304,10,12,0,0,304,305,7,4,0,0,305,355,3,
  	36,18,13,306,307,10,11,0,0,307,308,7,5,0,0,308,355,3,36,18,12,309,310,
  	10,10,0,0,310,311,7,6,0,0,311,355,3,36,18,11,312,313,10,9,0,0,313,314,
  	5,67,0,0,314,355,3,36,18,10,315,316,10,8,0,0,316,317,5,68,0,0,317,355,
  	3,36,18,9,318,319,10,7,0,0,319,320,5,69,0,0,320,355,3,36,18,8,321,322,
  	10,6,0,0,322,323,5,65,0,0,323,355,3,36,18,7,324,325,10,5,0,0,325,326,
  	5,66,0,0,326,355,3,36,18,6,327,328,10,1,0,0,328,329,7,7,0,0,329,355,3,
  	36,18,1,330,331,10,20,0,0,331,340,5,5,0,0,332,337,3,36,18,0,333,334,5,
  	3,0,0,334,336,3,36,18,0,335,333,1,0,0,0,336,339,1,0,0,0,337,335,1,0,0,
  	0,337,338,1,0,0,0,338,341,1,0,0,0,339,337,1,0,0,0,340,332,1,0,0,0,340,
  	341,1,0,0,0,341,342,1,0,0,0,342,355,5,6,0,0,343,344,10,18,0,0,344,345,
  	5,17,0,0,345,346,3,36,18,0,346,347,5,18,0,0,347,355,1,0,0,0,348,349,10,
  	17,0,0,349,350,5,2,0,0,350,355,3,48,24,0,351,352,10,4,0,0,352,353,5,79,
  	0,0,353,355,3,42,21,0,354,294,1,0,0,0,354,297,1,0,0,0,354,300,1,0,0,0,
  	354,303,1,0,0,0,354,306,1,0,0,0,354,309,1,0,0,0,354,312,1,0,0,0,354,315,
  	1,0,0,0,354,318,1,0,0,0,354,321,1,0,0,0,354,324,1,0,0,0,354,327,1,0,0,
  	0,354,330,1,0,0,0,354,343,1,0,0,0,354,348,1,0,0,0,354,351,1,0,0,0,355,
  	358,1,0,0,0,356,354,1,0,0,0,356,357,1,0,0,0,357,37,1,0,0,0,358,356,1,
  	0,0,0,359,365,7,8,0,0,360,361,5,56,0,0,361,362,5,17,0,0,362,363,5,125,
  	0,0,363,365,5,18,0,0,364,359,1,0,0,0,364,360,1,0,0,0,365,39,1,0,0,0,366,
  	367,7,9,0,0,367,41,1,0,0,0,368,370,3,40,20,0,369,368,1,0,0,0,369,370,
  	1,0,0,0,370,371,1,0,0,0,371,377,7,10,0,0,372,373,5,17,0,0,373,374,5,125,
  	0,0,374,376,5,18,0,0,375,372,1,0,0,0,376,379,1,0,0,0,377,375,1,0,0,0,
  	377,378,1,0,0,0,378,43,1,0,0,0,379,377,1,0,0,0,380,381,3,38,19,0,381,
  	384,5,124,0,0,382,383,5,32,0,0,383,385,3,36,18,0,384,382,1,0,0,0,384,
  	385,1,0,0,0,385,402,1,0,0,0,386,387,3,38,19,0,387,388,5,124,0,0,388,389,
  	5,42,0,0,389,392,3,42,21,0,390,391,5,32,0,0,391,393,3,36,18,0,392,390,
  	1,0,0,0,392,393,1,0,0,0,393,402,1,0,0,0,394,395,5,124,0,0,395,396,5,42,
  	0,0,396,399,3,42,21,0,397,398,5,32,0,0,398,400,3,36,18,0,399,397,1,0,
  	0,0,399,400,1,0,0,0,400,402,1,0,0,0,401,380,1,0,0,0,401,386,1,0,0,0,401,
  	394,1,0,0,0,402,45,1,0,0,0,403,404,5,43,0,0,404,47,1,0,0,0,405,406,7,
  	11,0,0,406,49,1,0,0,0,47,52,56,58,60,68,72,80,89,93,101,106,108,118,121,
  	124,129,134,143,149,153,159,161,176,183,192,208,212,219,224,231,237,244,
  	250,281,284,292,337,340,354,356,364,369,377,384,392,399,401
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
    setState(60);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -510173393614814) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 4611686018427322369) != 0)) {
      setState(58);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::FUNC: {
          setState(50);
          function_definition();
          setState(52);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == iris_grammarParser::T__42) {
            setState(51);
            eos();
          }
          break;
        }

        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__10:
        case iris_grammarParser::T__14:
        case iris_grammarParser::T__15:
        case iris_grammarParser::T__18:
        case iris_grammarParser::T__19:
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
        case iris_grammarParser::BOOLEAN:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT: {
          setState(54);
          statement();
          setState(56);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == iris_grammarParser::T__42) {
            setState(55);
            eos();
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(63);
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
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(65);
      import_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(67);
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
    setState(70);
    match(iris_grammarParser::T__0);
    setState(72);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(71);
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
    setState(108);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::FROM: {
        enterOuterAlt(_localctx, 1);
        setState(74);
        match(iris_grammarParser::FROM);

        setState(75);
        file_path_part();
        setState(80);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == iris_grammarParser::T__1) {
          setState(76);
          match(iris_grammarParser::T__1);
          setState(77);
          file_path_part();
          setState(82);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(83);
        match(iris_grammarParser::IMPORT);
        setState(93);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case iris_grammarParser::LABEL: {
            setState(84);
            import_label();
            setState(89);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == iris_grammarParser::T__2) {
              setState(85);
              match(iris_grammarParser::T__2);
              setState(86);
              import_label();
              setState(91);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case iris_grammarParser::T__3: {
            setState(92);
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
        setState(95);
        match(iris_grammarParser::IMPORT);

        setState(96);
        file_path_part();
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == iris_grammarParser::T__1) {
          setState(97);
          match(iris_grammarParser::T__1);
          setState(98);
          file_path_part();
          setState(103);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(106);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == iris_grammarParser::AS) {
          setState(104);
          match(iris_grammarParser::AS);

          setState(105);
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
    setState(110);
    match(iris_grammarParser::FUNC);
    setState(111);
    match(iris_grammarParser::LABEL);
    setState(112);
    match(iris_grammarParser::T__4);
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 141863388262170624) != 0) || _la == iris_grammarParser::LABEL) {
      setState(113);
      declaration();
      setState(118);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(114);
          match(iris_grammarParser::T__2);
          setState(115);
          declaration(); 
        }
        setState(120);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      }
    }
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__2) {
      setState(123);
      match(iris_grammarParser::T__2);
    }
    setState(126);
    match(iris_grammarParser::T__5);
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__6) {
      setState(127);
      match(iris_grammarParser::T__6);
      setState(128);
      type();
    }
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::NEWLINE) {
      setState(131);
      match(iris_grammarParser::NEWLINE);
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
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
    setState(139);
    match(iris_grammarParser::IF);
    setState(140);
    expr(0);
    setState(143);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__11: {
        setState(141);
        block();
        break;
      }

      case iris_grammarParser::T__0:
      case iris_grammarParser::T__4:
      case iris_grammarParser::T__10:
      case iris_grammarParser::T__14:
      case iris_grammarParser::T__15:
      case iris_grammarParser::T__18:
      case iris_grammarParser::T__19:
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
      case iris_grammarParser::BOOLEAN:
      case iris_grammarParser::FLOAT:
      case iris_grammarParser::LABEL:
      case iris_grammarParser::INT: {
        setState(142);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::ELIF) {
      setState(145);
      match(iris_grammarParser::ELIF);
      setState(146);
      expr(0);
      setState(149);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__11: {
          setState(147);
          block();
          break;
        }

        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__10:
        case iris_grammarParser::T__14:
        case iris_grammarParser::T__15:
        case iris_grammarParser::T__18:
        case iris_grammarParser::T__19:
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
        case iris_grammarParser::BOOLEAN:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT: {
          setState(148);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(155);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::ELSE) {
      setState(156);
      match(iris_grammarParser::ELSE);
      setState(159);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__11: {
          setState(157);
          block();
          break;
        }

        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__10:
        case iris_grammarParser::T__14:
        case iris_grammarParser::T__15:
        case iris_grammarParser::T__18:
        case iris_grammarParser::T__19:
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
        case iris_grammarParser::BOOLEAN:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT: {
          setState(158);
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

//----------------- For_blockContext ------------------------------------------------------------------

iris_grammarParser::For_blockContext::For_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::Unpacking_listContext* iris_grammarParser::For_blockContext::unpacking_list() {
  return getRuleContext<iris_grammarParser::Unpacking_listContext>(0);
}

tree::TerminalNode* iris_grammarParser::For_blockContext::IN() {
  return getToken(iris_grammarParser::IN, 0);
}

std::vector<iris_grammarParser::ExprContext *> iris_grammarParser::For_blockContext::expr() {
  return getRuleContexts<iris_grammarParser::ExprContext>();
}

iris_grammarParser::ExprContext* iris_grammarParser::For_blockContext::expr(size_t i) {
  return getRuleContext<iris_grammarParser::ExprContext>(i);
}

iris_grammarParser::BlockContext* iris_grammarParser::For_blockContext::block() {
  return getRuleContext<iris_grammarParser::BlockContext>(0);
}

iris_grammarParser::DeclarationContext* iris_grammarParser::For_blockContext::declaration() {
  return getRuleContext<iris_grammarParser::DeclarationContext>(0);
}


size_t iris_grammarParser::For_blockContext::getRuleIndex() const {
  return iris_grammarParser::RuleFor_block;
}


std::any iris_grammarParser::For_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitFor_block(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::For_blockContext* iris_grammarParser::for_block() {
  For_blockContext *_localctx = _tracker.createInstance<For_blockContext>(_ctx, getState());
  enterRule(_localctx, 12, iris_grammarParser::RuleFor_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(163);
      match(iris_grammarParser::T__7);
      setState(164);
      unpacking_list();
      setState(165);
      match(iris_grammarParser::IN);
      setState(166);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(168);
      match(iris_grammarParser::T__7);
      setState(169);
      antlrcpp::downCast<For_blockContext *>(_localctx)->iterator = declaration();
      setState(170);
      match(iris_grammarParser::T__2);
      setState(171);
      expr(0);
      setState(172);
      match(iris_grammarParser::T__2);
      setState(173);
      expr(0);
      setState(174);
      block();
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

//----------------- Unpacking_listContext ------------------------------------------------------------------

iris_grammarParser::Unpacking_listContext::Unpacking_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::Unpacking_itemContext *> iris_grammarParser::Unpacking_listContext::unpacking_item() {
  return getRuleContexts<iris_grammarParser::Unpacking_itemContext>();
}

iris_grammarParser::Unpacking_itemContext* iris_grammarParser::Unpacking_listContext::unpacking_item(size_t i) {
  return getRuleContext<iris_grammarParser::Unpacking_itemContext>(i);
}


size_t iris_grammarParser::Unpacking_listContext::getRuleIndex() const {
  return iris_grammarParser::RuleUnpacking_list;
}


std::any iris_grammarParser::Unpacking_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitUnpacking_list(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Unpacking_listContext* iris_grammarParser::unpacking_list() {
  Unpacking_listContext *_localctx = _tracker.createInstance<Unpacking_listContext>(_ctx, getState());
  enterRule(_localctx, 14, iris_grammarParser::RuleUnpacking_list);
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
    setState(178);
    unpacking_item();
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__2) {
      setState(179);
      match(iris_grammarParser::T__2);
      setState(180);
      unpacking_item();
      setState(185);
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

//----------------- Unpacking_itemContext ------------------------------------------------------------------

iris_grammarParser::Unpacking_itemContext::Unpacking_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Unpacking_itemContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}

iris_grammarParser::DeclarationContext* iris_grammarParser::Unpacking_itemContext::declaration() {
  return getRuleContext<iris_grammarParser::DeclarationContext>(0);
}

iris_grammarParser::Unpacking_listContext* iris_grammarParser::Unpacking_itemContext::unpacking_list() {
  return getRuleContext<iris_grammarParser::Unpacking_listContext>(0);
}


size_t iris_grammarParser::Unpacking_itemContext::getRuleIndex() const {
  return iris_grammarParser::RuleUnpacking_item;
}


std::any iris_grammarParser::Unpacking_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitUnpacking_item(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Unpacking_itemContext* iris_grammarParser::unpacking_item() {
  Unpacking_itemContext *_localctx = _tracker.createInstance<Unpacking_itemContext>(_ctx, getState());
  enterRule(_localctx, 16, iris_grammarParser::RuleUnpacking_item);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(192);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(186);
      match(iris_grammarParser::LABEL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(187);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(188);
      match(iris_grammarParser::T__4);
      setState(189);
      unpacking_list();
      setState(190);
      match(iris_grammarParser::T__5);
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

//----------------- While_blockContext ------------------------------------------------------------------

iris_grammarParser::While_blockContext::While_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::ExprContext* iris_grammarParser::While_blockContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}

iris_grammarParser::BlockContext* iris_grammarParser::While_blockContext::block() {
  return getRuleContext<iris_grammarParser::BlockContext>(0);
}


size_t iris_grammarParser::While_blockContext::getRuleIndex() const {
  return iris_grammarParser::RuleWhile_block;
}


std::any iris_grammarParser::While_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitWhile_block(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::While_blockContext* iris_grammarParser::while_block() {
  While_blockContext *_localctx = _tracker.createInstance<While_blockContext>(_ctx, getState());
  enterRule(_localctx, 18, iris_grammarParser::RuleWhile_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(iris_grammarParser::T__8);
    setState(195);
    expr(0);
    setState(196);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_while_blockContext ------------------------------------------------------------------

iris_grammarParser::Do_while_blockContext::Do_while_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::BlockContext* iris_grammarParser::Do_while_blockContext::block() {
  return getRuleContext<iris_grammarParser::BlockContext>(0);
}

iris_grammarParser::ExprContext* iris_grammarParser::Do_while_blockContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}


size_t iris_grammarParser::Do_while_blockContext::getRuleIndex() const {
  return iris_grammarParser::RuleDo_while_block;
}


std::any iris_grammarParser::Do_while_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitDo_while_block(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Do_while_blockContext* iris_grammarParser::do_while_block() {
  Do_while_blockContext *_localctx = _tracker.createInstance<Do_while_blockContext>(_ctx, getState());
  enterRule(_localctx, 20, iris_grammarParser::RuleDo_while_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(iris_grammarParser::T__9);
    setState(199);
    block();
    setState(200);
    match(iris_grammarParser::T__8);
    setState(201);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Match_blockContext ------------------------------------------------------------------

iris_grammarParser::Match_blockContext::Match_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::ExprContext* iris_grammarParser::Match_blockContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}

std::vector<iris_grammarParser::Case_blockContext *> iris_grammarParser::Match_blockContext::case_block() {
  return getRuleContexts<iris_grammarParser::Case_blockContext>();
}

iris_grammarParser::Case_blockContext* iris_grammarParser::Match_blockContext::case_block(size_t i) {
  return getRuleContext<iris_grammarParser::Case_blockContext>(i);
}

std::vector<tree::TerminalNode *> iris_grammarParser::Match_blockContext::NEWLINE() {
  return getTokens(iris_grammarParser::NEWLINE);
}

tree::TerminalNode* iris_grammarParser::Match_blockContext::NEWLINE(size_t i) {
  return getToken(iris_grammarParser::NEWLINE, i);
}


size_t iris_grammarParser::Match_blockContext::getRuleIndex() const {
  return iris_grammarParser::RuleMatch_block;
}


std::any iris_grammarParser::Match_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitMatch_block(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Match_blockContext* iris_grammarParser::match_block() {
  Match_blockContext *_localctx = _tracker.createInstance<Match_blockContext>(_ctx, getState());
  enterRule(_localctx, 22, iris_grammarParser::RuleMatch_block);
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
    setState(203);
    match(iris_grammarParser::T__10);
    setState(204);
    expr(0);
    setState(205);
    match(iris_grammarParser::T__11);
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -144080003702077406) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 4611686018427322369) != 0)) {
      setState(206);
      case_block();
      setState(208);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(207);
        match(iris_grammarParser::NEWLINE);
      }
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(215);
    match(iris_grammarParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_blockContext ------------------------------------------------------------------

iris_grammarParser::Case_blockContext::Case_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::BlockContext* iris_grammarParser::Case_blockContext::block() {
  return getRuleContext<iris_grammarParser::BlockContext>(0);
}

iris_grammarParser::ExprContext* iris_grammarParser::Case_blockContext::expr() {
  return getRuleContext<iris_grammarParser::ExprContext>(0);
}


size_t iris_grammarParser::Case_blockContext::getRuleIndex() const {
  return iris_grammarParser::RuleCase_block;
}


std::any iris_grammarParser::Case_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitCase_block(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Case_blockContext* iris_grammarParser::case_block() {
  Case_blockContext *_localctx = _tracker.createInstance<Case_blockContext>(_ctx, getState());
  enterRule(_localctx, 24, iris_grammarParser::RuleCase_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(224);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(219);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__10:
        case iris_grammarParser::T__14:
        case iris_grammarParser::T__15:
        case iris_grammarParser::T__18:
        case iris_grammarParser::T__19:
        case iris_grammarParser::IF:
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
        case iris_grammarParser::BOOLEAN:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT: {
          setState(217);
          expr(0);
          break;
        }

        case iris_grammarParser::T__13: {
          setState(218);
          match(iris_grammarParser::T__13);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(221);
      match(iris_grammarParser::T__6);
      setState(222);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(223);
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
  enterRule(_localctx, 26, iris_grammarParser::RuleFile_path_part);
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
    setState(226);
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
  enterRule(_localctx, 28, iris_grammarParser::RuleImport_label);
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
    setState(228);
    antlrcpp::downCast<Import_labelContext *>(_localctx)->import_name = match(iris_grammarParser::LABEL);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::AS) {
      setState(229);
      match(iris_grammarParser::AS);
      setState(230);
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

std::vector<iris_grammarParser::Block_itemContext *> iris_grammarParser::BlockContext::block_item() {
  return getRuleContexts<iris_grammarParser::Block_itemContext>();
}

iris_grammarParser::Block_itemContext* iris_grammarParser::BlockContext::block_item(size_t i) {
  return getRuleContext<iris_grammarParser::Block_itemContext>(i);
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
  enterRule(_localctx, 30, iris_grammarParser::RuleBlock);
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
    setState(233);
    match(iris_grammarParser::T__11);
    setState(237);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -527765579657438) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 4611686018427322369) != 0)) {
      setState(234);
      block_item();
      setState(239);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(240);
    match(iris_grammarParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Block_itemContext ------------------------------------------------------------------

iris_grammarParser::Block_itemContext::Block_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t iris_grammarParser::Block_itemContext::getRuleIndex() const {
  return iris_grammarParser::RuleBlock_item;
}

void iris_grammarParser::Block_itemContext::copyFrom(Block_itemContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlockWhileBlockContext ------------------------------------------------------------------

iris_grammarParser::While_blockContext* iris_grammarParser::BlockWhileBlockContext::while_block() {
  return getRuleContext<iris_grammarParser::While_blockContext>(0);
}

iris_grammarParser::BlockWhileBlockContext::BlockWhileBlockContext(Block_itemContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::BlockWhileBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBlockWhileBlock(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockDoWhileBlockContext ------------------------------------------------------------------

iris_grammarParser::Do_while_blockContext* iris_grammarParser::BlockDoWhileBlockContext::do_while_block() {
  return getRuleContext<iris_grammarParser::Do_while_blockContext>(0);
}

iris_grammarParser::BlockDoWhileBlockContext::BlockDoWhileBlockContext(Block_itemContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::BlockDoWhileBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBlockDoWhileBlock(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockForBlockContext ------------------------------------------------------------------

iris_grammarParser::For_blockContext* iris_grammarParser::BlockForBlockContext::for_block() {
  return getRuleContext<iris_grammarParser::For_blockContext>(0);
}

iris_grammarParser::BlockForBlockContext::BlockForBlockContext(Block_itemContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::BlockForBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBlockForBlock(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockConditionalBlockContext ------------------------------------------------------------------

iris_grammarParser::Conditional_blockContext* iris_grammarParser::BlockConditionalBlockContext::conditional_block() {
  return getRuleContext<iris_grammarParser::Conditional_blockContext>(0);
}

iris_grammarParser::BlockConditionalBlockContext::BlockConditionalBlockContext(Block_itemContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::BlockConditionalBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBlockConditionalBlock(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStatementContext ------------------------------------------------------------------

iris_grammarParser::StatementContext* iris_grammarParser::BlockStatementContext::statement() {
  return getRuleContext<iris_grammarParser::StatementContext>(0);
}

tree::TerminalNode* iris_grammarParser::BlockStatementContext::NEWLINE() {
  return getToken(iris_grammarParser::NEWLINE, 0);
}

iris_grammarParser::BlockStatementContext::BlockStatementContext(Block_itemContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}
iris_grammarParser::Block_itemContext* iris_grammarParser::block_item() {
  Block_itemContext *_localctx = _tracker.createInstance<Block_itemContext>(_ctx, getState());
  enterRule(_localctx, 32, iris_grammarParser::RuleBlock_item);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(250);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(242);
      statement();
      setState(244);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(243);
        match(iris_grammarParser::NEWLINE);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockWhileBlockContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(246);
      while_block();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockDoWhileBlockContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(247);
      do_while_block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockForBlockContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(248);
      for_block();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockConditionalBlockContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(249);
      conditional_block();
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
  enterRule(_localctx, 34, iris_grammarParser::RuleConditional);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(iris_grammarParser::IF);
    setState(253);
    expr(0);
    setState(254);
    match(iris_grammarParser::THEN);
    setState(255);
    expr(0);
    setState(256);
    match(iris_grammarParser::ELSE);
    setState(257);
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

iris_grammarParser::PrimitiveContext* iris_grammarParser::GetterContext::primitive() {
  return getRuleContext<iris_grammarParser::PrimitiveContext>(0);
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
//----------------- MatchContext ------------------------------------------------------------------

iris_grammarParser::Match_blockContext* iris_grammarParser::MatchContext::match_block() {
  return getRuleContext<iris_grammarParser::Match_blockContext>(0);
}

iris_grammarParser::MatchContext::MatchContext(ExprContext *ctx) { copyFrom(ctx); }


std::any iris_grammarParser::MatchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitMatch(this);
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
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, iris_grammarParser::RuleExpr, precedence);

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
    setState(292);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__0: {
        _localctx = _tracker.createInstance<ReturnContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(260);
        return_statement();
        break;
      }

      case iris_grammarParser::T__4: {
        _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(261);
        match(iris_grammarParser::T__4);
        setState(262);
        expr(0);
        setState(263);
        match(iris_grammarParser::T__5);
        break;
      }

      case iris_grammarParser::BOOLEAN:
      case iris_grammarParser::FLOAT:
      case iris_grammarParser::LABEL:
      case iris_grammarParser::INT: {
        _localctx = _tracker.createInstance<PrimitiveExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(265);
        primitive();
        break;
      }

      case iris_grammarParser::T__14: {
        _localctx = _tracker.createInstance<MagnitudeContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(266);
        match(iris_grammarParser::T__14);
        setState(267);
        expr(0);
        setState(268);
        match(iris_grammarParser::T__14);
        break;
      }

      case iris_grammarParser::T__15: {
        _localctx = _tracker.createInstance<AbsoluteValueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(270);
        match(iris_grammarParser::T__15);
        setState(271);
        expr(0);
        setState(272);
        match(iris_grammarParser::T__15);
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
        setState(274);
        type();
        setState(275);
        match(iris_grammarParser::T__4);
        setState(284);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -144080003702093790) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & 4611686018427322369) != 0)) {
          setState(276);
          expr(0);
          setState(281);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == iris_grammarParser::T__2) {
            setState(277);
            match(iris_grammarParser::T__2);
            setState(278);
            expr(0);
            setState(283);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(286);
        match(iris_grammarParser::T__5);
        break;
      }

      case iris_grammarParser::T__18:
      case iris_grammarParser::T__19:
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
        setState(288);
        antlrcpp::downCast<UnaryOperatorContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(((((_la - 19) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 19)) & 70093866270723) != 0))) {
          antlrcpp::downCast<UnaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(289);
        expr(16);
        break;
      }

      case iris_grammarParser::IF: {
        _localctx = _tracker.createInstance<TernaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(290);
        conditional();
        break;
      }

      case iris_grammarParser::T__10: {
        _localctx = _tracker.createInstance<MatchContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(291);
        match_block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(356);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(354);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(294);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(295);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::T__20);
          setState(296);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(297);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(298);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 62914576) != 0))) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(299);
          expr(15);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(300);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(301);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__18

          || _la == iris_grammarParser::T__19)) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(302);
          expr(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(303);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(304);
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
          setState(305);
          expr(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(306);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(307);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 1006632960) != 0))) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(308);
          expr(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(309);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(310);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__29

          || _la == iris_grammarParser::T__30)) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(311);
          expr(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(312);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(313);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::BITS_AND);
          setState(314);
          expr(10);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(315);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(316);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::BITS_XOR);
          setState(317);
          expr(9);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(318);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(319);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::BITS_OR);
          setState(320);
          expr(8);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(321);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(322);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::AND);
          setState(323);
          expr(7);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(324);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(325);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::OR);
          setState(326);
          expr(6);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(327);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(328);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 32) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 32)) & 139637976728575) != 0))) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(329);
          expr(1);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<CallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(330);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(331);
          match(iris_grammarParser::T__4);
          setState(340);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & -144080003702093790) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & 4611686018427322369) != 0)) {
            setState(332);
            expr(0);
            setState(337);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == iris_grammarParser::T__2) {
              setState(333);
              match(iris_grammarParser::T__2);
              setState(334);
              expr(0);
              setState(339);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(342);
          match(iris_grammarParser::T__5);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<IndexOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(343);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(344);
          match(iris_grammarParser::T__16);
          setState(345);
          expr(0);
          setState(346);
          match(iris_grammarParser::T__17);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<GetterContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(348);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(349);
          match(iris_grammarParser::T__1);
          setState(350);
          primitive();
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<CastContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(351);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(352);
          match(iris_grammarParser::AS);
          setState(353);
          type();
          break;
        }

        default:
          break;
        } 
      }
      setState(358);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
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
  enterRule(_localctx, 38, iris_grammarParser::RuleDescriptor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(364);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::DEF:
      case iris_grammarParser::IN:
      case iris_grammarParser::OUT:
      case iris_grammarParser::UNIFORM:
      case iris_grammarParser::MUT: {
        enterOuterAlt(_localctx, 1);
        setState(359);
        antlrcpp::downCast<DescriptorContext *>(_localctx)->descriptor_name = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 69805794224242688) != 0))) {
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
        setState(360);
        antlrcpp::downCast<DescriptorContext *>(_localctx)->descriptor_name = match(iris_grammarParser::VERTEX);
        setState(361);
        match(iris_grammarParser::T__16);
        setState(362);
        match(iris_grammarParser::INT);
        setState(363);
        match(iris_grammarParser::T__17);
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
  enterRule(_localctx, 40, iris_grammarParser::RulePrecision_qualifier);
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
    setState(366);
    _la = _input->LA(1);
    if (!(((((_la - 119) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 119)) & 7) != 0))) {
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
  enterRule(_localctx, 42, iris_grammarParser::RuleType);
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
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 119) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 119)) & 7) != 0)) {
      setState(368);
      precision_qualifier();
    }

    setState(371);
    antlrcpp::downCast<TypeContext *>(_localctx)->type_name = _input->LT(1);
    _la = _input->LA(1);
    if (!(((((_la - 80) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 80)) & 549755813887) != 0))) {
      antlrcpp::downCast<TypeContext *>(_localctx)->type_name = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(377);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(372);
        match(iris_grammarParser::T__16);
        setState(373);
        match(iris_grammarParser::INT);
        setState(374);
        match(iris_grammarParser::T__17); 
      }
      setState(379);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
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
  enterRule(_localctx, 44, iris_grammarParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(401);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(380);
      descriptor();
      setState(381);
      match(iris_grammarParser::LABEL);
      setState(384);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__31) {
        setState(382);
        match(iris_grammarParser::T__31);
        setState(383);
        expr(0);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(386);
      descriptor();
      setState(387);
      match(iris_grammarParser::LABEL);
      setState(388);
      match(iris_grammarParser::T__41);
      setState(389);
      type();
      setState(392);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__31) {
        setState(390);
        match(iris_grammarParser::T__31);
        setState(391);
        expr(0);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(394);
      match(iris_grammarParser::LABEL);
      setState(395);
      match(iris_grammarParser::T__41);
      setState(396);
      type();
      setState(399);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__31) {
        setState(397);
        match(iris_grammarParser::T__31);
        setState(398);
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
  enterRule(_localctx, 46, iris_grammarParser::RuleEos);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(iris_grammarParser::T__42);
   
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

tree::TerminalNode* iris_grammarParser::PrimitiveContext::BOOLEAN() {
  return getToken(iris_grammarParser::BOOLEAN, 0);
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
  enterRule(_localctx, 48, iris_grammarParser::RulePrimitive);
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
    setState(405);
    _la = _input->LA(1);
    if (!(((((_la - 122) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 122)) & 15) != 0))) {
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
    case 18: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool iris_grammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 15);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 6);
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 1);
    case 12: return precpred(_ctx, 20);
    case 13: return precpred(_ctx, 18);
    case 14: return precpred(_ctx, 17);
    case 15: return precpred(_ctx, 4);

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
