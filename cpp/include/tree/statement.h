#pragma once
#include "tree/language_node.h"
#include "tree/function_definition.h"
#include <memory>
#include <optional>

class Expression;

class Statement : public LanguageNode {
public:
    Statement(std::weak_ptr<Module> module);
    Statement(std::weak_ptr<Module> module, std::shared_ptr<Expression> expression, std::optional<std::weak_ptr<FunctionDefinition>> function = std::nullopt);
    std::shared_ptr<Expression> expression;
    std::optional<std::weak_ptr<FunctionDefinition>> function;
    string compile() override;
};