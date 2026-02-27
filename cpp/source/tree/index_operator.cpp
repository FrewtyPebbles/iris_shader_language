#include "tree/index_operator.h"

IndexOperator::IndexOperator(std::shared_ptr<Expression> expression, vector<std::shared_ptr<Expression>> indices)
: expression(expression), indices(indices) {}

string IndexOperator::compile() {
    string ret = expression->compile();
    for (const auto & index : indices) {
        ret += "[" + index->compile() + "]";
    }
    return ret;
}