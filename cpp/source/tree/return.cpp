#include "tree/return.h"
#include "tree/_type.h"
#include "tree/function_definition.h"

Return::Return(std::shared_ptr<Module> module, std::shared_ptr<Expression> expression, std::shared_ptr<FunctionDefinition> calling_function)
: Expression(module), expression(expression), calling_function(calling_function) {}

string Return::compile() {
    if (expression->type()->compile() != calling_function->return_type->compile()) {
        throw std::runtime_error("return statement type\"" + expression->type()->name + "\" does not match function return type \"" + calling_function->return_type->name + "\"");
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
        return module->memory_stack->get_type("none");
}

