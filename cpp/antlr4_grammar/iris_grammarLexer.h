
// Generated from ./cpp/iris_grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  iris_grammarLexer : public antlr4::Lexer {
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

  explicit iris_grammarLexer(antlr4::CharStream *input);

  ~iris_grammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

