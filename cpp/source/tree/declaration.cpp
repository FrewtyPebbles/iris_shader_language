#include "tree/declaration.h"
#include "tree/_type.h"
#include "tree/descriptor.h"
#include "errors.h"

Declaration::Declaration(std::weak_ptr<Module> module, std::vector<std::shared_ptr<Descriptor>> descriptors, std::shared_ptr<Label> label, std::shared_ptr<BaseType> variable_type, std::shared_ptr<Expression> assignment)
: Expression(module), descriptors(descriptors), label(label), variable_type(variable_type), assignment(assignment) {}

bool Declaration::contains_descriptor(string descriptor) {
    for (auto current_descriptor : descriptors) {
        if (current_descriptor->name == descriptor)
            return true;
    }
    return false;
}


string Declaration::compile() {

    size_t mutation_descriptor_count = 0;
    for (auto descriptor : descriptors) {
        if (descriptor->name == "in" || descriptor->name == "out" || descriptor->name == "mut")
            mutation_descriptor_count++;
    }

    if (mutation_descriptor_count > 1) {
        throw_error(ErrorType::DEFINITION_ERROR, module, label->line_number, label->column_number, "The declaration for " + label->value + " cannot have more than one of the following descriptors: in, out, mut");
    }
    
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