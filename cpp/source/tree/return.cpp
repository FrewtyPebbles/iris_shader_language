#include "tree/return.h"
#include "tree/_type.h"
#include "tree/function_definition.h"
#include "errors.h"

Return::Return(std::weak_ptr<Module> module, std::weak_ptr<FunctionDefinition> calling_function, std::shared_ptr<Expression> expression)
: Expression(module), calling_function(calling_function), expression(expression) {}

string Return::compile() {
    auto calling_function_lock = calling_function.lock();
    if (type().lock()->name->value != calling_function_lock->return_type->name->value)
        throw_error(ErrorType::TYPE_ERROR, module, line_number, column_number, "return statement type \"" + expression->type().lock()->name->value + "\" does not match function return type \"" + calling_function_lock->return_type->name->value + "\"");
    

    string ret = "return";
    if (expression)
        ret += " " + expression->compile();
    return ret;
}

std::weak_ptr<BaseType> Return::type() {
    if (expression)
        return expression->type();
    else
        return module.lock()->memory_stack->get_type("none");
}

