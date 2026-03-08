#pragma once
#include "tree/expression.h"
#include <memory>
#include <vector>
#include <unordered_set>

using std::vector;
using std::unordered_set;

class Type;
class Descriptor;
class ClassDefinition;
class UnpackingItem;
class Declaration;
class Label;

class UnpackingItem : public Expression {
public:
    UnpackingItem(std::weak_ptr<Module> module);
    virtual string compile_declarations() = 0;
};

class UnpackingList : public UnpackingItem {
public:
    UnpackingList(std::weak_ptr<Module> module, std::vector<std::shared_ptr<UnpackingItem>> unpacking_items);
    
    std::vector<std::shared_ptr<UnpackingItem>> unpacking_items;

    string compile() override;
    string compile_declarations() override;
    std::weak_ptr<BaseType> type() override;
};

class UnpackingLabel : public UnpackingItem {
public:
    UnpackingLabel(std::shared_ptr<Module> module, std::shared_ptr<Label> label, std::shared_ptr<Expression> assignment);
    
    std::shared_ptr<Label> label;
    std::shared_ptr<Expression> assignment;
    
    string compile() override;
    string compile_declarations() override;
    std::weak_ptr<BaseType> type() override;
};

class UnpackingDeclaration : public UnpackingItem {
public:
    // Doesn't need an assignment since declaration already has one.
    UnpackingDeclaration(std::weak_ptr<Module> module, std::shared_ptr<Declaration> declaration);
    
    std::shared_ptr<Declaration> declaration;
    
    string compile() override;
    string compile_declarations() override;
    std::weak_ptr<BaseType> type() override;
};