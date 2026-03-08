#include "tree/module.h"
#include "tree/statement.h"
#include "tree/function_definition.h"
#include <iostream>

Module::Module(string name, std::optional<std::weak_ptr<VirtualModuleGroup>> parent)
: name(name), parent(parent) {}

string Module::mangle_name(string label_name) {
    if (label_name == "main")
        return label_name;
    return name + "_" + label_name;
}

std::shared_ptr<Module> Module::create_shared(string name, std::optional<std::weak_ptr<VirtualModuleGroup>> parent) {
    std::cout << name << "\n";
    auto mod = std::make_shared<Module>(name, parent);
    mod->memory_stack = std::make_shared<MemoryStack>();
    mod->memory_stack->init(mod);
    return mod;
}

string Module::compile() {
    std::cout << "COMPILING " << name << "\n";
    std::cout << "FUNCTIONS " << functions.size() << "\n";
    string ret = "#version 300 es\n";
    for (const auto& statement : statements) {
        ret += statement->compile();
    }
    for (const auto& [key, function] : function_dependencies) {
        auto function_lock = function.lock();
        if (key == "main") {
            function_lock->name->define(function_lock->return_type);
            continue;
        }
        ret += function_lock->compile_prototype();
    }
    for (const auto& [key, function] : functions) {
        if (key == "main") {
            function->name->define(function->return_type);
            continue;
        }
        ret += function->compile_prototype();
    }

    // compile the actual functions
    for (const auto& [key, function] : function_dependencies) {
        ret += function.lock()->compile();
    }
    for (const auto& [key, function] : functions) {
        ret += function->compile();
    }
    return ret;
}