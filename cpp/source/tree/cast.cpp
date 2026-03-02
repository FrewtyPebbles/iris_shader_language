#include "tree/cast.h"
#include "tree/_type.h"

Cast::Cast(std::shared_ptr<Expression> expression, std::shared_ptr<Expression> type)
: expression(expression), type(type) {}

string Cast::compile() {
    return 
        static_cast<Type*>(type.get())->compile_type_no_precision() + "(" + expression->compile() + ")";
}