#include "errors.h"
#include "tree/module.h"

std::string escape_quotes(std::string str) {
    const std::string& from = "\"";
    const std::string& to = "\\\"";
    if (from.empty()) return str; // Prevent infinite loop if 'from' is empty
    
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        // Advance position past the replaced part
        start_pos += to.length();
    }
    return str;
}

string create_error_message(ErrorType type, std::weak_ptr<Module> module, uint32_t line, uint32_t column, string message) {
    string error_type = "UNKNOWN";

    switch (type)
    {
        case ErrorType::SYNTAX_ERROR:
            error_type = "SYNTAX_ERROR";
            break;

        case ErrorType::DEFINITION_ERROR:
            error_type = "DEFINITION_ERROR";
            break;

        case ErrorType::CONFIGURATION_ERROR:
            error_type = "CONFIGURATION_ERROR";
            break;

        case ErrorType::IMPORT_ERROR:
            error_type = "IMPORT_ERROR";
            break;

        case ErrorType::TYPE_ERROR:
            error_type = "TYPE_ERROR";
            break;

        case ErrorType::LOGIC_ERROR:
            error_type = "LOGIC_ERROR";
            break;
    }

    return
        "{\"error_type\":\"" + error_type + "\"" +
        ",\"module\":" + (module.lock() ? "\"" + escape_quotes(module.lock()->name) + "\"" : "null") +
        ",\"line\":" + std::to_string(line) +
        ",\"column\":" + std::to_string(column) +
        ",\"reason\":\"" + escape_quotes(message) + "\"}";
}

void throw_error(ErrorType type, std::weak_ptr<Module> module, uint32_t line, uint32_t column, string message) {
    throw std::runtime_error(create_error_message(type, module, line, column, message));
}

void PreciseErrorListener::syntaxError(antlr4::Recognizer *recognizer, 
                     antlr4::Token *offendingSymbol,
                     size_t line, 
                     size_t charPositionInLine,
                     const std::string &msg, 
                     std::exception_ptr e) {
        
        // 1. Cast to Parser to access ATN and Context
        auto *parser = dynamic_cast<antlr4::Parser *>(recognizer);
        if (!parser) return;

        // 2. Initialize the LL1Analyzer
        antlr4::atn::LL1Analyzer analyzer(parser->getInterpreter<antlr4::atn::ParserATNSimulator>()->atn);
        
        // 3. Get the expected tokens for the CURRENT state and context
        // This gives you precisely what the parser could have accepted next
        antlr4::misc::IntervalSet expected = analyzer.LOOK(
            parser->getInterpreter<antlr4::atn::ParserATNSimulator>()->atn.states[parser->getState()], 
            parser->getContext()
        );

        // 4. Format the output using the parser's vocabulary
        std::string expectedStr = expected.toString(parser->getVocabulary());
        
        std::cerr << "Syntax Error at " << line << ":" << charPositionInLine << std::endl;
        std::cerr << "  Expected one of: " << expectedStr << std::endl;
        std::cerr << "  Actual token: '" << offendingSymbol->getText() << "'" << std::endl;
    }