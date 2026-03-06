#pragma once
#include "tree/expression.h"
#include <memory>
#include <optional>

class FunctionDefinition;

class Return : public Expression {
public:
    Return(std::shared_ptr<Module> module, std::shared_ptr<Expression> expression = nullptr, std::shared_ptr<FunctionDefinition> calling_function = nullptr);
    std::shared_ptr<Expression> expression;
    std::shared_ptr<FunctionDefinition> calling_function;
    string compile() override;
    std::shared_ptr<BaseType> type() override;
};