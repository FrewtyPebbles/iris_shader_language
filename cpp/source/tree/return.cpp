#include "tree/return.h"

Return::Return(std::shared_ptr<Expression> expression)
: expression(expression) {}

string Return::compile() {
    string ret = "return";
    if (expression)
        ret += " " + expression->compile();
    return ret;
}