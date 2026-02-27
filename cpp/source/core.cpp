#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <sstream>
#include <stdexcept>

#include "antlr4-runtime.h"
#include "iris_grammarLexer.h"
#include "iris_grammarParser.h"
#include "error_listener.h"

using namespace antlr4;

emscripten::val tokenize(std::string source, size_t tab_size = 4) {
    emscripten::val js_array = emscripten::val::array();

    ANTLRInputStream stream(source);
    iris_grammarLexer lexer(&stream);
    
    // We don't need a throwing listener anymore because 
    // the lexer won't "fail," it will just produce INVALID_CHAR tokens.
    lexer.removeErrorListeners();

    CommonTokenStream tokens(&lexer);
    tokens.fill(); 

    for (const auto token : tokens.getTokens()) {
        // Check if the token type matches our error rule
        if (token->getType() == iris_grammarLexer::ERROR_TOKEN) {
            emscripten::val error_obj = emscripten::val::object();
            
            std::string msg = "Unexpected character: '" + token->getText() + "'";
            error_obj.set("error", msg);
            error_obj.set("line", token->getLine());
            error_obj.set("column", token->getCharPositionInLine());
            
            return error_obj; // Return the error object to JS immediately
        }

        js_array.call<void>("push", token->getText());
    }

    return js_array;
}

EMSCRIPTEN_BINDINGS(tokenizer_module) {
    emscripten::function("tokenize", &tokenize);
}