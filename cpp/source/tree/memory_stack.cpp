#include "tree/memory_stack.h"
#include "tree/_type.h"
#include "tree/module.h"
#include <iostream>

LabelDefinition::LabelDefinition(MemoryStack* memory_stack, string label, string type_name, std::function<string()> compile_function)
: memory_stack(memory_stack), label(label), type_name(type_name), compile_function(compile_function) {}

std::shared_ptr<BaseType> LabelDefinition::type() {
    if (memory_stack->type_is_defined(type_name)) {
        return memory_stack->get_type(type_name);
    }
    throw std::runtime_error("Type \"" + type_name + "\" is not defined.");
}

string LabelDefinition::compile() {
    return compile_function();
}

MemoryStack::MemoryStack(std::shared_ptr<Module> module)
: module(module) {
    stack_push();
    define_type(std::make_shared<Type>(module, "f8", "lp"));
    define_type(std::make_shared<Type>(module, "f16", "mp"));
    define_type(std::make_shared<Type>(module, "f32", "hp"));

    define_type(std::make_shared<Type>(module, "u8", "lp"));
    define_type(std::make_shared<Type>(module, "u16", "mp"));
    define_type(std::make_shared<Type>(module, "u32", "hp"));

    define_type(std::make_shared<Type>(module, "i8", "lp"));
    define_type(std::make_shared<Type>(module, "i16", "mp"));
    define_type(std::make_shared<Type>(module, "i32", "hp"));

    define_type(std::make_shared<Type>(module, "vec2"));
    define_type(std::make_shared<Type>(module, "vec3"));
    define_type(std::make_shared<Type>(module, "vec4"));

    define_type(std::make_shared<Type>(module, "mat2"));
    define_type(std::make_shared<Type>(module, "mat3"));
    define_type(std::make_shared<Type>(module, "mat4"));
}

void MemoryStack::stack_push() {
    label_stack.push_back({});
}

void MemoryStack::stack_pop() {
    label_stack.pop_back();
}

void MemoryStack::define(string label, std::shared_ptr<BaseType> type, std::function<string()> compile_function) {
    if (compile_function == nullptr) {
        compile_function = [label]() -> string {
            return label;
        };
    }
    label_stack.back().insert_or_assign(label, std::make_shared<LabelDefinition>(this, label, type->name, compile_function));
}

void MemoryStack::define_type(std::shared_ptr<BaseType> type) {
    type_lookup.insert_or_assign(type->name, type);
}

bool MemoryStack::is_defined(string label) {
    for (auto level : label_stack) {
        if (level.contains(label))
            return true;
    }
    return false;
}

std::shared_ptr<LabelDefinition> MemoryStack::get(string label) {
    for (auto it = label_stack.rbegin(); it != label_stack.rend(); ++it) {
        if (it->contains(label))
            return it->at(label);
    }
    throw std::runtime_error("Label \"" + label + "\" was not defined in this scope.");
}

bool MemoryStack::type_is_defined(string label) {
    return type_lookup.contains(label);
}

std::shared_ptr<BaseType> MemoryStack::get_type(string label) {
    if (type_lookup.contains(label))
        return type_lookup.at(label);
    throw std::runtime_error("Type \"" + label + "\" was not defined.");
}

string MemoryStack::compile_label(string label) {
    for (auto it = label_stack.rbegin(); it != label_stack.rend(); ++it) {
        if (it->contains(label))
            return it->at(label)->compile();
    }
    throw std::runtime_error("Label \"" + label + "\" was not defined in this scope.");
}