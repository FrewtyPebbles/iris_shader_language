#pragma once
#include "tree/language_node.h"
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <vector>

using std::unordered_map;
using std::unordered_set;
using std::vector;

class FunctionDefinition;
class ClassDefinition;
class Statement;

class Module : public LanguageNode {
public:
    Module(string name);
    string name;
    vector<std::shared_ptr<Statement>> statements;
    unordered_map<string, std::shared_ptr<FunctionDefinition>> functions;
    unordered_map<string, std::shared_ptr<ClassDefinition>> classes;
    string compile() override;
};