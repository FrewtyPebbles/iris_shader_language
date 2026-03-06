#include "tree/index_operator.h"
#include "tree/_type.h"

IndexOperator::IndexOperator(std::shared_ptr<Module> module, std::shared_ptr<Expression> expression, std::shared_ptr<Expression> index)
: Expression(module), expression(expression), index(index) {}

string IndexOperator::compile() {
    string ret = expression->compile() + "[" + index->compile() + "]";
    return ret;
}

std::shared_ptr<BaseType> IndexOperator::type() {
    return expression->type()->dimension_reduced();
}