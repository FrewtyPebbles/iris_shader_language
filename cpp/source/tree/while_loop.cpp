#include "tree/while_loop.h"
#include "tree/statement.h"

WhileLoop::WhileLoop(std::weak_ptr<Module> module, std::shared_ptr<Expression> expression, vector<std::shared_ptr<LanguageNode>> body)
: LanguageNode(module), expression(expression), body(body) {}

string WhileLoop::compile() {
    string ret = "while(" + expression->compile() + "){";
    auto module_lock = module.lock();
    module_lock->memory_stack->stack_push();
    for (auto statement : body) {
        ret += statement->compile();
    }
    module_lock->memory_stack->stack_pop();
    ret += "}";
    return ret;
}

DoWhileLoop::DoWhileLoop(std::weak_ptr<Module> module, std::shared_ptr<Expression> expression, vector<std::shared_ptr<LanguageNode>> body)
: LanguageNode(module), expression(expression), body(body) {}

string DoWhileLoop::compile() {
    string ret = "do{";
    auto module_lock = module.lock();
    module_lock->memory_stack->stack_push();
    for (auto statement : body) {
        ret += statement->compile();
    }
    module_lock->memory_stack->stack_pop();
    ret += "}while(" + expression->compile() + ");";
    return ret;
}