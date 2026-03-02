#include "tree/module.h"
#include "tree/statement.h"
#include "tree/function_definition.h"
#include <iostream>

Module::Module(string name, std::shared_ptr<VirtualModuleGroup> parent)
: name(name), parent(parent) {}

string Module::mangle_name(string label_name) {
    if (label_name == "main")
        return label_name;
    return name + "_" + label_name;
}

std::shared_ptr<Module> Module::create_shared(string name, std::shared_ptr<VirtualModuleGroup> parent) {
    return std::make_shared<Module>(name, parent);
}

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