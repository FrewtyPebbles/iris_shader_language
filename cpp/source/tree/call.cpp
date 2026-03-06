#include "tree/call.h"
#include "tree/module.h"
#include "error_listener.h"
#include "constants.h"

Call::Call(std::shared_ptr<Module> module, std::shared_ptr<Expression> function, vector<std::shared_ptr<Expression>> arguments, std::shared_ptr<FunctionDefinition> calling_function)
: Expression(module), function(function), arguments(arguments), calling_function(calling_function) {}

string Call::compile() {
    auto func_name = function->compile();
    // Check if function exists
    if (!calling_function->module->functions.contains(func_name) && !GLSL_BUILT_IN_FUNCTION_NAMES.contains(func_name)) {
        throw std::runtime_error(create_definition_error_message(line_number, column_number, "Could not find definition for the function \"" + func_name + "\""));
    }
    string ret = func_name + "(";
    if (arguments.size()) {
        ret += arguments[0]->compile();
        for (size_t i = 1; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += ")";
    return ret;
}

std::shared_ptr<BaseType> Call::type() {
    return function->type();
}