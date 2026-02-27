#pragma once
#include "tree/language_node.h"
#include "tree/function_definition.h"
#include <memory>
#include <optional>

class Expression;

class Statement : public LanguageNode {
public:
    Statement(std::shared_ptr<Expression> expression, std::optional<std::shared_ptr<FunctionDefinition>> function = std::nullopt);
    std::shared_ptr<Expression> expression;
    std::optional<std::shared_ptr<FunctionDefinition>> function;
    string compile() override;
};