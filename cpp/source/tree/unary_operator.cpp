#include "tree/unary_operator.h"
#include "tree/module.h"

UnaryOperator::UnaryOperator(std::shared_ptr<Module> module, string op, std::shared_ptr<Expression> expression)
: Expression(module), op(op), expression(expression) {}

string UnaryOperator::compile() {
    if (op == "+") {
        return "+" + expression->compile();
    } else if (op == "-") {
        return "-" + expression->compile();
    } else if (op == "not") {
        return "!" + expression->compile();
    } else if (op == "bits_not") {
        return "~" + expression->compile();
    } else if (op == "norm:") {
        return "normalize(" + expression->compile() + ")";
    } else if (op == "inv:") {
        return "inverse(" + expression->compile() + ")";
    } else if (op == "trans:") {
        return "transpose(" + expression->compile() + ")";
    } else if (op == "det:") {
        return "determinant(" + expression->compile() + ")";
    } else if (op == "deg:") {
        return "degrees(" + expression->compile() + ")";
    } else if (op == "rad:") {
        return "radians(" + expression->compile() + ")";
    }
}

std::shared_ptr<BaseType> UnaryOperator::type() {
    if (
        op == "+" || op == "-" || op == "bits_not"
     || op == "norm:" || op == "inv:" || op == "trans:"
     || op == "deg:" || op == "rad:") {
        return expression->type();
    } else if (op == "not") {
        return module->memory_stack->get_type("bool");
    } else if (op == "det:") {
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
        throw std::runtime_error("Tuple cannot be used in unary operation \"det:\".");
    }
}