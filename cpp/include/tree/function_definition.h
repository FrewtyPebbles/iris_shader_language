#pragma once
#include <string>
#include <memory>
#include <unordered_set>
#include "tree/language_node.h"
#include "tree/primitive.h"
#include <vector>
#include <unordered_set>

using std::string;
using std::vector;
using std::unordered_set;

class Module;
class ClassDefinition;
class Type;
class Declaration;
class Statement;

class FunctionDefinition : public LanguageNode {
public:

    FunctionDefinition(
        std::shared_ptr<Module> module,
        std::shared_ptr<Label> name,
        vector<std::shared_ptr<Declaration>> arguments,
        std::shared_ptr<BaseType> return_type,
        vector<std::shared_ptr<Statement>> body = {}
    );

    FunctionDefinition(const FunctionDefinition & src);

    std::shared_ptr<FunctionDefinition> create_alias(string alias_name);

    std::shared_ptr<Module> module;
    std::shared_ptr<Label> name;
    vector<std::shared_ptr<Declaration>> arguments;
    std::shared_ptr<BaseType> return_type;
    vector<std::shared_ptr<Statement>> body;

    unordered_set<std::shared_ptr<FunctionDefinition>> function_dependencies;
    
    string compile() override;
    string compile_prototype();
private:

};