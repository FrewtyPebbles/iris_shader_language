#include "tree/module.h"
#include "tree/statement.h"
#include "tree/function_definition.h"
#include <iostream>

Module::Module(string name)
: name(name) {}

string Module::compile() {
    string ret = "#version 300 es\n";
    for (const auto& statement : statements) {
        ret += statement->compile();
    }
    for (const auto& [key, function] : functions) {
        if (key == "main")
            continue;
        ret += function->compile_prototype();
    }
    for (const auto& [key, function] : functions) {
        ret += function->compile();
    }
    return ret;
}