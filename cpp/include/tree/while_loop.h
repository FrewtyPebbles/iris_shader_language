#pragma once
#include <string>
#include <memory>
#include "tree/language_node.h"
#include "tree/expression.h"
#include <vector>

using std::string;
using std::vector;

class Statement;

class WhileLoop : public LanguageNode {
public:
    WhileLoop(
        std::weak_ptr<Module> module, std::shared_ptr<Expression> expression,
        vector<std::shared_ptr<LanguageNode>> body = {}
    );

    std::shared_ptr<Expression> expression;
    vector<std::shared_ptr<LanguageNode>> body;
    
    string compile() override;
};