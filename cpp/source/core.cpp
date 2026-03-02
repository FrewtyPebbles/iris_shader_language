#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <sstream>
#include <stdexcept>

#include "antlr4-runtime.h"
#include "iris_grammarLexer.h"
#include "iris_grammarParser.h"
#include "error_listener.h"
#include "compile.h"
#include "virtual_module_group.h"

using namespace antlr4;

emscripten::val tokenize(std::string source) {
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

        js_array.call<void>("push", token->toString());
    }

    return js_array;
}

std::string compile(std::string module_name, std::string source) {
    ModuleCompiler m = ModuleCompiler();
    return m.compile(module_name, source, nullptr)->compile();
}

EMSCRIPTEN_BINDINGS(tokenizer_module) {
    emscripten::register_map<string, std::shared_ptr<Module>>("ModuleMap");
    emscripten::function("tokenize", &tokenize);
    emscripten::function("compile", &compile);
    emscripten::class_<VirtualModuleGroup>("VirtualModuleGroup")
        // Overload 1: 3 Arguments
        .smart_ptr<std::shared_ptr<VirtualModuleGroup>>("shared_ptr<VirtualModuleGroup>")
        .constructor(+[](string name, std::shared_ptr<VirtualModuleGroup> parent, unordered_map<string, std::shared_ptr<Module>> modules) {
            return VirtualModuleGroup::create_shared(name, parent, modules);
        })
        .constructor(+[](string name, std::shared_ptr<VirtualModuleGroup> parent) {
            return VirtualModuleGroup::create_shared(name, parent);
        })
        .constructor(+[](string name) {
            return VirtualModuleGroup::create_shared(name);
        })
        // Properties
        .property("name", &VirtualModuleGroup::name)
        
        // Methods (Overloaded methods need casting)
        .function("add_module", +[](std::shared_ptr<VirtualModuleGroup> self, std::shared_ptr<Module> module) {
            self->add(module);
        })
        .function("add_group", +[](std::shared_ptr<VirtualModuleGroup> self, std::shared_ptr<VirtualModuleGroup> group) {
            self->add(group);
        })
        .function("create_module", +[](std::shared_ptr<VirtualModuleGroup> self, string name, string source) {
            self->add(name, source);
        })
        .function("create_group", +[](std::shared_ptr<VirtualModuleGroup> self, string name) {
            self->add(name);
        })
        
        .function("remove_module", +[](std::shared_ptr<VirtualModuleGroup> self, string name) {
            self->remove_module(name);
        })
        .function("remove_group", +[](std::shared_ptr<VirtualModuleGroup> self, string name) {
            self->remove_group(name);
        })
        
        // See Note below on 'get' (std::variant)
        .function("get", +[](std::shared_ptr<VirtualModuleGroup> self, string next_path) {
            return self->get_js(next_path);
        });

    emscripten::class_<Module>("Module")
        .smart_ptr<std::shared_ptr<Module>>("shared_ptr<Module>")
        .constructor(+[](string name, std::shared_ptr<VirtualModuleGroup> parent) {
            return Module::create_shared(name, parent);
        })
        .constructor(+[](string name) {
            return Module::create_shared(name);
        })
        .property("name", &Module::name)
        .property("parent", &Module::parent)
        .function("compile", +[](std::shared_ptr<Module> self) {
            return self->compile();
        });

}