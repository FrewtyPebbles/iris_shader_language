#include "tree/import.h"
#include "error_listener.h"

ImportName::ImportName(string name, std::optional<string> alias)
: name(name), alias(alias) {}

Import::Import(std::shared_ptr<Module> parent, std::shared_ptr<Module> import_target, vector<ImportName> import_names)
: parent(parent), import_target(import_target), import_names(import_names) {}

void Import::add_function_dependencies(std::shared_ptr<FunctionDefinition> function) {
    for (auto dependency : function->function_dependencies) {
        parent->functions.insert_or_assign(dependency->name, dependency);
        add_function_dependencies(dependency);
    }
}

string Import::compile() {
    for (auto import_name : import_names) {
        if (import_name.alias) {
            auto alias_function = import_target->functions.at(import_name.name)->create_alias(import_name.alias.value());
            parent->functions.insert_or_assign(import_name.alias.value(), alias_function);
            add_function_dependencies(alias_function);
        } else {
            auto function = import_target->functions.at(import_name.name);
            parent->functions.insert_or_assign(import_name.name, function);
            add_function_dependencies(function);
        }
    }
    return "";// emit nothing
}