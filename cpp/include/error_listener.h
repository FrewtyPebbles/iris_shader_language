#pragma once
#include "antlr4-runtime.h"
#include <string>

using std::string;

string create_syntax_error_message(uint32_t line, uint32_t char_pos, string message);

class PreciseErrorListener : public antlr4::BaseErrorListener {
public:
    void syntaxError(antlr4::Recognizer *recognizer, 
                     antlr4::Token *offendingSymbol,
                     size_t line, 
                     size_t charPositionInLine,
                     const std::string &msg, 
                     std::exception_ptr e) override;
};