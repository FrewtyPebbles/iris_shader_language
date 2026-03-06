#pragma once
#include "antlr4-runtime.h"
#include <string>
#include <memory>

using std::string;

enum ErrorType {
    SYNTAX_ERROR,
    DEFINITION_ERROR,
    CONFIGURATION_ERROR,
    IMPORT_ERROR,
    TYPE_ERROR,
    LOGIC_ERROR
};

class Module;

string create_error_message(ErrorType type, std::shared_ptr<Module> module, uint32_t line, uint32_t column, string message);

void throw_error(ErrorType type, std::shared_ptr<Module> module, uint32_t line, uint32_t column, string message);

class PreciseErrorListener : public antlr4::BaseErrorListener {
public:
    void syntaxError(antlr4::Recognizer *recognizer, 
                     antlr4::Token *offendingSymbol,
                     size_t line, 
                     size_t charPositionInLine,
                     const std::string &msg, 
                     std::exception_ptr e) override;
};