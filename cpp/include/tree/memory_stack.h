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
    LabelDefinition(std::weak_ptr<Module> module, std::shared_ptr<Label> label, string type_name, std::function<string()> compile_function = nullptr);
    std::weak_ptr<Module> module;
    std::shared_ptr<Label> label;
    std::function<string()> compile_function;

    std::weak_ptr<BaseType> type();

    // compile function
    string compile();
private:
    string type_name;
};

class MemoryStack {
public:
    MemoryStack() = default;
    void init(std::weak_ptr<Module> module_);
    std::weak_ptr<Module> module;
    vector<unordered_map<string, std::shared_ptr<LabelDefinition>>> label_stack = {{}};
    unordered_map<string, std::shared_ptr<BaseType>> type_lookup;
    // This variable stack maps each variable to it's own "string compile()" function.
    // The default function just returns the label or string key.

    void stack_push();
    void stack_pop();
    void define(std::shared_ptr<Label> label, std::weak_ptr<BaseType> type, std::function<string()> compile_function = nullptr);
    bool is_defined(std::weak_ptr<Label> label);
    std::weak_ptr<LabelDefinition> get(std::weak_ptr<Label> label);
    void define_type(std::shared_ptr<BaseType> type);
    bool type_is_defined(std::weak_ptr<Label> label);
    bool type_is_defined(string label);
    std::weak_ptr<BaseType> get_type(std::weak_ptr<Label> label);
    std::weak_ptr<BaseType> get_type(string label);
    string compile_label(std::weak_ptr<Label> label);
};