grammar iris_grammar;

options { language=Cpp; }

tokens {
    INDENT,
    DEDENT
}

@lexer::header {
#include <stack>
}

@lexer::members {

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

}


/* =========================
   PARSER RULES
   ========================= */

program
    : statement* EOF
    ;

statement
    : macroDecl
    | uniformDecl
    | vertexDecl
    | outDecl
    | funcDecl
    | simpleStmt
    | NEWLINE
    ;

simpleStmt
    : expression NEWLINE
    ;

macroDecl
    : DEF IDENTIFIER '=' expression NEWLINE
    ;

uniformDecl
    : UNIFORM IDENTIFIER ':' type NEWLINE
    ;

vertexDecl
    : VERTEX '[' INTEGER ']' IDENTIFIER ':' type NEWLINE
    ;

outDecl
    : OUT IDENTIFIER ':' type NEWLINE
    ;

funcDecl
    : FUNC IDENTIFIER '(' paramList? ')' ARROW type ':' NEWLINE INDENT block DEDENT
    ;

paramList
    : param (',' param)*
    ;

param
    : IDENTIFIER ':' type
    ;

block
    : statement+
    ;

/* =========================
   EXPRESSIONS
   ========================= */

expression
    : assignment
    ;

assignment
    : logicalOr ( '=' assignment )?
    ;

logicalOr
    : logicalAnd ( '||' logicalAnd )*
    ;

logicalAnd
    : equality ( '&&' equality )*
    ;

equality
    : comparison ( ('==' | '!=') comparison )*
    ;

comparison
    : term ( ('<' | '>' | '<=' | '>=') term )*
    ;

term
    : factor ( ('+' | '-') factor )*
    ;

factor
    : unary ( ('*' | '/') unary )*
    ;

unary
    : ('!' | '-') unary
    | primary
    ;

primary
    : literal
    | IDENTIFIER
    | IDENTIFIER '.' IDENTIFIER
    | functionCall
    | '(' expression ')'
    ;

functionCall
    : IDENTIFIER '(' argumentList? ')'
    ;

argumentList
    : expression (',' expression)*
    ;

literal
    : INTEGER
    | FLOAT
    ;

type
    : IDENTIFIER
    ;

/* =========================
   LEXER
   ========================= */

DEF         : 'def';
UNIFORM     : 'uniform';
VERTEX      : 'vertex';
OUT         : 'out';
FUNC        : 'func';
RETURN      : 'return';
ARROW       : '->';

INTEGER     : [0-9]+;
FLOAT       : [0-9]+ '.' [0-9]*;

IDENTIFIER  : [a-zA-Z_][a-zA-Z0-9_]*;

COLON       : ':';
LPAREN      : '(';
RPAREN      : ')';
LBRACK      : '[';
RBRACK      : ']';

NEWLINE
    : ('\r'? '\n')+
      {
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
      }
    ;


WS  : [ \t]+ -> skip;
COMMENT : '#' ~[\r\n]* -> skip;
