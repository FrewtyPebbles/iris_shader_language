#pragma once
#include "tree/statement.h"
#include "tree/module.h"
#include <memory>
#include <optional>
#include <vector>

using std::vector;

class ImportName {
public:
    ImportName(std::shared_ptr<Label> name, std::shared_ptr<Label> alias = nullptr);
    std::shared_ptr<Label> name;
    std::shared_ptr<Label> alias;
};

class Import : public Statement {
public:
    Import(std::weak_ptr<Module> module, std::weak_ptr<Module> import_target, vector<ImportName> import_names);
    std::weak_ptr<Module> import_target;
    vector<ImportName> import_names;
    string compile() override;

    void add_function_dependencies(std::shared_ptr<FunctionDefinition> function);
};