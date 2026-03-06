#pragma once
#include "tree/expression.h"

class UnaryOperator : public Expression {
public:
    UnaryOperator(std::shared_ptr<Module> module, string op, std::shared_ptr<Expression> expression);
    string op;
    std::shared_ptr<Expression> expression;
    string compile() override;
    std::shared_ptr<BaseType> type() override;
};