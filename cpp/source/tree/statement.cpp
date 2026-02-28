#include "tree/statement.h"
#include "tree/expression.h"

Statement::Statement(std::shared_ptr<Expression> expression, std::shared_ptr<FunctionDefinition> function)
: expression(expression), function(function) {}

string Statement::compile() {
    return expression->compile() + ";";
}