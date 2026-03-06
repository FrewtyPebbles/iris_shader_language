#include "tree/braces.h"
#include "tree/module.h"

Braces::Braces(std::shared_ptr<Module> module, std::shared_ptr<Expression> expression)
: Expression(module), expression(expression) {}

string Parentheses::compile() {
    return "(" + expression->compile() + ")";
}

std::shared_ptr<BaseType> Parentheses::type() {
    return expression->type();
}

string Magnitude::compile() {
    return "length(" + expression->compile() + ")";
}

std::shared_ptr<BaseType> Magnitude::type() {
    auto exp_type = expression->type();
    if (auto type_type = std::dynamic_pointer_cast<Type>(exp_type)) {
        auto precision = type_type->precision;
        if (precision) {
            if (precision == "lp") {
                return module->memory_stack->get_type("f8");
            } else if (precision == "mp") {
                return module->memory_stack->get_type("f16");
            } else if (precision == "hp") {
                return module->memory_stack->get_type("f32");
            }
        }
        return module->memory_stack->get_type("f32");
    }
    throw std::runtime_error("Tuple cannot be used in magnitude operation.");
}

string AbsoluteValue::compile() {
    return "abs(" + expression->compile() + ")";
}

std::shared_ptr<BaseType> AbsoluteValue::type() {
    return expression->type();
}