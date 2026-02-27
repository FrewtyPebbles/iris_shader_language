#pragma once
#include "tree/expression.h"

class BinaryOperator : public Expression {
public:
    BinaryOperator(std::shared_ptr<Expression> lhs, string op, std::shared_ptr<Expression> rhs);

    std::shared_ptr<Expression> lhs;
    string op;
    std::shared_ptr<Expression> rhs;

    string compile() override;
};