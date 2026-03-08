#include "tree/declaration.h"
#include "tree/_type.h"
#include "tree/descriptor.h"

Declaration::Declaration(std::weak_ptr<Module> module, std::vector<std::shared_ptr<Descriptor>> descriptors, std::shared_ptr<Label> label, std::shared_ptr<BaseType> variable_type, std::shared_ptr<Expression> assignment)
: Expression(module), descriptors(descriptors), label(label), variable_type(variable_type), assignment(assignment) {}

string Declaration::compile() {
    
    string ret;
    bool use_eq_tok = true;
    for (const auto & descriptor : descriptors) {
        ret += descriptor->compile() + " ";
        if (descriptor->name == "def")
            use_eq_tok = false;
    }
    if (variable_type)
        ret += variable_type->compile() + " ";
    label->define(variable_type);
    ret += label->compile() + variable_type->compile_array_dimensions();
    if (assignment) {
        if (use_eq_tok)
            ret += "=";
        else
            ret += " ";
        ret += assignment->compile();
    }
    return ret;
}

string Declaration::compile_no_assignment() {
    string ret;
    bool use_eq_tok = true;
    for (const auto & descriptor : descriptors) {
        ret += descriptor->compile() + " ";
        if (descriptor->name == "def")
            use_eq_tok = false;
    }
    if (variable_type)
        ret += variable_type->compile() + " ";
    label->define(variable_type);
    ret += label->compile() + variable_type->compile_array_dimensions();
    return ret;
}

std::weak_ptr<BaseType> Declaration::type() {
    return variable_type;
}