#pragma once
#include "tree/language_node.h"
#include "tree/memory_stack.h"
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
class VirtualModuleGroup;
class Declaration;

class Module : public LanguageNode, public std::enable_shared_from_this<Module> {
public:
    Module(string name, std::shared_ptr<VirtualModuleGroup> parent = nullptr);
    static std::shared_ptr<Module> create_shared(string name, std::shared_ptr<VirtualModuleGroup> parent = nullptr);
    string name;
    std::shared_ptr<VirtualModuleGroup> parent;
    vector<std::shared_ptr<Statement>> statements;
    unordered_map<string, std::shared_ptr<Declaration>> global_declarations;
    unordered_map<string, std::shared_ptr<FunctionDefinition>> functions;
    unordered_map<string, std::shared_ptr<ClassDefinition>> classes;
    std::unique_ptr<MemoryStack> memory_stack;
    string compile() override;

    string mangle_name(string label_name);
};