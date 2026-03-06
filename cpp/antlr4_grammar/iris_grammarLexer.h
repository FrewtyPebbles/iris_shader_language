
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
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, FUNC = 44, 
    IF = 45, ELIF = 46, ELSE = 47, THEN = 48, IMPORT = 49, FROM = 50, DEF = 51, 
    IN = 52, OUT = 53, UNIFORM = 54, MUT = 55, VERTEX = 56, NOT = 57, BITS_NOT = 58, 
    NORM = 59, INV = 60, TRANS = 61, DET = 62, DEG = 63, RAD = 64, AND = 65, 
    OR = 66, BITS_AND = 67, BITS_XOR = 68, BITS_OR = 69, BITS_LEFT = 70, 
    BITS_RIGHT = 71, AND_EQ = 72, OR_EQ = 73, BITS_AND_EQ = 74, BITS_XOR_EQ = 75, 
    BITS_OR_EQ = 76, BITS_LEFT_EQ = 77, BITS_RIGHT_EQ = 78, AS = 79, NONE = 80, 
    I8 = 81, I16 = 82, I32 = 83, U8 = 84, U16 = 85, U32 = 86, F8 = 87, F16 = 88, 
    F32 = 89, F64 = 90, BOOL = 91, VEC2 = 92, VEC3 = 93, VEC4 = 94, V2 = 95, 
    V3 = 96, V4 = 97, M2 = 98, M3 = 99, M4 = 100, M2X2 = 101, M3X3 = 102, 
    M4X4 = 103, M2X3 = 104, M3X2 = 105, M3X4 = 106, M4X3 = 107, M2X4 = 108, 
    M4X2 = 109, MAT2 = 110, MAT3 = 111, MAT4 = 112, MAT2X3 = 113, MAT2X4 = 114, 
    MAT3X2 = 115, MAT3X4 = 116, MAT4X2 = 117, MAT4X3 = 118, LP = 119, MP = 120, 
    HP = 121, FLOAT = 122, LABEL = 123, INT = 124, WS = 125, NEWLINE = 126, 
    LINE_COMMENT = 127, BLOCK_COMMENT = 128, ERROR_TOKEN = 129
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

