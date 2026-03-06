#pragma once
#include <string>
#include <memory>
#include "tree/language_node.h"
#include "tree/expression.h"
#include "tree/declaration.h"
#include <vector>
#include "tree/unpacking_list.h"

using std::string;
using std::vector;

class Statement;

class ForCLoop : public LanguageNode {
public:
    ForCLoop(
        std::shared_ptr<Module> module,
        std::shared_ptr<Declaration> declaration,
        std::shared_ptr<Expression> condition,
        std::shared_ptr<Expression> expression,
        vector<std::shared_ptr<Statement>> body = {}
    );

    std::shared_ptr<Module> module;
    std::shared_ptr<Declaration> declaration;
    std::shared_ptr<Expression> condition;
    std::shared_ptr<Expression> expression;
    vector<std::shared_ptr<Statement>> body;
    
    string compile() override;
};

class ForInLoop : public LanguageNode {
public:
    ForInLoop(
        std::shared_ptr<Module> module,
        std::shared_ptr<UnpackingList> unpacking_list,
        std::shared_ptr<Expression> expression,
        vector<std::shared_ptr<Statement>> body = {}
    );

    std::shared_ptr<Module> module;
    std::shared_ptr<UnpackingList> unpacking_list;
    std::shared_ptr<Expression> expression;
    vector<std::shared_ptr<Statement>> body;
    
    string compile() override;
};