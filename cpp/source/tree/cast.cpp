#include "tree/cast.h"
#include "tree/_type.h"

Cast::Cast(std::shared_ptr<Module> module, std::shared_ptr<Expression> expression, std::shared_ptr<BaseType> casting_type)
: Expression(module), expression(expression), casting_type(casting_type) {}

string Cast::compile() {
    if (auto type_type = std::dynamic_pointer_cast<Type>(casting_type)) {
        // todo: add cast operator implementation for classes to enable converting class types;
        return 
            type_type->compile_type_no_precision() + "(" + expression->compile() + ")";
    }
    else if (auto type_tuple = std::dynamic_pointer_cast<TypeTuple>(casting_type)) {
        throw std::runtime_error("Cannot cast expression to tuple.");
    }
}

std::shared_ptr<BaseType> Cast::type() {
    return casting_type;
}