
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
      "class_method_definition", "class_operator_definition", "self_declaration", 
      "self_descriptor", "class_operator_label", "class_definition", "base_class_name", 
      "class_block_item", "class_compiler_directive", "conditional_block", 
      "for_block", "unpacking_list", "unpacking_item", "while_block", "do_while_block", 
      "match_block", "case_block", "file_path_part", "import_label", "block", 
      "block_item", "conditional", "expr", "descriptor", "precision_qualifier", 
      "type", "type_name", "declaration", "eos", "base_type", "primitive"
    },
    std::vector<std::string>{
      "", "'return'", "'.'", "','", "'*'", "'('", "')'", "'->'", "'inline'", 
      "'op'", "'self'", "'right'", "'left'", "'constructor'", "'destructor'", 
      "'[]'", "'+'", "'-'", "'/'", "'%'", "'^'", "'@'", "'><'", "'>'", "'<'", 
      "'=='", "'<='", "'>='", "'()'", "'define'", "'with'", "'{'", "'}'", 
      "'comp_name'", "'comp_precision'", "'for'", "'while'", "'do'", "'match'", 
      "'other'", "'||'", "'|'", "'['", "']'", "'!='", "'='", "'+='", "'-='", 
      "'*='", "'/='", "'%='", "'^='", "''='", "'><='", "'<->='", "':'", 
      "';'", "'class'", "'int'", "'uint'", "'float'", "'vector2'", "'vector3'", 
      "'vector4'", "'matrix2x2'", "'matrix3x3'", "'matrix4x4'", "'matrix2x3'", 
      "'matrix2x4'", "'matrix3x2'", "'matrix3x4'", "'matrix4x2'", "'matrix4x3'", 
      "'struct'", "'tuple'", "'func'", "'if'", "'elif'", "'else'", "'then'", 
      "'import'", "'from'", "'def'", "'in'", "'out'", "'uniform'", "'mut'", 
      "'vertex'", "'not'", "'bits_not'", "'norm:'", "'inv:'", "'trans:'", 
      "'det:'", "'deg:'", "'rad:'", "'and'", "'or'", "'bits_and'", "'bits_xor'", 
      "'bits_or'", "'bits_left'", "'bits_right'", "'and='", "'or='", "'bits_and='", 
      "'bits_xor='", "'bits_or='", "'bits_left='", "'bits_right='", "'as'", 
      "'none'", "'i8'", "'i16'", "'i32'", "'u8'", "'u16'", "'u32'", "'f8'", 
      "'f16'", "'f32'", "'f64'", "'bool'", "'vec2'", "'vec3'", "'vec4'", 
      "'v2'", "'v3'", "'v4'", "'m2'", "'m3'", "'m4'", "'m2x2'", "'m3x3'", 
      "'m4x4'", "'m2x3'", "'m3x2'", "'m3x4'", "'m4x3'", "'m2x4'", "'m4x2'", 
      "'mat2'", "'mat3'", "'mat4'", "'mat2x3'", "'mat2x4'", "'mat3x2'", 
      "'mat3x4'", "'mat4x2'", "'mat4x3'", "'lp'", "'mp'", "'hp'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "FUNC", "IF", "ELIF", "ELSE", "THEN", 
      "IMPORT", "FROM", "DEF", "IN", "OUT", "UNIFORM", "MUT", "VERTEX", 
      "NOT", "BITS_NOT", "NORM", "INV", "TRANS", "DET", "DEG", "RAD", "AND", 
      "OR", "BITS_AND", "BITS_XOR", "BITS_OR", "BITS_LEFT", "BITS_RIGHT", 
      "AND_EQ", "OR_EQ", "BITS_AND_EQ", "BITS_XOR_EQ", "BITS_OR_EQ", "BITS_LEFT_EQ", 
      "BITS_RIGHT_EQ", "AS", "NONE", "I8", "I16", "I32", "U8", "U16", "U32", 
      "F8", "F16", "F32", "F64", "BOOL", "VEC2", "VEC3", "VEC4", "V2", "V3", 
      "V4", "M2", "M3", "M4", "M2X2", "M3X3", "M4X4", "M2X3", "M3X2", "M3X4", 
      "M4X3", "M2X4", "M4X2", "MAT2", "MAT3", "MAT4", "MAT2X3", "MAT2X4", 
      "MAT3X2", "MAT3X4", "MAT4X2", "MAT4X3", "LP", "MP", "HP", "TARGET_LANGUAGE", 
      "BOOLEAN", "FLOAT", "LABEL", "INT", "STRING_LITERAL", "WS", "NEWLINE", 
      "LINE_COMMENT", "BLOCK_COMMENT", "ERROR_TOKEN"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,163,561,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,1,0,1,0,1,0,1,0,3,0,77,8,0,5,0,79,8,0,10,0,12,0,82,9,0,1,0,1,0,1,1,
  	1,1,1,1,3,1,89,8,1,1,2,1,2,3,2,93,8,2,1,3,1,3,1,3,1,3,5,3,99,8,3,10,3,
  	12,3,102,9,3,1,3,1,3,1,3,1,3,5,3,108,8,3,10,3,12,3,111,9,3,1,3,3,3,114,
  	8,3,1,3,1,3,1,3,1,3,5,3,120,8,3,10,3,12,3,123,9,3,1,3,1,3,3,3,127,8,3,
  	3,3,129,8,3,1,4,1,4,1,4,1,4,1,4,1,4,5,4,137,8,4,10,4,12,4,140,9,4,3,4,
  	142,8,4,1,4,3,4,145,8,4,1,4,1,4,1,4,3,4,150,8,4,1,4,5,4,153,8,4,10,4,
  	12,4,156,9,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,166,8,5,10,5,12,5,169,
  	9,5,1,5,3,5,172,8,5,1,5,1,5,1,5,3,5,177,8,5,1,5,5,5,180,8,5,10,5,12,5,
  	183,9,5,1,5,1,5,1,6,1,6,3,6,189,8,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,197,8,
  	6,10,6,12,6,200,9,6,1,6,3,6,203,8,6,1,6,1,6,1,6,3,6,208,8,6,1,6,5,6,211,
  	8,6,10,6,12,6,214,9,6,1,6,1,6,1,7,5,7,219,8,7,10,7,12,7,222,9,7,1,7,1,
  	7,1,8,1,8,1,8,3,8,229,8,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,5,10,241,8,10,10,10,12,10,244,9,10,3,10,246,8,10,1,10,1,10,5,10,
  	250,8,10,10,10,12,10,253,9,10,1,10,3,10,256,8,10,1,11,1,11,3,11,260,8,
  	11,1,12,1,12,3,12,264,8,12,1,12,1,12,3,12,268,8,12,1,12,1,12,3,12,272,
  	8,12,1,12,1,12,3,12,276,8,12,3,12,278,8,12,1,13,1,13,1,13,1,13,1,13,3,
  	13,285,8,13,1,14,1,14,1,14,1,14,3,14,291,8,14,1,14,1,14,1,14,1,14,3,14,
  	297,8,14,5,14,299,8,14,10,14,12,14,302,9,14,1,14,1,14,1,14,3,14,307,8,
  	14,3,14,309,8,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,3,15,324,8,15,1,16,1,16,1,16,5,16,329,8,16,10,16,12,16,332,
  	9,16,1,17,1,17,1,17,1,17,1,17,1,17,3,17,340,8,17,1,18,1,18,1,18,1,18,
  	1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,3,20,356,8,20,5,20,
  	358,8,20,10,20,12,20,361,9,20,1,20,1,20,1,21,1,21,3,21,367,8,21,1,21,
  	1,21,1,21,3,21,372,8,21,1,22,1,22,1,23,1,23,1,23,3,23,379,8,23,1,24,1,
  	24,5,24,383,8,24,10,24,12,24,386,9,24,1,24,1,24,1,25,1,25,3,25,392,8,
  	25,1,25,1,25,1,25,1,25,3,25,398,8,25,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,5,27,427,8,27,10,27,12,27,430,9,27,3,
  	27,432,8,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,440,8,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,5,27,483,8,27,10,27,
  	12,27,486,9,27,3,27,488,8,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,5,27,502,8,27,10,27,12,27,505,9,27,1,28,1,28,1,28,
  	1,28,1,28,3,28,512,8,28,1,29,1,29,1,30,3,30,517,8,30,1,30,1,30,1,30,1,
  	30,5,30,523,8,30,10,30,12,30,526,9,30,1,31,1,31,3,31,530,8,31,1,32,1,
  	32,1,32,1,32,3,32,536,8,32,1,32,1,32,1,32,1,32,1,32,1,32,3,32,544,8,32,
  	1,32,1,32,1,32,1,32,1,32,3,32,551,8,32,3,32,553,8,32,1,33,1,33,1,34,1,
  	34,1,35,1,35,1,35,0,1,54,36,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,0,13,2,0,
  	4,4,13,28,2,0,2,2,156,156,2,0,16,17,88,95,3,0,4,4,18,19,21,22,1,0,16,
  	17,1,0,101,102,2,0,23,24,26,27,2,0,25,25,44,44,2,0,45,54,103,109,1,0,
  	82,86,1,0,150,152,3,0,57,74,111,111,122,122,1,0,154,158,624,0,80,1,0,
  	0,0,2,88,1,0,0,0,4,90,1,0,0,0,6,128,1,0,0,0,8,130,1,0,0,0,10,159,1,0,
  	0,0,12,186,1,0,0,0,14,220,1,0,0,0,16,228,1,0,0,0,18,230,1,0,0,0,20,232,
  	1,0,0,0,22,259,1,0,0,0,24,277,1,0,0,0,26,284,1,0,0,0,28,286,1,0,0,0,30,
  	323,1,0,0,0,32,325,1,0,0,0,34,339,1,0,0,0,36,341,1,0,0,0,38,345,1,0,0,
  	0,40,350,1,0,0,0,42,371,1,0,0,0,44,373,1,0,0,0,46,375,1,0,0,0,48,380,
  	1,0,0,0,50,397,1,0,0,0,52,399,1,0,0,0,54,439,1,0,0,0,56,511,1,0,0,0,58,
  	513,1,0,0,0,60,516,1,0,0,0,62,529,1,0,0,0,64,552,1,0,0,0,66,554,1,0,0,
  	0,68,556,1,0,0,0,70,558,1,0,0,0,72,79,3,8,4,0,73,79,3,20,10,0,74,76,3,
  	2,1,0,75,77,3,66,33,0,76,75,1,0,0,0,76,77,1,0,0,0,77,79,1,0,0,0,78,72,
  	1,0,0,0,78,73,1,0,0,0,78,74,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,81,
  	1,0,0,0,81,83,1,0,0,0,82,80,1,0,0,0,83,84,5,0,0,1,84,1,1,0,0,0,85,89,
  	3,6,3,0,86,89,3,64,32,0,87,89,3,54,27,0,88,85,1,0,0,0,88,86,1,0,0,0,88,
  	87,1,0,0,0,89,3,1,0,0,0,90,92,5,1,0,0,91,93,3,54,27,0,92,91,1,0,0,0,92,
  	93,1,0,0,0,93,5,1,0,0,0,94,95,5,81,0,0,95,100,3,44,22,0,96,97,5,2,0,0,
  	97,99,3,44,22,0,98,96,1,0,0,0,99,102,1,0,0,0,100,98,1,0,0,0,100,101,1,
  	0,0,0,101,103,1,0,0,0,102,100,1,0,0,0,103,113,5,80,0,0,104,109,3,46,23,
  	0,105,106,5,3,0,0,106,108,3,46,23,0,107,105,1,0,0,0,108,111,1,0,0,0,109,
  	107,1,0,0,0,109,110,1,0,0,0,110,114,1,0,0,0,111,109,1,0,0,0,112,114,5,
  	4,0,0,113,104,1,0,0,0,113,112,1,0,0,0,114,129,1,0,0,0,115,116,5,80,0,
  	0,116,121,3,44,22,0,117,118,5,2,0,0,118,120,3,44,22,0,119,117,1,0,0,0,
  	120,123,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,126,1,0,0,0,123,121,
  	1,0,0,0,124,125,5,110,0,0,125,127,5,156,0,0,126,124,1,0,0,0,126,127,1,
  	0,0,0,127,129,1,0,0,0,128,94,1,0,0,0,128,115,1,0,0,0,129,7,1,0,0,0,130,
  	131,5,75,0,0,131,132,5,156,0,0,132,141,5,5,0,0,133,138,3,64,32,0,134,
  	135,5,3,0,0,135,137,3,64,32,0,136,134,1,0,0,0,137,140,1,0,0,0,138,136,
  	1,0,0,0,138,139,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,141,133,1,0,0,
  	0,141,142,1,0,0,0,142,144,1,0,0,0,143,145,5,3,0,0,144,143,1,0,0,0,144,
  	145,1,0,0,0,145,146,1,0,0,0,146,149,5,6,0,0,147,148,5,7,0,0,148,150,3,
  	60,30,0,149,147,1,0,0,0,149,150,1,0,0,0,150,154,1,0,0,0,151,153,5,160,
  	0,0,152,151,1,0,0,0,153,156,1,0,0,0,154,152,1,0,0,0,154,155,1,0,0,0,155,
  	157,1,0,0,0,156,154,1,0,0,0,157,158,3,48,24,0,158,9,1,0,0,0,159,160,5,
  	75,0,0,160,161,5,156,0,0,161,162,5,5,0,0,162,167,3,14,7,0,163,164,5,3,
  	0,0,164,166,3,64,32,0,165,163,1,0,0,0,166,169,1,0,0,0,167,165,1,0,0,0,
  	167,168,1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,170,172,5,3,0,0,171,170,
  	1,0,0,0,171,172,1,0,0,0,172,173,1,0,0,0,173,176,5,6,0,0,174,175,5,7,0,
  	0,175,177,3,60,30,0,176,174,1,0,0,0,176,177,1,0,0,0,177,181,1,0,0,0,178,
  	180,5,160,0,0,179,178,1,0,0,0,180,183,1,0,0,0,181,179,1,0,0,0,181,182,
  	1,0,0,0,182,184,1,0,0,0,183,181,1,0,0,0,184,185,3,48,24,0,185,11,1,0,
  	0,0,186,188,5,75,0,0,187,189,5,8,0,0,188,187,1,0,0,0,188,189,1,0,0,0,
  	189,190,1,0,0,0,190,191,5,9,0,0,191,192,3,18,9,0,192,193,5,5,0,0,193,
  	198,3,14,7,0,194,195,5,3,0,0,195,197,3,64,32,0,196,194,1,0,0,0,197,200,
  	1,0,0,0,198,196,1,0,0,0,198,199,1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,
  	0,201,203,5,3,0,0,202,201,1,0,0,0,202,203,1,0,0,0,203,204,1,0,0,0,204,
  	207,5,6,0,0,205,206,5,7,0,0,206,208,3,60,30,0,207,205,1,0,0,0,207,208,
  	1,0,0,0,208,212,1,0,0,0,209,211,5,160,0,0,210,209,1,0,0,0,211,214,1,0,
  	0,0,212,210,1,0,0,0,212,213,1,0,0,0,213,215,1,0,0,0,214,212,1,0,0,0,215,
  	216,3,48,24,0,216,13,1,0,0,0,217,219,3,16,8,0,218,217,1,0,0,0,219,222,
  	1,0,0,0,220,218,1,0,0,0,220,221,1,0,0,0,221,223,1,0,0,0,222,220,1,0,0,
  	0,223,224,5,10,0,0,224,15,1,0,0,0,225,229,3,56,28,0,226,229,5,11,0,0,
  	227,229,5,12,0,0,228,225,1,0,0,0,228,226,1,0,0,0,228,227,1,0,0,0,229,
  	17,1,0,0,0,230,231,7,0,0,0,231,19,1,0,0,0,232,233,5,29,0,0,233,234,3,
  	22,11,0,234,235,5,110,0,0,235,245,5,156,0,0,236,237,5,30,0,0,237,242,
  	5,156,0,0,238,239,5,3,0,0,239,241,5,156,0,0,240,238,1,0,0,0,241,244,1,
  	0,0,0,242,240,1,0,0,0,242,243,1,0,0,0,243,246,1,0,0,0,244,242,1,0,0,0,
  	245,236,1,0,0,0,245,246,1,0,0,0,246,255,1,0,0,0,247,251,5,31,0,0,248,
  	250,3,24,12,0,249,248,1,0,0,0,250,253,1,0,0,0,251,249,1,0,0,0,251,252,
  	1,0,0,0,252,254,1,0,0,0,253,251,1,0,0,0,254,256,5,32,0,0,255,247,1,0,
  	0,0,255,256,1,0,0,0,256,21,1,0,0,0,257,260,3,68,34,0,258,260,5,156,0,
  	0,259,257,1,0,0,0,259,258,1,0,0,0,260,23,1,0,0,0,261,263,3,64,32,0,262,
  	264,5,160,0,0,263,262,1,0,0,0,263,264,1,0,0,0,264,278,1,0,0,0,265,267,
  	3,26,13,0,266,268,5,160,0,0,267,266,1,0,0,0,267,268,1,0,0,0,268,278,1,
  	0,0,0,269,271,3,10,5,0,270,272,5,160,0,0,271,270,1,0,0,0,271,272,1,0,
  	0,0,272,278,1,0,0,0,273,275,3,12,6,0,274,276,5,160,0,0,275,274,1,0,0,
  	0,275,276,1,0,0,0,276,278,1,0,0,0,277,261,1,0,0,0,277,265,1,0,0,0,277,
  	269,1,0,0,0,277,273,1,0,0,0,278,25,1,0,0,0,279,280,5,33,0,0,280,281,5,
  	153,0,0,281,285,5,158,0,0,282,283,5,34,0,0,283,285,3,58,29,0,284,279,
  	1,0,0,0,284,282,1,0,0,0,285,27,1,0,0,0,286,287,5,76,0,0,287,290,3,54,
  	27,0,288,291,3,48,24,0,289,291,3,2,1,0,290,288,1,0,0,0,290,289,1,0,0,
  	0,291,300,1,0,0,0,292,293,5,77,0,0,293,296,3,54,27,0,294,297,3,48,24,
  	0,295,297,3,2,1,0,296,294,1,0,0,0,296,295,1,0,0,0,297,299,1,0,0,0,298,
  	292,1,0,0,0,299,302,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,308,1,
  	0,0,0,302,300,1,0,0,0,303,306,5,78,0,0,304,307,3,48,24,0,305,307,3,2,
  	1,0,306,304,1,0,0,0,306,305,1,0,0,0,307,309,1,0,0,0,308,303,1,0,0,0,308,
  	309,1,0,0,0,309,29,1,0,0,0,310,311,5,35,0,0,311,312,3,32,16,0,312,313,
  	5,83,0,0,313,314,3,54,27,0,314,324,1,0,0,0,315,316,5,35,0,0,316,317,3,
  	64,32,0,317,318,5,3,0,0,318,319,3,54,27,0,319,320,5,3,0,0,320,321,3,54,
  	27,0,321,322,3,48,24,0,322,324,1,0,0,0,323,310,1,0,0,0,323,315,1,0,0,
  	0,324,31,1,0,0,0,325,330,3,34,17,0,326,327,5,3,0,0,327,329,3,34,17,0,
  	328,326,1,0,0,0,329,332,1,0,0,0,330,328,1,0,0,0,330,331,1,0,0,0,331,33,
  	1,0,0,0,332,330,1,0,0,0,333,340,5,156,0,0,334,340,3,64,32,0,335,336,5,
  	5,0,0,336,337,3,32,16,0,337,338,5,6,0,0,338,340,1,0,0,0,339,333,1,0,0,
  	0,339,334,1,0,0,0,339,335,1,0,0,0,340,35,1,0,0,0,341,342,5,36,0,0,342,
  	343,3,54,27,0,343,344,3,48,24,0,344,37,1,0,0,0,345,346,5,37,0,0,346,347,
  	3,48,24,0,347,348,5,36,0,0,348,349,3,54,27,0,349,39,1,0,0,0,350,351,5,
  	38,0,0,351,352,3,54,27,0,352,359,5,31,0,0,353,355,3,42,21,0,354,356,5,
  	160,0,0,355,354,1,0,0,0,355,356,1,0,0,0,356,358,1,0,0,0,357,353,1,0,0,
  	0,358,361,1,0,0,0,359,357,1,0,0,0,359,360,1,0,0,0,360,362,1,0,0,0,361,
  	359,1,0,0,0,362,363,5,32,0,0,363,41,1,0,0,0,364,367,3,54,27,0,365,367,
  	5,39,0,0,366,364,1,0,0,0,366,365,1,0,0,0,367,368,1,0,0,0,368,369,5,7,
  	0,0,369,372,3,48,24,0,370,372,3,54,27,0,371,366,1,0,0,0,371,370,1,0,0,
  	0,372,43,1,0,0,0,373,374,7,1,0,0,374,45,1,0,0,0,375,378,5,156,0,0,376,
  	377,5,110,0,0,377,379,5,156,0,0,378,376,1,0,0,0,378,379,1,0,0,0,379,47,
  	1,0,0,0,380,384,5,31,0,0,381,383,3,50,25,0,382,381,1,0,0,0,383,386,1,
  	0,0,0,384,382,1,0,0,0,384,385,1,0,0,0,385,387,1,0,0,0,386,384,1,0,0,0,
  	387,388,5,32,0,0,388,49,1,0,0,0,389,391,3,2,1,0,390,392,5,160,0,0,391,
  	390,1,0,0,0,391,392,1,0,0,0,392,398,1,0,0,0,393,398,3,36,18,0,394,398,
  	3,38,19,0,395,398,3,30,15,0,396,398,3,28,14,0,397,389,1,0,0,0,397,393,
  	1,0,0,0,397,394,1,0,0,0,397,395,1,0,0,0,397,396,1,0,0,0,398,51,1,0,0,
  	0,399,400,5,76,0,0,400,401,3,54,27,0,401,402,5,79,0,0,402,403,3,54,27,
  	0,403,404,5,78,0,0,404,405,3,54,27,0,405,53,1,0,0,0,406,407,6,27,-1,0,
  	407,440,3,4,2,0,408,409,5,5,0,0,409,410,3,54,27,0,410,411,5,6,0,0,411,
  	440,1,0,0,0,412,440,3,70,35,0,413,414,5,40,0,0,414,415,3,54,27,0,415,
  	416,5,40,0,0,416,440,1,0,0,0,417,418,5,41,0,0,418,419,3,54,27,0,419,420,
  	5,41,0,0,420,440,1,0,0,0,421,422,3,60,30,0,422,431,5,5,0,0,423,428,3,
  	54,27,0,424,425,5,3,0,0,425,427,3,54,27,0,426,424,1,0,0,0,427,430,1,0,
  	0,0,428,426,1,0,0,0,428,429,1,0,0,0,429,432,1,0,0,0,430,428,1,0,0,0,431,
  	423,1,0,0,0,431,432,1,0,0,0,432,433,1,0,0,0,433,434,5,6,0,0,434,440,1,
  	0,0,0,435,436,7,2,0,0,436,440,3,54,27,16,437,440,3,52,26,0,438,440,3,
  	40,20,0,439,406,1,0,0,0,439,408,1,0,0,0,439,412,1,0,0,0,439,413,1,0,0,
  	0,439,417,1,0,0,0,439,421,1,0,0,0,439,435,1,0,0,0,439,437,1,0,0,0,439,
  	438,1,0,0,0,440,503,1,0,0,0,441,442,10,15,0,0,442,443,5,20,0,0,443,502,
  	3,54,27,15,444,445,10,14,0,0,445,446,7,3,0,0,446,502,3,54,27,15,447,448,
  	10,13,0,0,448,449,7,4,0,0,449,502,3,54,27,14,450,451,10,12,0,0,451,452,
  	7,5,0,0,452,502,3,54,27,13,453,454,10,11,0,0,454,455,7,6,0,0,455,502,
  	3,54,27,12,456,457,10,10,0,0,457,458,7,7,0,0,458,502,3,54,27,11,459,460,
  	10,9,0,0,460,461,5,98,0,0,461,502,3,54,27,10,462,463,10,8,0,0,463,464,
  	5,99,0,0,464,502,3,54,27,9,465,466,10,7,0,0,466,467,5,100,0,0,467,502,
  	3,54,27,8,468,469,10,6,0,0,469,470,5,96,0,0,470,502,3,54,27,7,471,472,
  	10,5,0,0,472,473,5,97,0,0,473,502,3,54,27,6,474,475,10,1,0,0,475,476,
  	7,8,0,0,476,502,3,54,27,1,477,478,10,20,0,0,478,487,5,5,0,0,479,484,3,
  	54,27,0,480,481,5,3,0,0,481,483,3,54,27,0,482,480,1,0,0,0,483,486,1,0,
  	0,0,484,482,1,0,0,0,484,485,1,0,0,0,485,488,1,0,0,0,486,484,1,0,0,0,487,
  	479,1,0,0,0,487,488,1,0,0,0,488,489,1,0,0,0,489,502,5,6,0,0,490,491,10,
  	18,0,0,491,492,5,42,0,0,492,493,3,54,27,0,493,494,5,43,0,0,494,502,1,
  	0,0,0,495,496,10,17,0,0,496,497,5,2,0,0,497,502,3,70,35,0,498,499,10,
  	4,0,0,499,500,5,110,0,0,500,502,3,60,30,0,501,441,1,0,0,0,501,444,1,0,
  	0,0,501,447,1,0,0,0,501,450,1,0,0,0,501,453,1,0,0,0,501,456,1,0,0,0,501,
  	459,1,0,0,0,501,462,1,0,0,0,501,465,1,0,0,0,501,468,1,0,0,0,501,471,1,
  	0,0,0,501,474,1,0,0,0,501,477,1,0,0,0,501,490,1,0,0,0,501,495,1,0,0,0,
  	501,498,1,0,0,0,502,505,1,0,0,0,503,501,1,0,0,0,503,504,1,0,0,0,504,55,
  	1,0,0,0,505,503,1,0,0,0,506,512,7,9,0,0,507,508,5,87,0,0,508,509,5,42,
  	0,0,509,510,5,157,0,0,510,512,5,43,0,0,511,506,1,0,0,0,511,507,1,0,0,
  	0,512,57,1,0,0,0,513,514,7,10,0,0,514,59,1,0,0,0,515,517,3,58,29,0,516,
  	515,1,0,0,0,516,517,1,0,0,0,517,518,1,0,0,0,518,524,3,62,31,0,519,520,
  	5,42,0,0,520,521,5,157,0,0,521,523,5,43,0,0,522,519,1,0,0,0,523,526,1,
  	0,0,0,524,522,1,0,0,0,524,525,1,0,0,0,525,61,1,0,0,0,526,524,1,0,0,0,
  	527,530,5,156,0,0,528,530,3,68,34,0,529,527,1,0,0,0,529,528,1,0,0,0,530,
  	63,1,0,0,0,531,532,3,56,28,0,532,535,5,156,0,0,533,534,5,45,0,0,534,536,
  	3,54,27,0,535,533,1,0,0,0,535,536,1,0,0,0,536,553,1,0,0,0,537,538,3,56,
  	28,0,538,539,5,156,0,0,539,540,5,55,0,0,540,543,3,60,30,0,541,542,5,45,
  	0,0,542,544,3,54,27,0,543,541,1,0,0,0,543,544,1,0,0,0,544,553,1,0,0,0,
  	545,546,5,156,0,0,546,547,5,55,0,0,547,550,3,60,30,0,548,549,5,45,0,0,
  	549,551,3,54,27,0,550,548,1,0,0,0,550,551,1,0,0,0,551,553,1,0,0,0,552,
  	531,1,0,0,0,552,537,1,0,0,0,552,545,1,0,0,0,553,65,1,0,0,0,554,555,5,
  	56,0,0,555,67,1,0,0,0,556,557,7,11,0,0,557,69,1,0,0,0,558,559,7,12,0,
  	0,559,71,1,0,0,0,69,76,78,80,88,92,100,109,113,121,126,128,138,141,144,
  	149,154,167,171,176,181,188,198,202,207,212,220,228,242,245,251,255,259,
  	263,267,271,275,277,284,290,296,300,306,308,323,330,339,355,359,366,371,
  	378,384,391,397,428,431,439,484,487,501,503,511,516,524,529,535,543,550,
  	552
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

std::vector<iris_grammarParser::Class_definitionContext *> iris_grammarParser::RootContext::class_definition() {
  return getRuleContexts<iris_grammarParser::Class_definitionContext>();
}

iris_grammarParser::Class_definitionContext* iris_grammarParser::RootContext::class_definition(size_t i) {
  return getRuleContext<iris_grammarParser::Class_definitionContext>(i);
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
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -144111614125998046) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 288371117934977023) != 0) || ((((_la - 150) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 150)) & 503) != 0)) {
      setState(78);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::FUNC: {
          setState(72);
          function_definition();
          break;
        }

        case iris_grammarParser::T__28: {
          setState(73);
          class_definition();
          break;
        }

        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__15:
        case iris_grammarParser::T__16:
        case iris_grammarParser::T__37:
        case iris_grammarParser::T__39:
        case iris_grammarParser::T__40:
        case iris_grammarParser::T__56:
        case iris_grammarParser::T__57:
        case iris_grammarParser::T__58:
        case iris_grammarParser::T__59:
        case iris_grammarParser::T__60:
        case iris_grammarParser::T__61:
        case iris_grammarParser::T__62:
        case iris_grammarParser::T__63:
        case iris_grammarParser::T__64:
        case iris_grammarParser::T__65:
        case iris_grammarParser::T__66:
        case iris_grammarParser::T__67:
        case iris_grammarParser::T__68:
        case iris_grammarParser::T__69:
        case iris_grammarParser::T__70:
        case iris_grammarParser::T__71:
        case iris_grammarParser::T__72:
        case iris_grammarParser::T__73:
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
        case iris_grammarParser::BOOL:
        case iris_grammarParser::LP:
        case iris_grammarParser::MP:
        case iris_grammarParser::HP:
        case iris_grammarParser::BOOLEAN:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT:
        case iris_grammarParser::STRING_LITERAL: {
          setState(74);
          statement();
          setState(76);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == iris_grammarParser::T__55) {
            setState(75);
            eos();
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(83);
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
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(85);
      import_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(86);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(87);
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
    setState(90);
    match(iris_grammarParser::T__0);
    setState(92);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(91);
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
    setState(128);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::FROM: {
        enterOuterAlt(_localctx, 1);
        setState(94);
        match(iris_grammarParser::FROM);

        setState(95);
        file_path_part();
        setState(100);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == iris_grammarParser::T__1) {
          setState(96);
          match(iris_grammarParser::T__1);
          setState(97);
          file_path_part();
          setState(102);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(103);
        match(iris_grammarParser::IMPORT);
        setState(113);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case iris_grammarParser::LABEL: {
            setState(104);
            import_label();
            setState(109);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == iris_grammarParser::T__2) {
              setState(105);
              match(iris_grammarParser::T__2);
              setState(106);
              import_label();
              setState(111);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case iris_grammarParser::T__3: {
            setState(112);
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
        setState(115);
        match(iris_grammarParser::IMPORT);

        setState(116);
        file_path_part();
        setState(121);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == iris_grammarParser::T__1) {
          setState(117);
          match(iris_grammarParser::T__1);
          setState(118);
          file_path_part();
          setState(123);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(126);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == iris_grammarParser::AS) {
          setState(124);
          match(iris_grammarParser::AS);

          setState(125);
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
    setState(130);
    match(iris_grammarParser::FUNC);
    setState(131);
    match(iris_grammarParser::LABEL);
    setState(132);
    match(iris_grammarParser::T__4);
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & 63) != 0) || _la == iris_grammarParser::LABEL) {
      setState(133);
      declaration();
      setState(138);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(134);
          match(iris_grammarParser::T__2);
          setState(135);
          declaration(); 
        }
        setState(140);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      }
    }
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__2) {
      setState(143);
      match(iris_grammarParser::T__2);
    }
    setState(146);
    match(iris_grammarParser::T__5);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__6) {
      setState(147);
      match(iris_grammarParser::T__6);
      setState(148);
      type();
    }
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::NEWLINE) {
      setState(151);
      match(iris_grammarParser::NEWLINE);
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(157);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_method_definitionContext ------------------------------------------------------------------

iris_grammarParser::Class_method_definitionContext::Class_method_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Class_method_definitionContext::FUNC() {
  return getToken(iris_grammarParser::FUNC, 0);
}

tree::TerminalNode* iris_grammarParser::Class_method_definitionContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}

