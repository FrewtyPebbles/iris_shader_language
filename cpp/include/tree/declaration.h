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

class Declaration : public Expression {
public:
    Declaration(std::vector<std::shared_ptr<Descriptor>> descriptors, string label, std::shared_ptr<Type> type);
    
    std::vector<std::shared_ptr<Descriptor>> descriptors;
    string label;
    std::shared_ptr<Type> type;

    string compile() override;
};