#pragma once
#include "tree/expression.h"
#include <memory>

class Type;

class TypeCast : public Expression {
public:
    TypeCast(std::shared_ptr<Expression> expression, std::shared_ptr<Type> type);
    std::shared_ptr<Type> type;
    std::shared_ptr<Expression> expression;
    string compile() override;
};