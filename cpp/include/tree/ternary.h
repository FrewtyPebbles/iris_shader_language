#pragma once
#include "tree/expression.h"

class Ternary : public Expression {
public:
    Ternary(std::weak_ptr<Module> module, std::shared_ptr<Expression> condition, std::shared_ptr<Expression> condition_true, std::shared_ptr<Expression> condition_false);

    std::shared_ptr<Expression> condition;
    std::shared_ptr<Expression> condition_true;
    std::shared_ptr<Expression> condition_false;

    string compile() override;
    std::weak_ptr<BaseType> type() override;
};