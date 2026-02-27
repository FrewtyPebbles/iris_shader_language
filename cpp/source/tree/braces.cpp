#include "tree/braces.h"

Braces::Braces(std::shared_ptr<Expression> expression)
: expression(expression) {}

string Parentheses::compile() {
    return "(" + expression->compile() + ")";
}

string Magnitude::compile() {
    return "length(" + expression->compile() + ")";
}

string AbsoluteValue::compile() {
    return "abs(" + expression->compile() + ")";
}