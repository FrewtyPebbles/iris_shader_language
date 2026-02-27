#pragma once
#include "tree/expression.h"
#include <memory>
#include <vector>
#include "tree/function_definition.h"

using std::vector;

class Call : public Expression {
public:
    Call(std::shared_ptr<FunctionDefinition> function_definition, std::shared_ptr<Expression> function, vector<std::shared_ptr<Expression>> arguments);
    std::shared_ptr<FunctionDefinition> function_definition;
    std::shared_ptr<Expression> function;
    vector<std::shared_ptr<Expression>> arguments;
    string compile() override;
};