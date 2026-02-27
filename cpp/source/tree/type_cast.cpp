#include "tree/type_cast.h"
#include "tree/_type.h"

TypeCast::TypeCast(std::shared_ptr<Expression> expression, std::shared_ptr<Type> type)
: expression(expression), type(type) {}

string TypeCast::compile() {
    return type->compile() + "(" + expression->compile() + ")";
}