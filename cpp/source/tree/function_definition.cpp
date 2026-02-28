#include "tree/function_definition.h"
#include "tree/_type.h"
#include "tree/declaration.h"
#include "tree/statement.h"
#include <iostream>

FunctionDefinition::FunctionDefinition(
    std::shared_ptr<Module> module,
    string name,
    vector<std::shared_ptr<Declaration>> arguments,
    std::shared_ptr<Type> return_type,
    vector<std::shared_ptr<Statement>> body
)
: module(module), name(name), arguments(arguments), return_type(return_type), body(body) {}

string FunctionDefinition::compile() {
    string ret = return_type->compile() + " " + name + "(";
    if (arguments.size()) {
        ret += arguments[0]->compile();
        for (size_t i = 1; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += "){";
    for (const auto & statement : body) {
        ret += statement->compile();
    }
    ret += "}";
    return ret;
}

string FunctionDefinition::compile_prototype() {
    string ret = return_type->compile() + " " + name + "(";
    if (arguments.size()) {
        ret += arguments[0]->compile();
        for (size_t i = 1; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += ");";
    return ret;
}