#include "tree/return.h"
#include "tree/_type.h"
#include "tree/function_definition.h"
#include "errors.h"

Return::Return(std::shared_ptr<Module> module, std::shared_ptr<Expression> expression, std::shared_ptr<FunctionDefinition> calling_function)
: Expression(module), expression(expression), calling_function(calling_function) {}

string Return::compile() {
    if (expression->type()->compile() != calling_function->return_type->compile()) {
        throw_error(ErrorType::TYPE_ERROR, module, line_number, column_number, "return statement type\"" + expression->type()->name->value + "\" does not match function return type \"" + calling_function->return_type->name->value + "\"");
    }

    string ret = "return";
    if (expression)
        ret += " " + expression->compile();
    return ret;
}

std::shared_ptr<BaseType> Return::type() {
    if (expression)
        return expression->type();
    else
        return module->memory_stack.get_type("none");
}

