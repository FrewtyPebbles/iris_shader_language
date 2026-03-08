#include "tree/braces.h"
#include "tree/module.h"
#include "errors.h"

Braces::Braces(std::weak_ptr<Module> module, std::shared_ptr<Expression> expression)
: Expression(module), expression(expression) {}

string Parentheses::compile() {
    return "(" + expression->compile() + ")";
}

std::weak_ptr<BaseType> Parentheses::type() {
    return expression->type();
}

string Magnitude::compile() {
    return "length(" + expression->compile() + ")";
}

std::weak_ptr<BaseType> Magnitude::type() {
    auto exp_type = expression->type();
    if (auto exp_type_lock = exp_type.lock()) {
        auto module_lock = module.lock();
        if (auto type_type = std::dynamic_pointer_cast<Type>(exp_type_lock)) {
            auto precision = type_type->precision;
            if (precision) {
                if (precision == "lp") {
                    return module_lock->memory_stack->get_type("f8");
                } else if (precision == "mp") {
                    return module_lock->memory_stack->get_type("f16");
                } else if (precision == "hp") {
                    return module_lock->memory_stack->get_type("f32");
                }
            }
            return module_lock->memory_stack->get_type("f32");
        }
    } else {
        throw std::runtime_error("Expression is somehow null, this should not be possible, please create a github issue.");
    }
    throw_error(ErrorType::LOGIC_ERROR, module, line_number, column_number, "Tuple cannot be used in magnitude operation.");
}

string AbsoluteValue::compile() {
    return "abs(" + expression->compile() + ")";
}

std::weak_ptr<BaseType> AbsoluteValue::type() {
    return expression->type();
}