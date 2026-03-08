#pragma once
#include "tree/expression.h"
#include <vector>

using std::vector;

class IndexOperator : public Expression {
public:
    IndexOperator(std::weak_ptr<Module> module, std::shared_ptr<Expression> expression, std::shared_ptr<Expression> index);

    std::shared_ptr<Expression> expression;
    std::shared_ptr<Expression> index;

    string compile() override;
    std::weak_ptr<BaseType> type() override;
};