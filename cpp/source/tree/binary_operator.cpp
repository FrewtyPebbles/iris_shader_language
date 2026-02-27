#include "tree/binary_operator.h"

BinaryOperator::BinaryOperator(std::shared_ptr<Expression> lhs, string op, std::shared_ptr<Expression> rhs)
: lhs(lhs), op(op), rhs(rhs) {}

string BinaryOperator::compile() {
    if (op == "=") {
        return lhs->compile() + " = " + rhs->compile();
    } else if (op == "*=") {
        return lhs->compile() + " *= " + rhs->compile();
    } else if (op == "/=") {
        return lhs->compile() + " /= " + rhs->compile();
    } else if (op == "%=") {
        return lhs->compile() + " %= " + rhs->compile();
    } else if (op == "\'=") {
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
    } else if (op == "\'") {
        return "dot(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "><") {
        return "cross(" + lhs->compile() + "," + rhs->compile() + ")";
    } else if (op == "<->") {
        return "distance(" + lhs->compile() + "," + rhs->compile() + ")";
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