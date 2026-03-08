#include "tree/getter.h"
#include "tree/primitive.h"
#include "tree/module.h"
#include "constants.h"
#include "errors.h"

Getter::Getter(std::weak_ptr<Module> module, std::shared_ptr<Expression> parent, std::shared_ptr<Primitive> child_label)
: Expression(module), parent(parent), child_label(child_label) {}

string Getter::compile() {
    if (auto label = std::dynamic_pointer_cast<Label>(parent)) {
        string base_name = label->value;
        if (base_name == "gl") {
            if (auto child_label_label = std::dynamic_pointer_cast<Label>(child_label)) {
                auto compiled_name = base_name + "_" + child_label_label->value;
                if (GLSL_BUILT_IN_VARIABLES.contains(compiled_name))
                    return compiled_name;
                else
                    throw_error(ErrorType::DEFINITION_ERROR, module, line_number, column_number, "\"" + child_label_label->value + "\" is not defined in namespace \"" + base_name + "\"");
            }
            throw_error(ErrorType::SYNTAX_ERROR, module, line_number, column_number, "The type \"" + child_label->type().lock()->name->value + "\" cannot be used to perform lookups in the namespace \"" + base_name + "\".");
        }
    }
    if (auto parent_type_lock = parent->type().lock()) {
        if (auto parent_tuple_type = std::dynamic_pointer_cast<TypeTuple>(parent_type_lock)) {
            if (auto child_label_integer = std::dynamic_pointer_cast<Integer>(child_label)) {
                return parent->compile() + "._" + child_label_integer->compile();
            } else {
                throw_error(ErrorType::SYNTAX_ERROR, module, line_number, column_number, "The type \"" + child_label->type().lock()->name->value + "\" cannot be used to perform namespace lookups in a tuple.");
            }
            
        }else if (auto parent_tuple_type = std::dynamic_pointer_cast<Type>(parent_type_lock)) {
            if (auto child_label_label = std::dynamic_pointer_cast<Label>(child_label)) {
                return parent->compile() + "." + child_label_label->compile();
            } else {
                throw_error(ErrorType::SYNTAX_ERROR, module, line_number, column_number, "The type \"" + child_label->type().lock()->name->value + "\" cannot be used to perform namespace lookups in this type.");
            }
        }
    } else {
        throw std::runtime_error("Unable to get parent type, please make a github issue.");
    }

    return parent->compile() + "." + child_label->compile();
}

std::weak_ptr<BaseType> Getter::type() {
    if (auto parent_type_lock = parent->type().lock()) {
        if (auto child_label_label = std::dynamic_pointer_cast<Label>(child_label)) {
            return parent_type_lock->members.at(child_label_label->compile());
        } else if (auto child_label_integer = std::dynamic_pointer_cast<Integer>(child_label)) {
            return parent_type_lock->members.at(child_label_integer->compile());
        } else {
            throw_error(ErrorType::SYNTAX_ERROR, module, line_number, column_number, "The type \"" + child_label->type().lock()->name->value + "\" cannot be used to perform namespace lookups.");
        }
    } else {
        throw std::runtime_error("Unable to get parent type, please make a github issue.");
    }
}