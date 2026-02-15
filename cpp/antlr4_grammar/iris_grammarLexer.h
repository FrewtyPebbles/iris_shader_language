
#include <stack>


// Generated from ./cpp/iris_grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  iris_grammarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, DEF = 17, UNIFORM = 18, VERTEX = 19, OUT = 20, 
    FUNC = 21, RETURN = 22, ARROW = 23, INTEGER = 24, FLOAT = 25, IDENTIFIER = 26, 
    COLON = 27, LPAREN = 28, RPAREN = 29, LBRACK = 30, RBRACK = 31, NEWLINE = 32, 
    WS = 33, COMMENT = 34
  };

  explicit iris_grammarLexer(antlr4::CharStream *input);

  ~iris_grammarLexer() override;



  static const int INDENT = 1;
  static const int DEDENT = 2;

  std::stack<int> indents;
  std::vector<std::unique_ptr<antlr4::Token>> pendingTokens;

  std::unique_ptr<antlr4::Token> commonToken(int type, const std::string& text) {
      return _factory->create(type, text);
  }

  std::unique_ptr<antlr4::Token> nextToken() override {
      if (!pendingTokens.empty()) {
          auto t = std::move(pendingTokens.front());
          pendingTokens.erase(pendingTokens.begin());
          return t;
      }

      auto next = Lexer::nextToken();

      if (next->getType() == antlr4::Token::EOF) {
          while (!indents.empty()) {
              indents.pop();
              pendingTokens.push_back(commonToken(iris_grammarLexer::DEDENT, ""));
          }
          pendingTokens.push_back(std::move(next));
          auto t = std::move(pendingTokens.front());
          pendingTokens.erase(pendingTokens.begin());
          return t;
      }

      return next;
  }



  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void NEWLINEAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