iris_grammarParser::Self_declarationContext* iris_grammarParser::Class_method_definitionContext::self_declaration() {
  return getRuleContext<iris_grammarParser::Self_declarationContext>(0);
}

iris_grammarParser::BlockContext* iris_grammarParser::Class_method_definitionContext::block() {
  return getRuleContext<iris_grammarParser::BlockContext>(0);
}

std::vector<iris_grammarParser::DeclarationContext *> iris_grammarParser::Class_method_definitionContext::declaration() {
  return getRuleContexts<iris_grammarParser::DeclarationContext>();
}

iris_grammarParser::DeclarationContext* iris_grammarParser::Class_method_definitionContext::declaration(size_t i) {
  return getRuleContext<iris_grammarParser::DeclarationContext>(i);
}

iris_grammarParser::TypeContext* iris_grammarParser::Class_method_definitionContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> iris_grammarParser::Class_method_definitionContext::NEWLINE() {
  return getTokens(iris_grammarParser::NEWLINE);
}

tree::TerminalNode* iris_grammarParser::Class_method_definitionContext::NEWLINE(size_t i) {
  return getToken(iris_grammarParser::NEWLINE, i);
}


size_t iris_grammarParser::Class_method_definitionContext::getRuleIndex() const {
  return iris_grammarParser::RuleClass_method_definition;
}


