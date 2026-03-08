#pragma once
#include "tree/expression.h"
#include "tree/primitive.h"
#include <memory>
#include <vector>
#include <unordered_set>

using std::vector;
using std::unordered_set;

class BaseType;
class Descriptor;
class ClassDefinition;

class Declaration : public Expression {
public:
    Declaration(std::weak_ptr<Module> module, std::vector<std::shared_ptr<Descriptor>> descriptors, std::shared_ptr<Label> label, std::shared_ptr<BaseType> variable_type = nullptr, std::shared_ptr<Expression> assignment = nullptr);
    
    std::vector<std::shared_ptr<Descriptor>> descriptors;
    std::shared_ptr<Label> label;
    std::shared_ptr<BaseType> variable_type;
    std::shared_ptr<Expression> assignment;

    string compile() override;
    string compile_no_assignment();
    std::weak_ptr<BaseType> type() override;
};