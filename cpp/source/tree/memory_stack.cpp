#include "tree/memory_stack.h"
#include "tree/_type.h"
#include "tree/module.h"
#include "tree/primitive.h"
#include <iostream>
#include "errors.h"

LabelDefinition::LabelDefinition(std::weak_ptr<Module> module, std::shared_ptr<Label> label, string type_name, std::function<string()> compile_function)
: module(module), label(label), type_name(type_name), compile_function(compile_function) {}

std::weak_ptr<BaseType> LabelDefinition::type() {
    return module.lock()->memory_stack->get_type(type_name);
}

string LabelDefinition::compile() {
    return compile_function();
}


void MemoryStack::init(std::weak_ptr<Module> module_) {
    module = module_;
    auto module_handle = module.lock();
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "none")));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "bool")));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "f8"), "lp"));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "f16"), "mp"));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "f32"), "hp"));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "u8"), "lp"));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "u16"), "mp"));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "u32"), "hp"));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "i8"), "lp"));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "i16"), "mp"));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "i32"), "hp"));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "vec2")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "vec3")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "vec4")));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "mat2")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "mat3")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "mat4")));
}

void MemoryStack::stack_push() {
    label_stack.push_back({});
}

void MemoryStack::stack_pop() {
    label_stack.pop_back();
}

void MemoryStack::define(std::shared_ptr<Label> label, std::weak_ptr<BaseType> type, std::function<string()> compile_function) {
    if (compile_function == nullptr) {
        compile_function = [label]() -> string {
            return label->value;
        };
    }
    auto module_handle = module.lock();
    label_stack.back().insert_or_assign(label->value, std::make_shared<LabelDefinition>(module, label, type.lock()->name->value, compile_function));
}

void MemoryStack::define_type(std::shared_ptr<BaseType> type) {
    type_lookup.insert_or_assign(type->name->value, type);
}

bool MemoryStack::is_defined(std::weak_ptr<Label> label) {
    for (auto level : label_stack) {
        if (level.contains(label.lock()->value))
            return true;
    }
    return false;
}

std::weak_ptr<LabelDefinition> MemoryStack::get(std::weak_ptr<Label> label) {
    auto label_lock = label.lock();
    for (auto it = label_stack.rbegin(); it != label_stack.rend(); ++it) {
        if (it->contains(label_lock->value))
            return it->at(label_lock->value);
    }
    auto module_handle = module.lock();
    throw_error(ErrorType::DEFINITION_ERROR, module_handle, 0, 0, "Label \"" + label_lock->value + "\" was not defined in this scope.");
}

bool MemoryStack::type_is_defined(std::weak_ptr<Label> label) {
    return type_lookup.contains(label.lock()->value);
}

bool MemoryStack::type_is_defined(string label) {
    return type_lookup.contains(label);
}

std::weak_ptr<BaseType> MemoryStack::get_type(std::weak_ptr<Label> label) {
    auto label_lock = label.lock();
    if (type_is_defined(label))
        return type_lookup.at(label_lock->value);
    auto module_handle = module.lock();
    throw_error(ErrorType::TYPE_ERROR, module_handle, label_lock->line_number, label_lock->column_number, "Type \"" + label_lock->value + "\" was not defined.");
}

std::weak_ptr<BaseType> MemoryStack::get_type(string label) {
    auto module_lock = module.lock();
    if (type_is_defined(label))
        return type_lookup.at(label);
    throw_error(ErrorType::TYPE_ERROR, module_lock, 0, 0, "Type \"" + label + "\" was not defined.");
}

string MemoryStack::compile_label(std::weak_ptr<Label> label) {
    auto label_lock = label.lock();
    for (auto it = label_stack.rbegin(); it != label_stack.rend(); ++it) {
        if (it->contains(label_lock->value))
            return it->at(label_lock->value)->compile();
    }
    auto module_handle = module.lock();
    throw_error(ErrorType::DEFINITION_ERROR, module_handle, label_lock->line_number, label_lock->column_number, "Label \"" + label_lock->value + "\" was not defined in this scope.");
}