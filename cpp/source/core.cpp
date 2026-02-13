#include <emscripten/bind.h>
#include <emscripten/val.h>
#include "tokenizer.h"

emscripten::val tokenize(std::string str, size_t tab_size = 4) {
    auto list = Tokenizer::parse(str, tab_size);
    emscripten::val js_array = emscripten::val::array();
    for (const string tok : list)
        js_array.call<void>("push", tok);
    return js_array;
}

EMSCRIPTEN_BINDINGS(tokenizer_module) {
    emscripten::function("tokenize", &tokenize);
}