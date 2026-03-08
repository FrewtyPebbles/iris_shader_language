#include "tree/import.h"
#include "errors.h"

ImportName::ImportName(std::shared_ptr<Label> name, std::shared_ptr<Label> alias)
: name(name), alias(alias) {}

Import::Import(std::weak_ptr<Module> module, std::weak_ptr<Module> import_target, vector<ImportName> import_names)
: Statement(module), import_target(import_target), import_names(import_names) {}

void Import::add_function_dependencies(std::shared_ptr<FunctionDefinition> function) {
    for (auto dependency : function->function_dependencies) {
        // prevent infinite recursion from indirect recursion
        if (auto module_lock = module.lock())
        if (auto dependency_lock = dependency.lock())
        if (!module_lock->functions.contains(dependency_lock->name->compile())) {
            dependency_lock->name->define(dependency_lock->return_type);
            module_lock->function_dependencies.insert_or_assign(dependency_lock->name->compile(), dependency);
            add_function_dependencies(dependency_lock);
        }
    }
}

string Import::compile() {
    if (auto import_target_lock = import_target.lock()) {

        import_target_lock->compile();
        // compile to create the definitions for the module.
        // this prevents lookup errors.
        if (auto module_lock = module.lock())
        for (auto import_name : import_names) {
            if (import_name.alias) {
                auto alias_function = import_target_lock->functions.at(import_name.name->value)->create_alias(import_name.alias->value);
                module_lock->functions.insert_or_assign(import_name.alias->value, alias_function);
                add_function_dependencies(alias_function);
                module_lock->memory_stack->define(alias_function->name, alias_function->return_type);
            } else {
                auto function = import_target_lock->functions.at(import_name.name->value);
                module_lock->functions.insert_or_assign(import_name.name->value, function);
                add_function_dependencies(function);
                module_lock->memory_stack->define(function->name, function->return_type);
            }
        }
    }
    return "";// emit nothing
}