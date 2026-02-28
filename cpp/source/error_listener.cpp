#include "error_listener.h"

string create_syntax_error_message(uint32_t line, uint32_t char_pos, string message) {
    return "syntax_error|" +
        std::to_string(line) +
        ":" +
        std::to_string(char_pos) +
        "|" + message;
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