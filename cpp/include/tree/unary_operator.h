#pragma once
#include "tree/expression.h"

class UnaryOperator : public Expression {
public:
    UnaryOperator(string op, std::shared_ptr<Expression> expression);

    string op;
    std::shared_ptr<Expression> expression;
    string compile() override;
};