#include "tree/statement.h"
#include "tree/expression.h"

Statement::Statement(std::shared_ptr<Expression> expression, std::shared_ptr<FunctionDefinition> function)
: expression(expression), function(function) {}

string Statement::compile() {
    auto compiled_expr = expression->compile();
    if (compiled_expr.starts_with("#"))
        return compiled_expr + "\n";
    else
        return compiled_expr + ";";
}