#pragma once
#include <string>
#include <memory>
#include <unordered_set>
#include "tree/language_node.h"
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
        string name,
        vector<std::shared_ptr<Declaration>> arguments,
        std::shared_ptr<Type> return_type,
        vector<std::shared_ptr<Statement>> body
    );

    std::shared_ptr<Module> module;
    string name;
    vector<std::shared_ptr<Declaration>> arguments;
    std::shared_ptr<Type> return_type;
    vector<std::shared_ptr<Statement>> body;
    
    string compile() override;
    string compile_prototype();
private:

};