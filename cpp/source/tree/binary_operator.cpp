#include "tree/binary_operator.h"
#include "constants.h"
#include "tree/_type.h"
#include "tree/primitive.h"
#include "errors.h"

BinaryOperator::BinaryOperator(std::weak_ptr<Module> module, std::shared_ptr<Expression> lhs, string op, std::shared_ptr<Expression> rhs)
: Expression(module), lhs(lhs), op(op), rhs(rhs) {}

string BinaryOperator::compile() {
    auto assignment_type_check = [&]() {
        auto lhs_lock = lhs->type().lock();
        auto rhs_lock = rhs->type().lock();
        if (lhs_lock->name->value != rhs_lock->name->value) {
            throw_error(ErrorType::TYPE_ERROR, module, line_number, column_number, "Cannot assign value of type \"" + rhs_lock->name->value + "\" to variable of type \"" + lhs_lock->name->value + "\".");
        }
    };

    auto throw_cannot_perform = [&]() {
        // options is a set of conditions
        auto lhs_name = lhs->type().lock()->name->value;
        auto rhs_name = rhs->type().lock()->name->value;
        throw_error(ErrorType::TYPE_ERROR, module, line_number, column_number, "Cannot perform \"" + op + "\" between type \"" + rhs_name + "\" and type \"" + lhs_name + "\".");
    };
    
    if (op == "=") {
        assignment_type_check();
        return lhs->compile() + " = " + rhs->compile();
    } else if (op == "*=") {
        assignment_type_check();
        return lhs->compile() + " *= " + rhs->compile();
    } else if (op == "/=") {
        assignment_type_check();
        return lhs->compile() + " /= " + rhs->compile();
    } else if (op == "%=") {
        assignment_type_check();
        return lhs->compile() + " %= " + rhs->compile();
    } else if (op == "><=") {
        assignment_type_check();
        return lhs->compile() + "=cross(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "+=") {
        assignment_type_check();
        return lhs->compile() + "+=" + rhs->compile();
    } else if (op == "-=") {
        assignment_type_check();
        return lhs->compile() + "-=" + rhs->compile();
    } else if (op == "bits_left=") {
        assignment_type_check();
        return lhs->compile() + "<<=" + rhs->compile();
    } else if (op == "bits_right=") {
        assignment_type_check();
        return lhs->compile() + ">>=" + rhs->compile();
    } else if (op == "bits_and=") {
        assignment_type_check();
        return lhs->compile() + "&=" + rhs->compile();
    } else if (op == "bits_xor=") {
        assignment_type_check();
        return lhs->compile() + "^=" + rhs->compile();
    } else if (op == "bits_or=") {
        assignment_type_check();
        return lhs->compile() + "|=" + rhs->compile();
    } else if (op == "and=") {
        assignment_type_check();
        return lhs->compile() + "=" + lhs->compile() + "&&" + rhs->compile();
    } else if (op == "or=") {
        assignment_type_check();
        return lhs->compile() + "=" + lhs->compile() + "||" + rhs->compile();
    } else if (op == "^=") {
        assignment_type_check();
        return lhs->compile() + "=pow(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "^") {
        return "pow(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "*") {
        return lhs->compile() + "*" + rhs->compile();
    } else if (op == "/") {
        return lhs->compile() + "/" + rhs->compile();
    } else if (op == "%") {
        return lhs->compile() + "%" + rhs->compile();
    } else if (op == "+") {
        return lhs->compile() + "+" + rhs->compile();
    } else if (op == "-") {
        return lhs->compile() + "-" + rhs->compile();
    } else if (op == "==") {
        return lhs->compile() + "==" + rhs->compile();
    } else if (op == "<=") {
        return lhs->compile() + "<=" + rhs->compile();
    } else if (op == ">=") {
        return lhs->compile() + ">=" + rhs->compile();
    } else if (op == "<") {
        return lhs->compile() + "<" + rhs->compile();
    } else if (op == ">") {
        return lhs->compile() + ">" + rhs->compile();
    } else if (op == "@") {
        return "dot(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "><") {
        return "cross(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "and") {
        return lhs->compile() + "&&" + rhs->compile();
    } else if (op == "or") {
        return lhs->compile() + "||" + rhs->compile();
    } else if (op == "bits_left") {
        return lhs->compile() + "<<" + rhs->compile();
    } else if (op == "bits_right") {
        return lhs->compile() + ">>" + rhs->compile();
    } else if (op == "bits_and") {
        return lhs->compile() + "&" + rhs->compile();
    } else if (op == "bits_or") {
        return lhs->compile() + "|" + rhs->compile();
    } else if (op == "bits_xor") {
        return lhs->compile() + "^" + rhs->compile();
    }
}

string precision_size(std::weak_ptr<Type> type) {
    if (type.lock()->precision == "lp")
        return "8";
    else if (type.lock()->precision == "mp")
        return "16";
    else
        return "32";
}

std::weak_ptr<BaseType> BinaryOperator::type() {
    auto lhs_type = lhs->type();
    auto rhs_type = rhs->type();
    if (op == "@") {
        auto type = std::dynamic_pointer_cast<Type>(lhs_type.lock());
        return module.lock()->memory_stack->get_type("f" + precision_size(type));
    } else if (op == "*") {
        auto lhs_name = lhs_type.lock()->name;
        auto rhs_name = rhs_type.lock()->name;
        if (
            (
                lhs_name == "mat2" ||
                lhs_name == "mat3" ||
                lhs_name == "mat4" ||
                lhs_name == "vec2" ||
                lhs_name == "vec3" ||
                lhs_name == "vec4"
            ) && (
                rhs_name == "f8" ||
                rhs_name == "f16" ||
                rhs_name == "f32" ||
                rhs_name == "i8" ||
                rhs_name == "i16" ||
                rhs_name == "i32" ||
                rhs_name == "u8" ||
                rhs_name == "u16" ||
                rhs_name == "u32"
            )
        )
            return module.lock()->memory_stack->get_type(lhs_type.lock()->name);
        else if (
            (
                rhs_name == "mat2" ||
                rhs_name == "mat3" ||
                rhs_name == "mat4" ||
                rhs_name == "vec2" ||
                rhs_name == "vec3" ||
                rhs_name == "vec4"
            ) && (
                lhs_name == "f8" ||
                lhs_name == "f16" ||
                lhs_name == "f32" ||
                lhs_name == "i8" ||
                lhs_name == "i16" ||
                lhs_name == "i32" ||
                lhs_name == "u8" ||
                lhs_name == "u16" ||
                lhs_name == "u32"
            )
        )
            return module.lock()->memory_stack->get_type(rhs_type.lock()->name);
    }

    // Default type deriving behavior
    size_t lh_size = 0;
    size_t rh_size = 0;
    for (size_t i = 0; i < TYPES_BY_SIZE_ASCENDING.size(); ++i) {
        if (TYPES_BY_SIZE_ASCENDING[i] == lhs_type.lock()->name) {
            lh_size = i;
        }

        if (TYPES_BY_SIZE_ASCENDING[i] == rhs_type.lock()->name) {
            rh_size = i;
        }
    }

    if (lh_size >= rh_size) {
        return lhs_type;
    } else {
        return rhs_type;
    }
}