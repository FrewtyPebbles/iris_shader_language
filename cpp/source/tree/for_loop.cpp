#include "tree/for_loop.h"
#include "tree/statement.h"

ForCLoop::ForCLoop(
    std::weak_ptr<Module> module,
    std::shared_ptr<Declaration> declaration,
    std::shared_ptr<Expression> condition,
    std::shared_ptr<Expression> expression,
    vector<std::shared_ptr<LanguageNode>> body
) : LanguageNode(module), declaration(declaration), condition(condition),
expression(expression), body(body) {}

string ForCLoop::compile() {
    string ret = "for(" + declaration->compile() + ";" + condition->compile() + ";" + expression->compile() + "){";
    auto module_lock = module.lock();
    module_lock->memory_stack->stack_push();
    for (auto statement : body) {
        ret += statement->compile();
    }
    module_lock->memory_stack->stack_pop();
    ret += "}";
    return ret;
}

ForInLoop::ForInLoop(
    std::weak_ptr<Module> module,
    std::shared_ptr<UnpackingList> unpacking_list,
    std::shared_ptr<Expression> expression,
    vector<std::shared_ptr<LanguageNode>> body
) : LanguageNode(module), unpacking_list(unpacking_list), expression(expression), body(body) {}

string ForInLoop::compile() {
    string ret = unpacking_list->compile_declarations() + "for([NOT YET IMPLEMENTED]){";
    auto module_lock = module.lock();
    module_lock->memory_stack->stack_push();
    unpacking_list->compile();
    for (auto statement : body) {
        ret += statement->compile();
    }
    module_lock->memory_stack->stack_pop();
    ret += "}";
    return ret;
}