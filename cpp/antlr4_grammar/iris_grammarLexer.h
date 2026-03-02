
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
    T__38 = 39, FUNC = 40, IF = 41, ELIF = 42, ELSE = 43, THEN = 44, IMPORT = 45, 
    FROM = 46, DEF = 47, IN = 48, OUT = 49, UNIFORM = 50, MUT = 51, VERTEX = 52, 
    NOT = 53, BITS_NOT = 54, NORM = 55, INV = 56, TRANS = 57, DET = 58, 
    DEG = 59, RAD = 60, AND = 61, OR = 62, BITS_AND = 63, BITS_XOR = 64, 
    BITS_OR = 65, BITS_LEFT = 66, BITS_RIGHT = 67, AND_EQ = 68, OR_EQ = 69, 
    BITS_AND_EQ = 70, BITS_XOR_EQ = 71, BITS_OR_EQ = 72, BITS_LEFT_EQ = 73, 
    BITS_RIGHT_EQ = 74, AS = 75, NONE = 76, I8 = 77, I16 = 78, I32 = 79, 
    U8 = 80, U16 = 81, U32 = 82, F8 = 83, F16 = 84, F32 = 85, F64 = 86, 
    BOOL = 87, VEC2 = 88, VEC3 = 89, VEC4 = 90, V2 = 91, V3 = 92, V4 = 93, 
    M2 = 94, M3 = 95, M4 = 96, M2X2 = 97, M3X3 = 98, M4X4 = 99, M2X3 = 100, 
    M3X2 = 101, M3X4 = 102, M4X3 = 103, M2X4 = 104, M4X2 = 105, MAT2 = 106, 
    MAT3 = 107, MAT4 = 108, MAT2X3 = 109, MAT2X4 = 110, MAT3X2 = 111, MAT3X4 = 112, 
    MAT4X2 = 113, MAT4X3 = 114, LP = 115, MP = 116, HP = 117, FLOAT = 118, 
    LABEL = 119, INT = 120, WS = 121, NEWLINE = 122, LINE_COMMENT = 123, 
    BLOCK_COMMENT = 124, ERROR_TOKEN = 125
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

