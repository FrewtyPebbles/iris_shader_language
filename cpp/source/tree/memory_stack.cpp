#include "tree/memory_stack.h"
#include "tree/_type.h"
#include "tree/module.h"
#include "tree/primitive.h"
#include <iostream>
#include "errors.h"

LabelDefinition::LabelDefinition(MemoryStack* memory_stack, std::shared_ptr<Label> label, string type_name, std::function<string()> compile_function)
: memory_stack(memory_stack), label(label), type_name(type_name), compile_function(compile_function) {}

std::shared_ptr<BaseType> LabelDefinition::type() {
    return memory_stack->get_type(type_name);
}

string LabelDefinition::compile() {
    return compile_function();
}

void MemoryStack::init(std::shared_ptr<Module> module_) {
    module = module_;
    stack_push();
    std::cout << "DEFINING TYPES!\n"; 
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "f8"), "lp"));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "f16"), "mp"));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "f32"), "hp"));

    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "u8"), "lp"));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "u16"), "mp"));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "u32"), "hp"));

    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "i8"), "lp"));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "i16"), "mp"));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "i32"), "hp"));

    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "vec2")));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "vec3")));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "vec4")));

    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "mat2")));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "mat3")));
    define_type(std::make_shared<Type>(module, std::make_shared<Label>(module, "mat4")));
}

void MemoryStack::stack_push() {
    label_stack.push_back({});
}

void MemoryStack::stack_pop() {
    label_stack.pop_back();
}

void MemoryStack::define(std::shared_ptr<Label> label, std::shared_ptr<BaseType> type, std::function<string()> compile_function) {
    if (compile_function == nullptr) {
        compile_function = [label]() -> string {
            return label->value;
        };
    }
    label_stack.back().insert_or_assign(label->value, std::make_shared<LabelDefinition>(this, label, type->name->value, compile_function));
}

void MemoryStack::define_type(std::shared_ptr<BaseType> type) {
    type_lookup.insert_or_assign(type->name->value, type);
}

bool MemoryStack::is_defined(std::shared_ptr<Label> label) {
    for (auto level : label_stack) {
        if (level.contains(label->value))
            return true;
    }
    return false;
}

std::shared_ptr<LabelDefinition> MemoryStack::get(std::shared_ptr<Label> label) {
    for (auto it = label_stack.rbegin(); it != label_stack.rend(); ++it) {
        if (it->contains(label->value))
            return it->at(label->value);
    }
    throw_error(ErrorType::DEFINITION_ERROR, module, 0, 0, "Label \"" + label->value + "\" was not defined in this scope.");
}

bool MemoryStack::type_is_defined(std::shared_ptr<Label> label) {
    return type_lookup.contains(label->value);
}

bool MemoryStack::type_is_defined(string label) {
    return type_lookup.contains(label);
}

std::shared_ptr<BaseType> MemoryStack::get_type(std::shared_ptr<Label> label) {
    if (type_is_defined(label))
        return type_lookup.at(label->value);
    throw_error(ErrorType::TYPE_ERROR, module, label->line_number, label->column_number, "Type \"" + label->value + "\" was not defined.");
}

std::shared_ptr<BaseType> MemoryStack::get_type(string label) {
    printf("Looking up type: %s\n", label.c_str());
    if (!module) {
        printf("CRITICAL: Module is null in get_type!\n");
    }
    if (type_is_defined(label))
        return type_lookup.at(label);
    printf("Type error triggered\n");
    throw_error(ErrorType::TYPE_ERROR, module, 0, 0, "Type \"" + label + "\" was not defined.");
}

string MemoryStack::compile_label(std::shared_ptr<Label> label) {
    for (auto it = label_stack.rbegin(); it != label_stack.rend(); ++it) {
        if (it->contains(label->value))
            return it->at(label->value)->compile();
    }
    throw_error(ErrorType::DEFINITION_ERROR, module, label->line_number, label->column_number, "Label \"" + label->value + "\" was not defined in this scope.");
}