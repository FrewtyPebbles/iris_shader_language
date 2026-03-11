#pragma once
#include <string>
#include <memory>
#include <unordered_set>
#include "tree/language_node.h"
#include "tree/primitive.h"
#include <vector>
#include <set>

using std::string;
using std::vector;

class Module;
class ClassDefinition;
class Type;
class Declaration;
class Statement;

class FunctionDefinition : public LanguageNode {
public:

    FunctionDefinition(
        std::weak_ptr<Module> module,
        std::shared_ptr<Label> name,
        vector<std::shared_ptr<Declaration>> arguments,
        std::shared_ptr<BaseType> return_type,
        vector<std::shared_ptr<LanguageNode>> body = {}
    );

    FunctionDefinition(const FunctionDefinition & src);

    std::shared_ptr<FunctionDefinition> create_alias(string alias_name);

    std::shared_ptr<Label> name;
    vector<std::shared_ptr<Declaration>> arguments;
    std::shared_ptr<BaseType> return_type;
    vector<std::shared_ptr<LanguageNode>> body;

    std::set<std::weak_ptr<FunctionDefinition>, std::owner_less<std::weak_ptr<FunctionDefinition>>> function_dependencies;
    
    string compile() override;
    virtual string compile_prototype();
private:

};

enum SelfDescriptor {
    RIGHT,
    LEFT,
    IN,
    OUT,
    MUT
};

class ClassMethodDefinition : public FunctionDefinition {
public:

    ClassMethodDefinition(
        std::weak_ptr<Module> module,
        std::weak_ptr<Type> self_type,
        std::shared_ptr<Label> name,
        vector<std::shared_ptr<Declaration>> arguments,
        std::shared_ptr<BaseType> return_type,
        unordered_set<SelfDescriptor> self_descriptors,
        vector<std::shared_ptr<LanguageNode>> body = {}
    );

    ClassMethodDefinition(const ClassMethodDefinition & src);
    std::shared_ptr<Label> self_label;
    std::weak_ptr<Type> self_type;
    unordered_set<SelfDescriptor> self_descriptors;
    
    virtual string mangle_name();
    string compile() override;
    string compile_prototype() override;
private:

};

class ClassOperatorDefinition : public ClassMethodDefinition {
public:

    ClassOperatorDefinition(
        std::weak_ptr<Module> module,
        std::weak_ptr<Type> self_type,
        std::shared_ptr<Label> name,
        vector<std::shared_ptr<Declaration>> arguments,
        std::shared_ptr<BaseType> return_type,
        unordered_set<SelfDescriptor> self_descriptors,
        bool is_inline = false,
        vector<std::shared_ptr<LanguageNode>> body = {}
    );

    ClassOperatorDefinition(const ClassOperatorDefinition & src);
    
    bool is_inline;

    string compile_inline(std::weak_ptr<Label> existing_self_label, vector<std::weak_ptr<Expression>> existing_arguments);
    string compile() override;
    string mangle_name() override;
private:
};