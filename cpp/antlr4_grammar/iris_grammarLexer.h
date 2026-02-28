
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
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, FUNC = 38, 
    IF = 39, ELIF = 40, ELSE = 41, THEN = 42, IMPORT = 43, FROM = 44, DEF = 45, 
    IN = 46, OUT = 47, UNIFORM = 48, MUT = 49, VERTEX = 50, NOT = 51, BITS_NOT = 52, 
    NORM = 53, INV = 54, TRANS = 55, DET = 56, DEG = 57, RAD = 58, AND = 59, 
    OR = 60, BITS_AND = 61, BITS_XOR = 62, BITS_OR = 63, BITS_LEFT = 64, 
    BITS_RIGHT = 65, AND_EQ = 66, OR_EQ = 67, BITS_AND_EQ = 68, BITS_XOR_EQ = 69, 
    BITS_OR_EQ = 70, BITS_LEFT_EQ = 71, BITS_RIGHT_EQ = 72, AS = 73, NONE = 74, 
    I8 = 75, I16 = 76, I32 = 77, U8 = 78, U16 = 79, U32 = 80, F8 = 81, F16 = 82, 
    F32 = 83, F64 = 84, BOOL = 85, VEC2 = 86, VEC3 = 87, VEC4 = 88, V2 = 89, 
    V3 = 90, V4 = 91, M2 = 92, M3 = 93, M4 = 94, M2X2 = 95, M3X3 = 96, M4X4 = 97, 
    M2X3 = 98, M3X2 = 99, M3X4 = 100, M4X3 = 101, M2X4 = 102, M4X2 = 103, 
    MAT2 = 104, MAT3 = 105, MAT4 = 106, MAT2X3 = 107, MAT2X4 = 108, MAT3X2 = 109, 
    MAT3X4 = 110, MAT4X2 = 111, MAT4X3 = 112, LP = 113, MP = 114, HP = 115, 
    FLOAT = 116, LABEL = 117, INT = 118, WS = 119, NEWLINE = 120, LINE_COMMENT = 121, 
    BLOCK_COMMENT = 122, ERROR_TOKEN = 123
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

