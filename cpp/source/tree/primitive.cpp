#include "tree/primitive.h"

Primitive::Primitive(std::shared_ptr<Module> module)
: Expression(module) {}

Label::Label(std::shared_ptr<Module> module, string value)
: Primitive(module), value(value) {}

string Label::compile() {
    return module->memory_stack->compile_label(value);
}

void Label::define(std::shared_ptr<BaseType> type, std::function<string()> compile_function) {
    module->memory_stack->define(value, type, compile_function);
}

std::shared_ptr<LabelDefinition> Label::lookup() {
    return module->memory_stack->get(value);
}

std::shared_ptr<BaseType> Label::type() {
    return lookup()->type();
}

Integer::Integer(std::shared_ptr<Module> module, int64_t value)
: Primitive(module), value(value) {}

string Integer::compile() {
    return std::to_string(value);
}

std::shared_ptr<BaseType> Integer::type() {
    return module->memory_stack->get_type("i32");
}

string remove_trailing_zeros(string str) {
    if (str.find('.') != string::npos) {
        
        // Remove trailing zeros
        str.erase(str.find_last_not_of('0') + 1, string::npos);
        
        // If the decimal point is now the last character, remove it
        if (!str.empty() && str.back() == '.') {
            str.push_back('0');
        }
    }
    return str;
}

Float::Float(std::shared_ptr<Module> module, double value)
: Primitive(module), value(value) {}

string Float::compile() {
    return remove_trailing_zeros(std::to_string(value));
}

std::shared_ptr<BaseType> Float::type() {
    return module->memory_stack->get_type("f32");
}