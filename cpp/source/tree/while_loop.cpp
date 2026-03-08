#include "tree/while_loop.h"
#include "tree/statement.h"

WhileLoop::WhileLoop(std::weak_ptr<Module> module, std::shared_ptr<Expression> expression, vector<std::shared_ptr<Statement>> body)
: LanguageNode(module), expression(expression), body(body) {}

string WhileLoop::compile() {
    string ret = "while(" + expression->compile() + "){";
    for (auto statement : body) {
        ret += statement->compile();
    }
    ret += "}";
    return ret;
}