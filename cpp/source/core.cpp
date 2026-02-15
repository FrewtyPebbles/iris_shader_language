#include <emscripten/bind.h>
#include <emscripten/val.h>

#include "antlr4-runtime.h"
#include "iris_grammarLexer.h"
#include "iris_grammarParser.h"

using namespace antlr4;

emscripten::val tokenize(std::string source, size_t tab_size = 4) {
    emscripten::val js_array = emscripten::val::array();

    ANTLRInputStream input(source);

    iris_grammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        js_array.call<void>("push", token->getText());
    }

    iris_grammarParser parser(&tokens);

    tree::ParseTree* tree = parser.program(); // entry rule

    std::cout << tree->toStringTree(&parser) << std::endl;

    return js_array;
}

EMSCRIPTEN_BINDINGS(tokenizer_module) {
    emscripten::function("tokenize", &tokenize);
}