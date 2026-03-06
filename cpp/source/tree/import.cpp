#include "tree/import.h"
#include "error_listener.h"

ImportName::ImportName(std::shared_ptr<Label> name, std::shared_ptr<Label> alias)
: name(name), alias(alias) {}

Import::Import(std::shared_ptr<Module> parent, std::shared_ptr<Module> import_target, vector<ImportName> import_names)
: parent(parent), import_target(import_target), import_names(import_names) {}

void Import::add_function_dependencies(std::shared_ptr<FunctionDefinition> function) {
    for (auto dependency : function->function_dependencies) {
        dependency->name->define(dependency->return_type);
        parent->functions.insert_or_assign(dependency->name->compile(), dependency);
        add_function_dependencies(dependency);
    }
}

string Import::compile() {
    for (auto import_name : import_names) {
        if (import_name.alias) {
            auto alias_function = import_target->functions.at(import_name.name->value)->create_alias(import_name.alias->value);
            parent->functions.insert_or_assign(import_name.alias->value, alias_function);
            add_function_dependencies(alias_function);
            parent->memory_stack->define(alias_function->name->value, alias_function->return_type);
        } else {
            auto function = import_target->functions.at(import_name.name->value);
            parent->functions.insert_or_assign(import_name.name->value, function);
            add_function_dependencies(function);
            parent->memory_stack->define(function->name->value, function->return_type);
        }
    }
    return "";// emit nothing
}