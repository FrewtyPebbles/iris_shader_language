#pragma once
#include "tree/expression.h"
#include <memory>
#include <optional>

class FunctionDefinition;

class Return : public Expression {
public:
    Return(std::weak_ptr<Module> module, std::weak_ptr<FunctionDefinition> calling_function, std::shared_ptr<Expression> expression = nullptr);
    std::weak_ptr<FunctionDefinition> calling_function;
    std::shared_ptr<Expression> expression;
    string compile() override;
    std::weak_ptr<BaseType> type() override;
};