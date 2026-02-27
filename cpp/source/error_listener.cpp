#include "error_listener.h"

string create_syntax_error_message(uint32_t line, uint32_t char_pos, string message) {
    return "syntax_error|" +
        std::to_string(line) +
        ":" +
        std::to_string(char_pos) +
        "|" + message;
}

void ThrowingErrorListener::syntaxError(
    antlr4::Recognizer *recognizer,
    antlr4::Token *offendingSymbol,
    size_t line,
    size_t charPositionInLine,
    const std::string &msg,
    std::exception_ptr e)
{
    throw std::runtime_error(create_syntax_error_message(line, charPositionInLine, msg));
}