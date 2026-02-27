#include "tree/module.h"
#include "tree/statement.h"
#include "tree/function_definition.h"

Module::Module(string name)
: name(name) {}

string Module::compile() {
    string ret = "#version 300 es\n";
    for (const auto& [key, function] : functions) {
        ret += function->compile_prototype();
    }
    for (const auto& statement : statements) {
        ret += statement->compile();
    }
    for (const auto& [key, function] : functions) {
        ret += function->compile();
    }
    return ret;
}