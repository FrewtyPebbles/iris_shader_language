#pragma once
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include <memory>
#include "tree/_type.h"

using std::vector;
using std::unordered_map;
using std::string;

class MemoryStack;

class Module;

// This class is meant to keep track of variables on the stack
// so we can do cool preprocessor things like "for variable in expression" syntax!

class LabelDefinition {
public:
    LabelDefinition(MemoryStack* memory_stack, string label, string type_name, std::function<string()> compile_function = nullptr);
    MemoryStack* memory_stack;
    string label;
    std::function<string()> compile_function;

    std::shared_ptr<BaseType> type();

    // compile function
    string compile();
private:
    string type_name;
};

class MemoryStack {
public:
    MemoryStack(std::shared_ptr<Module> module);
    std::shared_ptr<Module> module;
    vector<unordered_map<string, std::shared_ptr<LabelDefinition>>> label_stack;
    unordered_map<string, std::shared_ptr<BaseType>> type_lookup;
    // This variable stack maps each variable to it's own "string compile()" function.
    // The default function just returns the label or string key.

    void stack_push();
    void stack_pop();
    void define(string label, std::shared_ptr<BaseType> type, std::function<string()> compile_function = nullptr);
    bool is_defined(string label);
    std::shared_ptr<LabelDefinition> get(string label);
    void define_type(std::shared_ptr<BaseType> type);
    bool type_is_defined(string label);
    std::shared_ptr<BaseType> get_type(string label);
    string compile_label(string label);
};