std::any iris_grammarParser::Class_method_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitClass_method_definition(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Class_method_definitionContext* iris_grammarParser::class_method_definition() {
  Class_method_definitionContext *_localctx = _tracker.createInstance<Class_method_definitionContext>(_ctx, getState());
  enterRule(_localctx, 10, iris_grammarParser::RuleClass_method_definition);
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
    setState(159);
    match(iris_grammarParser::FUNC);
    setState(160);
    match(iris_grammarParser::LABEL);
    setState(161);
    match(iris_grammarParser::T__4);
    setState(162);
    self_declaration();
    setState(167);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(163);
        match(iris_grammarParser::T__2);
        setState(164);
        declaration(); 
      }
      setState(169);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__2) {
      setState(170);
      match(iris_grammarParser::T__2);
    }
    setState(173);
    match(iris_grammarParser::T__5);
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__6) {
      setState(174);
      match(iris_grammarParser::T__6);
      setState(175);
      type();
    }
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::NEWLINE) {
      setState(178);
      match(iris_grammarParser::NEWLINE);
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_operator_definitionContext ------------------------------------------------------------------

iris_grammarParser::Class_operator_definitionContext::Class_operator_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Class_operator_definitionContext::FUNC() {
  return getToken(iris_grammarParser::FUNC, 0);
}

iris_grammarParser::Class_operator_labelContext* iris_grammarParser::Class_operator_definitionContext::class_operator_label() {
  return getRuleContext<iris_grammarParser::Class_operator_labelContext>(0);
}

iris_grammarParser::Self_declarationContext* iris_grammarParser::Class_operator_definitionContext::self_declaration() {
  return getRuleContext<iris_grammarParser::Self_declarationContext>(0);
}

iris_grammarParser::BlockContext* iris_grammarParser::Class_operator_definitionContext::block() {
  return getRuleContext<iris_grammarParser::BlockContext>(0);
}

std::vector<iris_grammarParser::DeclarationContext *> iris_grammarParser::Class_operator_definitionContext::declaration() {
  return getRuleContexts<iris_grammarParser::DeclarationContext>();
}

iris_grammarParser::DeclarationContext* iris_grammarParser::Class_operator_definitionContext::declaration(size_t i) {
  return getRuleContext<iris_grammarParser::DeclarationContext>(i);
}

iris_grammarParser::TypeContext* iris_grammarParser::Class_operator_definitionContext::type() {
  return getRuleContext<iris_grammarParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> iris_grammarParser::Class_operator_definitionContext::NEWLINE() {
  return getTokens(iris_grammarParser::NEWLINE);
}

tree::TerminalNode* iris_grammarParser::Class_operator_definitionContext::NEWLINE(size_t i) {
  return getToken(iris_grammarParser::NEWLINE, i);
}


size_t iris_grammarParser::Class_operator_definitionContext::getRuleIndex() const {
  return iris_grammarParser::RuleClass_operator_definition;
}


std::any iris_grammarParser::Class_operator_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitClass_operator_definition(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Class_operator_definitionContext* iris_grammarParser::class_operator_definition() {
  Class_operator_definitionContext *_localctx = _tracker.createInstance<Class_operator_definitionContext>(_ctx, getState());
  enterRule(_localctx, 12, iris_grammarParser::RuleClass_operator_definition);
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
    setState(186);
    match(iris_grammarParser::FUNC);
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__7) {
      setState(187);
      antlrcpp::downCast<Class_operator_definitionContext *>(_localctx)->inline_ = match(iris_grammarParser::T__7);
    }
    setState(190);
    match(iris_grammarParser::T__8);
    setState(191);
    class_operator_label();
    setState(192);
    match(iris_grammarParser::T__4);
    setState(193);
    self_declaration();
    setState(198);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(194);
        match(iris_grammarParser::T__2);
        setState(195);
        declaration(); 
      }
      setState(200);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
    setState(202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__2) {
      setState(201);
      match(iris_grammarParser::T__2);
    }
    setState(204);
    match(iris_grammarParser::T__5);
    setState(207);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__6) {
      setState(205);
      match(iris_grammarParser::T__6);
      setState(206);
      type();
    }
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::NEWLINE) {
      setState(209);
      match(iris_grammarParser::NEWLINE);
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(215);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Self_declarationContext ------------------------------------------------------------------

iris_grammarParser::Self_declarationContext::Self_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<iris_grammarParser::Self_descriptorContext *> iris_grammarParser::Self_declarationContext::self_descriptor() {
  return getRuleContexts<iris_grammarParser::Self_descriptorContext>();
}

iris_grammarParser::Self_descriptorContext* iris_grammarParser::Self_declarationContext::self_descriptor(size_t i) {
  return getRuleContext<iris_grammarParser::Self_descriptorContext>(i);
}


size_t iris_grammarParser::Self_declarationContext::getRuleIndex() const {
  return iris_grammarParser::RuleSelf_declaration;
}


std::any iris_grammarParser::Self_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitSelf_declaration(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Self_declarationContext* iris_grammarParser::self_declaration() {
  Self_declarationContext *_localctx = _tracker.createInstance<Self_declarationContext>(_ctx, getState());
  enterRule(_localctx, 14, iris_grammarParser::RuleSelf_declaration);
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
    setState(220);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__10

    || _la == iris_grammarParser::T__11 || ((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & 63) != 0)) {
      setState(217);
      self_descriptor();
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(223);
    match(iris_grammarParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Self_descriptorContext ------------------------------------------------------------------

iris_grammarParser::Self_descriptorContext::Self_descriptorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::DescriptorContext* iris_grammarParser::Self_descriptorContext::descriptor() {
  return getRuleContext<iris_grammarParser::DescriptorContext>(0);
}


size_t iris_grammarParser::Self_descriptorContext::getRuleIndex() const {
  return iris_grammarParser::RuleSelf_descriptor;
}


std::any iris_grammarParser::Self_descriptorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitSelf_descriptor(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Self_descriptorContext* iris_grammarParser::self_descriptor() {
  Self_descriptorContext *_localctx = _tracker.createInstance<Self_descriptorContext>(_ctx, getState());
  enterRule(_localctx, 16, iris_grammarParser::RuleSelf_descriptor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(228);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::DEF:
      case iris_grammarParser::IN:
      case iris_grammarParser::OUT:
      case iris_grammarParser::UNIFORM:
      case iris_grammarParser::MUT:
      case iris_grammarParser::VERTEX: {
        enterOuterAlt(_localctx, 1);
        setState(225);
        descriptor();
        break;
      }

      case iris_grammarParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(226);
        match(iris_grammarParser::T__10);
        break;
      }

      case iris_grammarParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(227);
        match(iris_grammarParser::T__11);
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

//----------------- Class_operator_labelContext ------------------------------------------------------------------

iris_grammarParser::Class_operator_labelContext::Class_operator_labelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t iris_grammarParser::Class_operator_labelContext::getRuleIndex() const {
  return iris_grammarParser::RuleClass_operator_label;
}


std::any iris_grammarParser::Class_operator_labelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitClass_operator_label(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Class_operator_labelContext* iris_grammarParser::class_operator_label() {
  Class_operator_labelContext *_localctx = _tracker.createInstance<Class_operator_labelContext>(_ctx, getState());
  enterRule(_localctx, 18, iris_grammarParser::RuleClass_operator_label);
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
    setState(230);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 536862736) != 0))) {
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

//----------------- Class_definitionContext ------------------------------------------------------------------

iris_grammarParser::Class_definitionContext::Class_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::Base_class_nameContext* iris_grammarParser::Class_definitionContext::base_class_name() {
  return getRuleContext<iris_grammarParser::Base_class_nameContext>(0);
}

tree::TerminalNode* iris_grammarParser::Class_definitionContext::AS() {
  return getToken(iris_grammarParser::AS, 0);
}

std::vector<tree::TerminalNode *> iris_grammarParser::Class_definitionContext::LABEL() {
  return getTokens(iris_grammarParser::LABEL);
}

tree::TerminalNode* iris_grammarParser::Class_definitionContext::LABEL(size_t i) {
  return getToken(iris_grammarParser::LABEL, i);
}

std::vector<iris_grammarParser::Class_block_itemContext *> iris_grammarParser::Class_definitionContext::class_block_item() {
  return getRuleContexts<iris_grammarParser::Class_block_itemContext>();
}

iris_grammarParser::Class_block_itemContext* iris_grammarParser::Class_definitionContext::class_block_item(size_t i) {
  return getRuleContext<iris_grammarParser::Class_block_itemContext>(i);
}


size_t iris_grammarParser::Class_definitionContext::getRuleIndex() const {
  return iris_grammarParser::RuleClass_definition;
}


std::any iris_grammarParser::Class_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitClass_definition(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Class_definitionContext* iris_grammarParser::class_definition() {
  Class_definitionContext *_localctx = _tracker.createInstance<Class_definitionContext>(_ctx, getState());
  enterRule(_localctx, 20, iris_grammarParser::RuleClass_definition);
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
    setState(232);
    match(iris_grammarParser::T__28);
    setState(233);
    base_class_name();
    setState(234);
    match(iris_grammarParser::AS);
    setState(235);
    antlrcpp::downCast<Class_definitionContext *>(_localctx)->name = match(iris_grammarParser::LABEL);
    setState(245);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__29) {
      setState(236);
      match(iris_grammarParser::T__29);
      setState(237);
      antlrcpp::downCast<Class_definitionContext *>(_localctx)->trait = match(iris_grammarParser::LABEL);
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == iris_grammarParser::T__2) {
        setState(238);
        match(iris_grammarParser::T__2);
        setState(239);
        antlrcpp::downCast<Class_definitionContext *>(_localctx)->trait = match(iris_grammarParser::LABEL);
        setState(244);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::T__30) {
      setState(247);
      match(iris_grammarParser::T__30);
      setState(251);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 33) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 33)) & 35470245112053763) != 0) || _la == iris_grammarParser::LABEL) {
        setState(248);
        class_block_item();
        setState(253);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(254);
      match(iris_grammarParser::T__31);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_class_nameContext ------------------------------------------------------------------

iris_grammarParser::Base_class_nameContext::Base_class_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::Base_typeContext* iris_grammarParser::Base_class_nameContext::base_type() {
  return getRuleContext<iris_grammarParser::Base_typeContext>(0);
}

tree::TerminalNode* iris_grammarParser::Base_class_nameContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}


size_t iris_grammarParser::Base_class_nameContext::getRuleIndex() const {
  return iris_grammarParser::RuleBase_class_name;
}


std::any iris_grammarParser::Base_class_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBase_class_name(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Base_class_nameContext* iris_grammarParser::base_class_name() {
  Base_class_nameContext *_localctx = _tracker.createInstance<Base_class_nameContext>(_ctx, getState());
  enterRule(_localctx, 22, iris_grammarParser::RuleBase_class_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(259);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__56:
      case iris_grammarParser::T__57:
      case iris_grammarParser::T__58:
      case iris_grammarParser::T__59:
      case iris_grammarParser::T__60:
      case iris_grammarParser::T__61:
      case iris_grammarParser::T__62:
      case iris_grammarParser::T__63:
      case iris_grammarParser::T__64:
      case iris_grammarParser::T__65:
      case iris_grammarParser::T__66:
      case iris_grammarParser::T__67:
      case iris_grammarParser::T__68:
      case iris_grammarParser::T__69:
      case iris_grammarParser::T__70:
      case iris_grammarParser::T__71:
      case iris_grammarParser::T__72:
      case iris_grammarParser::T__73:
      case iris_grammarParser::NONE:
      case iris_grammarParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(257);
        base_type();
        break;
      }

      case iris_grammarParser::LABEL: {
        enterOuterAlt(_localctx, 2);
        setState(258);
        match(iris_grammarParser::LABEL);
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

//----------------- Class_block_itemContext ------------------------------------------------------------------

iris_grammarParser::Class_block_itemContext::Class_block_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

iris_grammarParser::DeclarationContext* iris_grammarParser::Class_block_itemContext::declaration() {
  return getRuleContext<iris_grammarParser::DeclarationContext>(0);
}

tree::TerminalNode* iris_grammarParser::Class_block_itemContext::NEWLINE() {
  return getToken(iris_grammarParser::NEWLINE, 0);
}

iris_grammarParser::Class_compiler_directiveContext* iris_grammarParser::Class_block_itemContext::class_compiler_directive() {
  return getRuleContext<iris_grammarParser::Class_compiler_directiveContext>(0);
}

iris_grammarParser::Class_method_definitionContext* iris_grammarParser::Class_block_itemContext::class_method_definition() {
  return getRuleContext<iris_grammarParser::Class_method_definitionContext>(0);
}

iris_grammarParser::Class_operator_definitionContext* iris_grammarParser::Class_block_itemContext::class_operator_definition() {
  return getRuleContext<iris_grammarParser::Class_operator_definitionContext>(0);
}


size_t iris_grammarParser::Class_block_itemContext::getRuleIndex() const {
  return iris_grammarParser::RuleClass_block_item;
}


std::any iris_grammarParser::Class_block_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitClass_block_item(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Class_block_itemContext* iris_grammarParser::class_block_item() {
  Class_block_itemContext *_localctx = _tracker.createInstance<Class_block_itemContext>(_ctx, getState());
  enterRule(_localctx, 24, iris_grammarParser::RuleClass_block_item);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(277);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(261);
      declaration();
      setState(263);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(262);
        match(iris_grammarParser::NEWLINE);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(265);
      class_compiler_directive();
      setState(267);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(266);
        match(iris_grammarParser::NEWLINE);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(269);
      class_method_definition();
      setState(271);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(270);
        match(iris_grammarParser::NEWLINE);
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(273);
      class_operator_definition();
      setState(275);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(274);
        match(iris_grammarParser::NEWLINE);
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

//----------------- Class_compiler_directiveContext ------------------------------------------------------------------

iris_grammarParser::Class_compiler_directiveContext::Class_compiler_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Class_compiler_directiveContext::TARGET_LANGUAGE() {
  return getToken(iris_grammarParser::TARGET_LANGUAGE, 0);
}

tree::TerminalNode* iris_grammarParser::Class_compiler_directiveContext::STRING_LITERAL() {
  return getToken(iris_grammarParser::STRING_LITERAL, 0);
}

iris_grammarParser::Precision_qualifierContext* iris_grammarParser::Class_compiler_directiveContext::precision_qualifier() {
  return getRuleContext<iris_grammarParser::Precision_qualifierContext>(0);
}


size_t iris_grammarParser::Class_compiler_directiveContext::getRuleIndex() const {
  return iris_grammarParser::RuleClass_compiler_directive;
}


std::any iris_grammarParser::Class_compiler_directiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitClass_compiler_directive(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Class_compiler_directiveContext* iris_grammarParser::class_compiler_directive() {
  Class_compiler_directiveContext *_localctx = _tracker.createInstance<Class_compiler_directiveContext>(_ctx, getState());
  enterRule(_localctx, 26, iris_grammarParser::RuleClass_compiler_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(284);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__32: {
        enterOuterAlt(_localctx, 1);
        setState(279);
        antlrcpp::downCast<Class_compiler_directiveContext *>(_localctx)->tag = match(iris_grammarParser::T__32);
        setState(280);
        match(iris_grammarParser::TARGET_LANGUAGE);
        setState(281);
        antlrcpp::downCast<Class_compiler_directiveContext *>(_localctx)->label = match(iris_grammarParser::STRING_LITERAL);
        break;
      }

      case iris_grammarParser::T__33: {
        enterOuterAlt(_localctx, 2);
        setState(282);
        antlrcpp::downCast<Class_compiler_directiveContext *>(_localctx)->tag = match(iris_grammarParser::T__33);
        setState(283);
        precision_qualifier();
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
  enterRule(_localctx, 28, iris_grammarParser::RuleConditional_block);
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
    setState(286);
    match(iris_grammarParser::IF);
    setState(287);
    expr(0);
    setState(290);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::T__30: {
        setState(288);
        block();
        break;
      }

      case iris_grammarParser::T__0:
      case iris_grammarParser::T__4:
      case iris_grammarParser::T__15:
      case iris_grammarParser::T__16:
      case iris_grammarParser::T__37:
      case iris_grammarParser::T__39:
      case iris_grammarParser::T__40:
      case iris_grammarParser::T__56:
      case iris_grammarParser::T__57:
      case iris_grammarParser::T__58:
      case iris_grammarParser::T__59:
      case iris_grammarParser::T__60:
      case iris_grammarParser::T__61:
      case iris_grammarParser::T__62:
      case iris_grammarParser::T__63:
      case iris_grammarParser::T__64:
      case iris_grammarParser::T__65:
      case iris_grammarParser::T__66:
      case iris_grammarParser::T__67:
      case iris_grammarParser::T__68:
      case iris_grammarParser::T__69:
      case iris_grammarParser::T__70:
      case iris_grammarParser::T__71:
      case iris_grammarParser::T__72:
      case iris_grammarParser::T__73:
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
      case iris_grammarParser::BOOL:
      case iris_grammarParser::LP:
      case iris_grammarParser::MP:
      case iris_grammarParser::HP:
      case iris_grammarParser::BOOLEAN:
      case iris_grammarParser::FLOAT:
      case iris_grammarParser::LABEL:
      case iris_grammarParser::INT:
      case iris_grammarParser::STRING_LITERAL: {
        setState(289);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(300);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::ELIF) {
      setState(292);
      match(iris_grammarParser::ELIF);
      setState(293);
      expr(0);
      setState(296);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__30: {
          setState(294);
          block();
          break;
        }

        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__15:
        case iris_grammarParser::T__16:
        case iris_grammarParser::T__37:
        case iris_grammarParser::T__39:
        case iris_grammarParser::T__40:
        case iris_grammarParser::T__56:
        case iris_grammarParser::T__57:
        case iris_grammarParser::T__58:
        case iris_grammarParser::T__59:
        case iris_grammarParser::T__60:
        case iris_grammarParser::T__61:
        case iris_grammarParser::T__62:
        case iris_grammarParser::T__63:
        case iris_grammarParser::T__64:
        case iris_grammarParser::T__65:
        case iris_grammarParser::T__66:
        case iris_grammarParser::T__67:
        case iris_grammarParser::T__68:
        case iris_grammarParser::T__69:
        case iris_grammarParser::T__70:
        case iris_grammarParser::T__71:
        case iris_grammarParser::T__72:
        case iris_grammarParser::T__73:
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
        case iris_grammarParser::BOOL:
        case iris_grammarParser::LP:
        case iris_grammarParser::MP:
        case iris_grammarParser::HP:
        case iris_grammarParser::BOOLEAN:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT:
        case iris_grammarParser::STRING_LITERAL: {
          setState(295);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(302);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(308);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::ELSE) {
      setState(303);
      match(iris_grammarParser::ELSE);
      setState(306);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__30: {
          setState(304);
          block();
          break;
        }

        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__15:
        case iris_grammarParser::T__16:
        case iris_grammarParser::T__37:
        case iris_grammarParser::T__39:
        case iris_grammarParser::T__40:
        case iris_grammarParser::T__56:
        case iris_grammarParser::T__57:
        case iris_grammarParser::T__58:
        case iris_grammarParser::T__59:
        case iris_grammarParser::T__60:
        case iris_grammarParser::T__61:
        case iris_grammarParser::T__62:
        case iris_grammarParser::T__63:
        case iris_grammarParser::T__64:
        case iris_grammarParser::T__65:
        case iris_grammarParser::T__66:
        case iris_grammarParser::T__67:
        case iris_grammarParser::T__68:
        case iris_grammarParser::T__69:
        case iris_grammarParser::T__70:
        case iris_grammarParser::T__71:
        case iris_grammarParser::T__72:
        case iris_grammarParser::T__73:
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
        case iris_grammarParser::BOOL:
        case iris_grammarParser::LP:
        case iris_grammarParser::MP:
        case iris_grammarParser::HP:
        case iris_grammarParser::BOOLEAN:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT:
        case iris_grammarParser::STRING_LITERAL: {
          setState(305);
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
  enterRule(_localctx, 30, iris_grammarParser::RuleFor_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(310);
      match(iris_grammarParser::T__34);
      setState(311);
      unpacking_list();
      setState(312);
      match(iris_grammarParser::IN);
      setState(313);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(315);
      match(iris_grammarParser::T__34);
      setState(316);
      antlrcpp::downCast<For_blockContext *>(_localctx)->iterator = declaration();
      setState(317);
      match(iris_grammarParser::T__2);
      setState(318);
      expr(0);
      setState(319);
      match(iris_grammarParser::T__2);
      setState(320);
      expr(0);
      setState(321);
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
  enterRule(_localctx, 32, iris_grammarParser::RuleUnpacking_list);
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
    setState(325);
    unpacking_item();
    setState(330);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == iris_grammarParser::T__2) {
      setState(326);
      match(iris_grammarParser::T__2);
      setState(327);
      unpacking_item();
      setState(332);
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
  enterRule(_localctx, 34, iris_grammarParser::RuleUnpacking_item);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(339);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(333);
      match(iris_grammarParser::LABEL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(334);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(335);
      match(iris_grammarParser::T__4);
      setState(336);
      unpacking_list();
      setState(337);
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
  enterRule(_localctx, 36, iris_grammarParser::RuleWhile_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    match(iris_grammarParser::T__35);
    setState(342);
    expr(0);
    setState(343);
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
  enterRule(_localctx, 38, iris_grammarParser::RuleDo_while_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    match(iris_grammarParser::T__36);
    setState(346);
    block();
    setState(347);
    match(iris_grammarParser::T__35);
    setState(348);
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
  enterRule(_localctx, 40, iris_grammarParser::RuleMatch_block);
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
    setState(350);
    match(iris_grammarParser::T__37);
    setState(351);
    expr(0);
    setState(352);
    match(iris_grammarParser::T__30);
    setState(359);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -144111064907055070) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 288371117918263295) != 0) || ((((_la - 150) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 150)) & 503) != 0)) {
      setState(353);
      case_block();
      setState(355);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(354);
        match(iris_grammarParser::NEWLINE);
      }
      setState(361);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(362);
    match(iris_grammarParser::T__31);
   
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
  enterRule(_localctx, 42, iris_grammarParser::RuleCase_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(371);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(366);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case iris_grammarParser::T__0:
        case iris_grammarParser::T__4:
        case iris_grammarParser::T__15:
        case iris_grammarParser::T__16:
        case iris_grammarParser::T__37:
        case iris_grammarParser::T__39:
        case iris_grammarParser::T__40:
        case iris_grammarParser::T__56:
        case iris_grammarParser::T__57:
        case iris_grammarParser::T__58:
        case iris_grammarParser::T__59:
        case iris_grammarParser::T__60:
        case iris_grammarParser::T__61:
        case iris_grammarParser::T__62:
        case iris_grammarParser::T__63:
        case iris_grammarParser::T__64:
        case iris_grammarParser::T__65:
        case iris_grammarParser::T__66:
        case iris_grammarParser::T__67:
        case iris_grammarParser::T__68:
        case iris_grammarParser::T__69:
        case iris_grammarParser::T__70:
        case iris_grammarParser::T__71:
        case iris_grammarParser::T__72:
        case iris_grammarParser::T__73:
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
        case iris_grammarParser::BOOL:
        case iris_grammarParser::LP:
        case iris_grammarParser::MP:
        case iris_grammarParser::HP:
        case iris_grammarParser::BOOLEAN:
        case iris_grammarParser::FLOAT:
        case iris_grammarParser::LABEL:
        case iris_grammarParser::INT:
        case iris_grammarParser::STRING_LITERAL: {
          setState(364);
          expr(0);
          break;
        }

        case iris_grammarParser::T__38: {
          setState(365);
          match(iris_grammarParser::T__38);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(368);
      match(iris_grammarParser::T__6);
      setState(369);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(370);
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
  enterRule(_localctx, 44, iris_grammarParser::RuleFile_path_part);
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
    setState(373);
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
  enterRule(_localctx, 46, iris_grammarParser::RuleImport_label);
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
    setState(375);
    antlrcpp::downCast<Import_labelContext *>(_localctx)->import_name = match(iris_grammarParser::LABEL);
    setState(378);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == iris_grammarParser::AS) {
      setState(376);
      match(iris_grammarParser::AS);
      setState(377);
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
  enterRule(_localctx, 48, iris_grammarParser::RuleBlock);
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
    setState(380);
    match(iris_grammarParser::T__30);
    setState(384);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -144111374144700382) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 288371117934974975) != 0) || ((((_la - 150) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 150)) & 503) != 0)) {
      setState(381);
      block_item();
      setState(386);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(387);
    match(iris_grammarParser::T__31);
   
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
  enterRule(_localctx, 50, iris_grammarParser::RuleBlock_item);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(397);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(389);
      statement();
      setState(391);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::NEWLINE) {
        setState(390);
        match(iris_grammarParser::NEWLINE);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockWhileBlockContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(393);
      while_block();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockDoWhileBlockContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(394);
      do_while_block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockForBlockContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(395);
      for_block();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<iris_grammarParser::BlockConditionalBlockContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(396);
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
  enterRule(_localctx, 52, iris_grammarParser::RuleConditional);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    match(iris_grammarParser::IF);
    setState(400);
    expr(0);
    setState(401);
    match(iris_grammarParser::THEN);
    setState(402);
    expr(0);
    setState(403);
    match(iris_grammarParser::ELSE);
    setState(404);
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
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, iris_grammarParser::RuleExpr, precedence);

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
    setState(439);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ReturnContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(407);
      return_statement();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(408);
      match(iris_grammarParser::T__4);
      setState(409);
      expr(0);
      setState(410);
      match(iris_grammarParser::T__5);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PrimitiveExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(412);
      primitive();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MagnitudeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(413);
      match(iris_grammarParser::T__39);
      setState(414);
      expr(0);
      setState(415);
      match(iris_grammarParser::T__39);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<AbsoluteValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(417);
      match(iris_grammarParser::T__40);
      setState(418);
      expr(0);
      setState(419);
      match(iris_grammarParser::T__40);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ConstructorCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(421);
      type();
      setState(422);
      match(iris_grammarParser::T__4);
      setState(431);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -144111614662868958) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 288371117918263295) != 0) || ((((_la - 150) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 150)) & 503) != 0)) {
        setState(423);
        expr(0);
        setState(428);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == iris_grammarParser::T__2) {
          setState(424);
          match(iris_grammarParser::T__2);
          setState(425);
          expr(0);
          setState(430);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(433);
      match(iris_grammarParser::T__5);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<UnaryOperatorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(435);
      antlrcpp::downCast<UnaryOperatorContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == iris_grammarParser::T__15

      || _la == iris_grammarParser::T__16 || ((((_la - 88) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 88)) & 255) != 0))) {
        antlrcpp::downCast<UnaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(436);
      expr(16);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<TernaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(437);
      conditional();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<MatchContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(438);
      match_block();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(503);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(501);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(441);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(442);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::T__19);
          setState(443);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(444);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(445);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 7077904) != 0))) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(446);
          expr(15);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(447);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(448);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__15

          || _la == iris_grammarParser::T__16)) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(449);
          expr(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(450);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(451);
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
          setState(452);
          expr(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(453);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(454);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 226492416) != 0))) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(455);
          expr(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(456);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(457);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == iris_grammarParser::T__24

          || _la == iris_grammarParser::T__43)) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(458);
          expr(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(459);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(460);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::BITS_AND);
          setState(461);
          expr(10);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(462);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(463);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::BITS_XOR);
          setState(464);
          expr(9);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(465);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(466);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::BITS_OR);
          setState(467);
          expr(8);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(468);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(469);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::AND);
          setState(470);
          expr(7);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(471);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(472);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = match(iris_grammarParser::OR);
          setState(473);
          expr(6);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(474);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(475);
          antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 35993612646875136) != 0) || ((((_la - 103) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 103)) & 127) != 0))) {
            antlrcpp::downCast<BinaryOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(476);
          expr(1);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<CallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(477);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(478);
          match(iris_grammarParser::T__4);
          setState(487);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & -144111614662868958) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & 288371117918263295) != 0) || ((((_la - 150) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 150)) & 503) != 0)) {
            setState(479);
            expr(0);
            setState(484);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == iris_grammarParser::T__2) {
              setState(480);
              match(iris_grammarParser::T__2);
              setState(481);
              expr(0);
              setState(486);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(489);
          match(iris_grammarParser::T__5);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<IndexOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(490);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(491);
          match(iris_grammarParser::T__41);
          setState(492);
          expr(0);
          setState(493);
          match(iris_grammarParser::T__42);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<GetterContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(495);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(496);
          match(iris_grammarParser::T__1);
          setState(497);
          primitive();
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<CastContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(498);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(499);
          match(iris_grammarParser::AS);
          setState(500);
          type();
          break;
        }

        default:
          break;
        } 
      }
      setState(505);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
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
  enterRule(_localctx, 56, iris_grammarParser::RuleDescriptor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(511);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::DEF:
      case iris_grammarParser::IN:
      case iris_grammarParser::OUT:
      case iris_grammarParser::UNIFORM:
      case iris_grammarParser::MUT: {
        enterOuterAlt(_localctx, 1);
        setState(506);
        antlrcpp::downCast<DescriptorContext *>(_localctx)->descriptor_name = _input->LT(1);
        _la = _input->LA(1);
        if (!(((((_la - 82) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 82)) & 31) != 0))) {
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
        setState(507);
        antlrcpp::downCast<DescriptorContext *>(_localctx)->descriptor_name = match(iris_grammarParser::VERTEX);
        setState(508);
        match(iris_grammarParser::T__41);
        setState(509);
        match(iris_grammarParser::INT);
        setState(510);
        match(iris_grammarParser::T__42);
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
  enterRule(_localctx, 58, iris_grammarParser::RulePrecision_qualifier);
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
    setState(513);
    _la = _input->LA(1);
    if (!(((((_la - 150) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 150)) & 7) != 0))) {
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

iris_grammarParser::Type_nameContext* iris_grammarParser::TypeContext::type_name() {
  return getRuleContext<iris_grammarParser::Type_nameContext>(0);
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
  enterRule(_localctx, 60, iris_grammarParser::RuleType);
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
    setState(516);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 150) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 150)) & 7) != 0)) {
      setState(515);
      precision_qualifier();
    }
    setState(518);
    type_name();
    setState(524);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(519);
        match(iris_grammarParser::T__41);
        setState(520);
        match(iris_grammarParser::INT);
        setState(521);
        match(iris_grammarParser::T__42); 
      }
      setState(526);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_nameContext ------------------------------------------------------------------

