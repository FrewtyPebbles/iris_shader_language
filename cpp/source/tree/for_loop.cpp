#include "tree/for_loop.h"
#include "tree/statement.h"

ForCLoop::ForCLoop(
    std::shared_ptr<Module> module,
    std::shared_ptr<Declaration> declaration,
    std::shared_ptr<Expression> condition,
    std::shared_ptr<Expression> expression,
    vector<std::shared_ptr<Statement>> body
) : module(module), declaration(declaration), condition(condition),
expression(expression), body(body) {}

string ForCLoop::compile() {
    string ret = "for(" + declaration->compile() + ";" + condition->compile() + ";" + expression->compile() + "){";
    module->memory_stack.stack_push();
    for (auto statement : body) {
        ret += statement->compile();
    }
    module->memory_stack.stack_pop();
    ret += "}";
    return ret;
}

ForInLoop::ForInLoop(
    std::shared_ptr<Module> module,
    std::shared_ptr<UnpackingList> unpacking_list,
    std::shared_ptr<Expression> expression,
    vector<std::shared_ptr<Statement>> body
) : module(module), unpacking_list(unpacking_list), expression(expression), body(body) {}

string ForInLoop::compile() {
    string ret = unpacking_list->compile_declarations() + "for([NOT YET IMPLEMENTED]){";
    module->memory_stack.stack_push();
    unpacking_list->compile();
    for (auto statement : body) {
        ret += statement->compile();
    }
    module->memory_stack.stack_pop();
    ret += "}";
    return ret;
}