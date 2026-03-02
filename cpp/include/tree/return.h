#pragma once
#include "tree/expression.h"
#include <memory>
#include <optional>

class Return : public Expression {
public:
    Return(std::shared_ptr<Expression> expression = nullptr);
    std::shared_ptr<Expression> expression;
    string compile() override;
};