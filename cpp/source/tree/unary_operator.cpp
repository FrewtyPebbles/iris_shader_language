#include "tree/unary_operator.h"

UnaryOperator::UnaryOperator(string op, std::shared_ptr<Expression> expression)
: op(op), expression(expression) {}

string UnaryOperator::compile() {
    if (op == "+") {
        return "+" + expression->compile();
    } else if (op == "-") {
        return "-" + expression->compile();
    } else if (op == "not") {
        return "!" + expression->compile();
    } else if (op == "bits_not") {
        return "~" + expression->compile();
    } else if (op == "norm") {
        return "normalize(" + expression->compile() + ")";
    } else if (op == "inv") {
        return "inverse(" + expression->compile() + ")";
    } else if (op == "trans") {
        return "transpose(" + expression->compile() + ")";
    } else if (op == "det") {
        return "determinant(" + expression->compile() + ")";
    } else if (op == "deg") {
        return "degrees(" + expression->compile() + ")";
    } else if (op == "rad") {
        return "radians(" + expression->compile() + ")";
    }
}