#pragma once
#include "tree/expression.h"

class BaseType;

class Cast : public Expression {
public:
    Cast(std::weak_ptr<Module> module, std::shared_ptr<Expression> expression, std::shared_ptr<BaseType> casting_type);

    std::shared_ptr<Expression> expression;
    std::shared_ptr<BaseType> casting_type;

    string compile() override;
    std::weak_ptr<BaseType> type() override;
};