iris_grammarParser::Type_nameContext::Type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Type_nameContext::LABEL() {
  return getToken(iris_grammarParser::LABEL, 0);
}

iris_grammarParser::Base_typeContext* iris_grammarParser::Type_nameContext::base_type() {
  return getRuleContext<iris_grammarParser::Base_typeContext>(0);
}


size_t iris_grammarParser::Type_nameContext::getRuleIndex() const {
  return iris_grammarParser::RuleType_name;
}


std::any iris_grammarParser::Type_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitType_name(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Type_nameContext* iris_grammarParser::type_name() {
  Type_nameContext *_localctx = _tracker.createInstance<Type_nameContext>(_ctx, getState());
  enterRule(_localctx, 62, iris_grammarParser::RuleType_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(529);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case iris_grammarParser::LABEL: {
        enterOuterAlt(_localctx, 1);
        setState(527);
        match(iris_grammarParser::LABEL);
        break;
      }

      case iris_grammarParser::T__56:
      case iris_grammarParser::T__57:
      case iris_grammarParser::T__58:
      case iris_grammarParser::T__59:
      case iris_grammarParser::T__60:
      case iris_grammarParser::T__61:
      case iris_grammarParser::T__62:
      case iris_grammarParser::T__63:
      case iris_grammarParser::T__64:
      case iris_grammarParser::T__65:
      case iris_grammarParser::T__66:
      case iris_grammarParser::T__67:
      case iris_grammarParser::T__68:
      case iris_grammarParser::T__69:
      case iris_grammarParser::T__70:
      case iris_grammarParser::T__71:
      case iris_grammarParser::T__72:
      case iris_grammarParser::T__73:
      case iris_grammarParser::NONE:
      case iris_grammarParser::BOOL: {
        enterOuterAlt(_localctx, 2);
        setState(528);
        base_type();
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
  enterRule(_localctx, 64, iris_grammarParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(552);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(531);
      descriptor();
      setState(532);
      match(iris_grammarParser::LABEL);
      setState(535);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__44) {
        setState(533);
        match(iris_grammarParser::T__44);
        setState(534);
        expr(0);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(537);
      descriptor();
      setState(538);
      match(iris_grammarParser::LABEL);
      setState(539);
      match(iris_grammarParser::T__54);
      setState(540);
      type();
      setState(543);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__44) {
        setState(541);
        match(iris_grammarParser::T__44);
        setState(542);
        expr(0);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(545);
      match(iris_grammarParser::LABEL);
      setState(546);
      match(iris_grammarParser::T__54);
      setState(547);
      type();
      setState(550);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == iris_grammarParser::T__44) {
        setState(548);
        match(iris_grammarParser::T__44);
        setState(549);
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
  enterRule(_localctx, 66, iris_grammarParser::RuleEos);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    match(iris_grammarParser::T__55);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_typeContext ------------------------------------------------------------------

iris_grammarParser::Base_typeContext::Base_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* iris_grammarParser::Base_typeContext::NONE() {
  return getToken(iris_grammarParser::NONE, 0);
}

tree::TerminalNode* iris_grammarParser::Base_typeContext::BOOL() {
  return getToken(iris_grammarParser::BOOL, 0);
}


size_t iris_grammarParser::Base_typeContext::getRuleIndex() const {
  return iris_grammarParser::RuleBase_type;
}


std::any iris_grammarParser::Base_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<iris_grammarVisitor*>(visitor))
    return parserVisitor->visitBase_type(this);
  else
    return visitor->visitChildren(this);
}

iris_grammarParser::Base_typeContext* iris_grammarParser::base_type() {
  Base_typeContext *_localctx = _tracker.createInstance<Base_typeContext>(_ctx, getState());
  enterRule(_localctx, 68, iris_grammarParser::RuleBase_type);
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
    setState(556);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -144115188075855872) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 288371113640069119) != 0))) {
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

tree::TerminalNode* iris_grammarParser::PrimitiveContext::STRING_LITERAL() {
  return getToken(iris_grammarParser::STRING_LITERAL, 0);
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
  enterRule(_localctx, 70, iris_grammarParser::RulePrimitive);
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
    setState(558);
    _la = _input->LA(1);
    if (!(((((_la - 154) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 154)) & 31) != 0))) {
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
    case 27: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
