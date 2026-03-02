#pragma once
#include "tree/expression.h"

class Cast : public Expression {
public:
    Cast(std::shared_ptr<Expression> expression, std::shared_ptr<Expression> type);

    std::shared_ptr<Expression> expression;
    std::shared_ptr<Expression> type;

    string compile() override;
};