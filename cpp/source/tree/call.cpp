#include "tree/call.h"

Call::Call(std::shared_ptr<FunctionDefinition> function_definition, std::shared_ptr<Expression> function, vector<std::shared_ptr<Expression>> arguments)
: function_definition(function_definition), function(function), arguments(arguments) {}

string Call::compile() {
    string ret = function->compile() + "(";
    if (arguments.size()) {
        ret += arguments[0]->compile();
        for (size_t i = 1; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += ")";
    return ret;
}