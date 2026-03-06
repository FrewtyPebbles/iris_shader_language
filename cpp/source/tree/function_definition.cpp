#include "tree/function_definition.h"
#include "tree/_type.h"
#include "tree/declaration.h"
#include "tree/statement.h"
#include <iostream>

FunctionDefinition::FunctionDefinition(
    std::shared_ptr<Module> module,
    std::shared_ptr<Label> name,
    vector<std::shared_ptr<Declaration>> arguments,
    std::shared_ptr<BaseType> return_type,
    vector<std::shared_ptr<Statement>> body
)
: module(module), name(name), arguments(arguments),
return_type(return_type), body(body) {}

FunctionDefinition::FunctionDefinition(const FunctionDefinition & src)
: module(src.module), name(src.name), arguments(src.arguments),
return_type(src.return_type), body(src.body), function_dependencies(src.function_dependencies) {}

std::shared_ptr<FunctionDefinition> FunctionDefinition::create_alias(string alias_name) {
    auto alias_function = std::make_shared<FunctionDefinition>(*this);
    alias_function->name = std::make_shared<Label>(module, alias_name);
    return alias_function;
}

string FunctionDefinition::compile() {
    string ret = return_type->compile() + " " + name->compile() + "(";
    if (arguments.size()) {
        ret += arguments[0]->compile();
        for (size_t i = 1; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += "){";
    module->memory_stack.stack_push();
    for (const auto & statement : body) {
        ret += statement->compile();
    }
    module->memory_stack.stack_pop();
    ret += "}";
    return ret;
}

string FunctionDefinition::compile_prototype() {
    name->define(return_type);
    string ret = return_type->compile() + " " + name->compile() + "(";
    if (arguments.size()) {
        ret += arguments[0]->compile();
        for (size_t i = 1; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += ");";
    return ret;
}