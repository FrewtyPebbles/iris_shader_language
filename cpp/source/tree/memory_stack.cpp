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

MemoryBlock::MemoryBlock(std::weak_ptr<Module> module, bool mangle_names, std::optional<std::weak_ptr<MemoryBlock>> parent)
: module(module), mangle_names(mangle_names), parent(parent) {}

void MemoryBlock::define(std::shared_ptr<Label> label, std::weak_ptr<BaseType> type, std::function<string()> compile_function = nullptr) {
    if (compile_function == nullptr) {
        compile_function = [label]() -> string {
            return label->value;
        };
    }
    if (mangle_names) {
        auto mangle_count_cpy = mangle_count;
        compile_function = [label, compile_function, mangle_count_cpy]() -> string {
            return compile_function() + "_MANGLE_" + std::to_string(mangle_count_cpy);
        };
        mangle_count++;
    }
    memory.insert_or_assign(label->value, std::make_shared<LabelDefinition>(module, label, type.lock()->name->value, compile_function));
}

void MemoryBlock::define_alias(std::weak_ptr<Label> alias_label, std::weak_ptr<Label> existing_label) {
    std::weak_ptr<MemoryBlock> current_memory_block = weak_from_this();
    std::shared_ptr<MemoryBlock> current_memory_block_lock;
    while (true) {
        current_memory_block_lock = current_memory_block.lock();
        if (current_memory_block_lock->is_defined(existing_label)) {
            auto existing = current_memory_block_lock->get(existing_label).lock();
            memory.insert_or_assign(alias_label.lock()->value, existing);
        } else if (current_memory_block_lock->parent.has_value()) {
            current_memory_block = current_memory_block_lock->parent.value();
        } else
            break;
    }
    throw std::runtime_error("Failed to find an existing definition for the alias \"" + alias_label.lock()->value + "\" named \"" + existing_label.lock()->value + "\".");
}

bool MemoryBlock::is_defined(std::weak_ptr<Label> label) {
    return memory.contains(label.lock()->value);
}

std::weak_ptr<LabelDefinition> MemoryBlock::get(std::weak_ptr<Label> label) {
    if (is_defined(label))
        return memory.at(label.lock()->value);
    
    auto module_handle = module.lock();
    throw_error(ErrorType::DEFINITION_ERROR, module_handle, label.lock()->line_number, label.lock()->column_number, "Label \"" + label.lock()->value + "\" was not defined in this scope.");
}

void MemoryStack::init(std::weak_ptr<Module> module_) {
    module = module_;
    auto module_handle = module.lock();
    stack_push(false);

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "none")));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "bool")));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "float")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "int")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "uint")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "struct")));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "vector2")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "vector3")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "vector4")));

    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "matrix2x2")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "matrix3x3")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "matrix4x4")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "matrix2x3")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "matrix3x2")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "matrix4x2")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "matrix2x4")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "matrix3x4")));
    define_type(std::make_shared<Type>(module_handle, std::make_shared<Label>(module_handle, "matrix4x3")));
}

void MemoryStack::stack_push(bool mangle_names) {
    auto block = std::make_shared<MemoryBlock>(module, mangle_names, local_memory);
    local_memory.lock()->child = block;
    local_memory = block;
}

void MemoryStack::stack_pop() {
    auto old_memory = local_memory.lock();
    if (old_memory->parent.has_value()) {
        local_memory = old_memory->parent.value();
        local_memory.lock()->child = nullptr;
    } else {
        throw std::runtime_error("Attempted to pop the global memory block.");
    }
}

void MemoryStack::define(std::shared_ptr<Label> label, std::weak_ptr<BaseType> type, std::function<string()> compile_function) {
    local_memory.lock()->define(label, type, compile_function);
}
void MemoryStack::define_alias(std::weak_ptr<Label> alias_label, std::weak_ptr<Label> existing_label) {
    local_memory.lock()->define_alias(alias_label, existing_label);
}

void MemoryStack::define_type(std::shared_ptr<BaseType> type) {
    type_lookup.insert_or_assign(type->name->value, type);
}

bool MemoryStack::is_defined(std::weak_ptr<Label> label) {
    // reverse itterate through linked list
    std::optional<std::weak_ptr<MemoryBlock>> current_parent = local_memory;
    std::shared_ptr<MemoryBlock> current_parent_lock;
    while (current_parent.has_value()) {
        current_parent_lock = current_parent.value().lock();
        if (current_parent_lock->is_defined(label))
            return true;
        else
            current_parent = current_parent_lock->parent;
    }
    return false;
}

std::weak_ptr<LabelDefinition> MemoryStack::get(std::weak_ptr<Label> label) {
    // reverse itterate through linked list
    std::optional<std::weak_ptr<MemoryBlock>> current_parent = local_memory;
    std::shared_ptr<MemoryBlock> current_parent_lock;
    while (current_parent.has_value()) {
        current_parent_lock = current_parent.value().lock();
        if (current_parent_lock->is_defined(label)) {
            return current_parent_lock->get(label);
        } else
            current_parent = current_parent_lock->parent;
    }
    auto module_handle = module.lock();
    throw_error(ErrorType::DEFINITION_ERROR, module_handle, 0, 0, "Label \"" + label.lock()->value + "\" was not defined in this scope.");
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
    auto label_lock = label.lock();
    throw_error(ErrorType::TYPE_ERROR, module_handle, label_lock->line_number, label_lock->column_number, "Type \"" + label_lock->value + "\" was not defined.");
}

std::weak_ptr<BaseType> MemoryStack::get_type(string label) {
    auto module_lock = module.lock();
    if (type_is_defined(label))
        return type_lookup.at(label);
    throw_error(ErrorType::TYPE_ERROR, module_lock, 0, 0, "Type \"" + label + "\" was not defined.");
}

string MemoryStack::compile_label(std::weak_ptr<Label> label) {
    // reverse itterate through linked list
    std::optional<std::weak_ptr<MemoryBlock>> current_parent = local_memory;
    std::shared_ptr<MemoryBlock> current_parent_lock;
    while (current_parent.has_value()) {
        current_parent_lock = current_parent.value().lock();
        if (current_parent_lock->is_defined(label)) {
            return current_parent_lock->get(label).lock()->compile();
        } else
            current_parent = current_parent_lock->parent;
    }
    auto module_handle = module.lock();
    auto label_lock = label.lock();
    throw_error(ErrorType::DEFINITION_ERROR, module_handle, label_lock->line_number, label_lock->column_number, "Label \"" + label_lock->value + "\" was not defined in this scope.");
}