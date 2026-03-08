#include "tree/unary_operator.h"
#include "tree/module.h"
#include "errors.h"

UnaryOperator::UnaryOperator(std::weak_ptr<Module> module, string op, std::shared_ptr<Expression> expression)
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

std::weak_ptr<BaseType> UnaryOperator::type() {
    if (
        op == "+" || op == "-" || op == "bits_not"
     || op == "norm:" || op == "inv:" || op == "trans:"
     || op == "deg:" || op == "rad:") {
        return expression->type().lock();
    } else if (op == "not") {
        return module.lock()->memory_stack->get_type("bool");
    } else if (op == "det:") {
        auto exp_type_lock = expression->type().lock();
        if (auto type_type = std::dynamic_pointer_cast<Type>(exp_type_lock)) {
            auto precision = type_type->precision;
            auto module_lock = module.lock();
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
        throw_error(ErrorType::LOGIC_ERROR, module, line_number, column_number, "Tuple cannot be used in unary operation \"det:\".");
    }
}