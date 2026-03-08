#include "tree/ternary.h"
#include "tree/_type.h"
#include "errors.h"

Ternary::Ternary(std::weak_ptr<Module> module, std::shared_ptr<Expression> condition, std::shared_ptr<Expression> condition_true, std::shared_ptr<Expression> condition_false)
: Expression(module), condition(condition), condition_true(condition_true), condition_false(condition_false) {}

string Ternary::compile() {
    if (condition_true->type().lock() != condition_false->type().lock()) {
        throw_error(ErrorType::TYPE_ERROR, module, line_number, column_number, "The return types of the ternary do not match.");
    }

    return condition->compile() + "?" + condition_true->compile() + ":" + condition_false->compile();
}

std::weak_ptr<BaseType> Ternary::type() {
    return condition_true->type();
}