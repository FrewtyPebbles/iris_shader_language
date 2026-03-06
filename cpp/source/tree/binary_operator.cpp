#include "tree/binary_operator.h"
#include "constants.h"
#include "tree/_type.h"
#include "tree/primitive.h"

BinaryOperator::BinaryOperator(std::shared_ptr<Module> module, std::shared_ptr<Expression> lhs, string op, std::shared_ptr<Expression> rhs)
: Expression(module), lhs(lhs), op(op), rhs(rhs) {}

string BinaryOperator::compile() {
    if (op == "=") {
        return lhs->compile() + " = " + rhs->compile();
    } else if (op == "*=") {
        return lhs->compile() + " *= " + rhs->compile();
    } else if (op == "/=") {
        return lhs->compile() + " /= " + rhs->compile();
    } else if (op == "%=") {
        return lhs->compile() + " %= " + rhs->compile();
    } else if (op == "@=") {
        return lhs->compile() + "=dot(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "><=") {
        return lhs->compile() + "=cross(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "<->=") {
        return lhs->compile() + "=distance(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "+=") {
        return lhs->compile() + "+=" + rhs->compile();
    } else if (op == "-=") {
        return lhs->compile() + "+=" + rhs->compile();
    } else if (op == "bits_left=") {
        return lhs->compile() + "<<=" + rhs->compile();
    } else if (op == "bits_right=") {
        return lhs->compile() + ">>=" + rhs->compile();
    } else if (op == "bits_and=") {
        return lhs->compile() + "&=" + rhs->compile();
    } else if (op == "bits_xor=") {
        return lhs->compile() + "^=" + rhs->compile();
    } else if (op == "bits_or=") {
        return lhs->compile() + "|=" + rhs->compile();
    } else if (op == "and=") {
        return lhs->compile() + "=" + lhs->compile() + "&&" + rhs->compile();
    } else if (op == "or=") {
        return lhs->compile() + "=" + lhs->compile() + "||" + rhs->compile();
    } else if (op == "^=") {
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

std::shared_ptr<BaseType> BinaryOperator::type() {
    size_t lh_size = 0;
    size_t rh_size = 0;
    auto lhs_type = lhs->type();
    auto rhs_type = rhs->type();
    for (size_t i = 0; i < TYPES_BY_SIZE_ASCENDING.size(); ++i) {
        if (TYPES_BY_SIZE_ASCENDING[i] == lhs_type->name) {
            lh_size = i;
        }

        if (TYPES_BY_SIZE_ASCENDING[i] == rhs_type->name) {
            rh_size = i;
        }
    }

    if (lh_size >= rh_size) {
        return lhs_type;
    } else {
        return rhs_type;
    }
}