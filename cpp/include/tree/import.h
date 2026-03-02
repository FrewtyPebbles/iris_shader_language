#pragma once
#include "tree/statement.h"
#include "tree/module.h"
#include <memory>
#include <optional>
#include <vector>

using std::vector;

class ImportName {
public:
    ImportName(string name, std::optional<string> alias = std::nullopt);
    string name;
    std::optional<string> alias;
};

class Import : public Statement {
public:
    Import(std::shared_ptr<Module> parent, std::shared_ptr<Module> import_target, vector<ImportName> import_names);
    std::shared_ptr<Module> parent;
    std::shared_ptr<Module> import_target;
    vector<ImportName> import_names;
    string compile() override;

    void add_function_dependencies(std::shared_ptr<FunctionDefinition> function);
};