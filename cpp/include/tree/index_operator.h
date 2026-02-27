#pragma once
#include "tree/expression.h"
#include <vector>

using std::vector;

class IndexOperator : public Expression {
public:
    IndexOperator(std::shared_ptr<Expression> expression, vector<std::shared_ptr<Expression>> indices);

    std::shared_ptr<Expression> expression;
    vector<std::shared_ptr<Expression>> indices;

    string compile() override;
};