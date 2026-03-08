#include "tree/primitive.h"

Primitive::Primitive(std::weak_ptr<Module> module)
: Expression(module) {}

Label::Label(std::weak_ptr<Module> module, string value)
: Primitive(module), value(value) {}

string Label::compile() {
    return module.lock()->memory_stack->compile_label(shared_from_this());
}

void Label::define(std::weak_ptr<BaseType> type, std::function<string()> compile_function) {
    module.lock()->memory_stack->define(shared_from_this(), type, compile_function);
}

std::weak_ptr<LabelDefinition> Label::lookup() {
    return module.lock()->memory_stack->get(shared_from_this());
}

std::weak_ptr<BaseType> Label::type() {
    return lookup().lock()->type();
}

bool operator==(const std::shared_ptr<Label>& lhs, const std::string& rhs) {
    return lhs->value == rhs; // Compare the internal string
}

// 2. Overload for: std::string == MyClass
bool operator==(const std::string& lhs, const std::shared_ptr<Label>& rhs) {
    return lhs == rhs->value; // Compare the internal string
}

Integer::Integer(std::weak_ptr<Module> module, int64_t value)
: Primitive(module), value(value) {}

string Integer::compile() {
    return std::to_string(value);
}

std::weak_ptr<BaseType> Integer::type() {
    return module.lock()->memory_stack->get_type("i32");
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

Float::Float(std::weak_ptr<Module> module, double value)
: Primitive(module), value(value) {}

string Float::compile() {
    return remove_trailing_zeros(std::to_string(value));
}

std::weak_ptr<BaseType> Float::type() {
    return module.lock()->memory_stack->get_type("f32");
}

Boolean::Boolean(std::weak_ptr<Module> module, bool value)
: Primitive(module), value(value) {}

string Boolean::compile() {
    return value ? "true" : "false";
}

std::weak_ptr<BaseType> Boolean::type() {
    return module.lock()->memory_stack->get_type("bool");
}