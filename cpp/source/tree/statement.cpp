#include "tree/statement.h"
#include "tree/expression.h"

Statement::Statement(std::weak_ptr<Module> module, std::shared_ptr<Expression> expression, std::optional<std::weak_ptr<FunctionDefinition>> function)
: LanguageNode(module), expression(expression), function(function) {}

Statement::Statement(std::weak_ptr<Module> module)
: LanguageNode(module), expression(nullptr), function(std::nullopt) {}

string Statement::compile() {
    auto compiled_expr = expression->compile();
    if (compiled_expr.starts_with("#"))
        return compiled_expr + "\n";
    else
        return compiled_expr + ";";
}