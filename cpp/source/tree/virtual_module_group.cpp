#include "tree/virtual_module_group.h"
#include "compile.h"

VirtualModuleGroup::VirtualModuleGroup(string name, std::optional<std::weak_ptr<VirtualModuleGroup>> parent, unordered_map<string, std::shared_ptr<Module>> modules)
: name(name), parent(parent), modules(modules) {}

std::shared_ptr<VirtualModuleGroup> VirtualModuleGroup::create_shared(string name, std::optional<std::weak_ptr<VirtualModuleGroup>> parent, unordered_map<string, std::shared_ptr<Module>> modules) {
    return std::make_shared<VirtualModuleGroup>(name, parent, modules);
}

#ifdef __EMSCRIPTEN__
emscripten::val VirtualModuleGroup::get_js(std::string next_path) {
    auto result = this->get(next_path);
            
    if (std::holds_alternative<std::optional<std::weak_ptr<VirtualModuleGroup>>>(result)) {
        auto opt = std::get<std::optional<std::weak_ptr<VirtualModuleGroup>>>(result);
        if (opt.has_value()) {
            if (auto shared = opt.value().lock()) {
                return emscripten::val(shared);
            }
        }
        // If we reach here, it's null/expired
        return emscripten::val::null();
    } else {
        // Slot is weak_ptr<Module>
        auto weak_mod = std::get<std::weak_ptr<Module>>(result);
        if (auto shared_mod = weak_mod.lock()) {
            return emscripten::val(shared_mod);
        }
        return emscripten::val::null();
    }
}
#endif

variant<std::optional<std::weak_ptr<VirtualModuleGroup>>, std::weak_ptr<Module>> VirtualModuleGroup::get(string next_path) {
    if (next_path == ".") {
        // If parent is a Module, it will automatically go into slot 1
        return std::optional<std::weak_ptr<VirtualModuleGroup>>(parent); 
    }
    
    if (modules.contains(next_path)) {
        // Assuming modules is map<string, shared_ptr<Module>>
        return std::weak_ptr<Module>(modules.at(next_path)); 
    } 
    
    if (groups.contains(next_path)) {
        // Assuming groups is map<string, shared_ptr<VirtualModuleGroup>>
        return std::optional<std::weak_ptr<VirtualModuleGroup>>(groups.at(next_path)); 
    }

    // You should also return a default value or throw here for paths not found
    throw std::runtime_error("Path not found ...\"" + name + "." + next_path + "\"");
}


void VirtualModuleGroup::add(std::shared_ptr<Module> module) {
    module->parent = shared_from_this();
    modules.insert(std::make_pair(module->name, module));
}
void VirtualModuleGroup::add(std::shared_ptr<VirtualModuleGroup> group) {
    groups.insert(std::make_pair(group->name, group));
}
void VirtualModuleGroup::add(string name, string source_code) {
    auto mod_compiler = ModuleCompiler();
    auto mod = mod_compiler.compile(name, source_code, shared_from_this());
    mod->parent = shared_from_this();
    modules.insert(std::make_pair(name, mod));
}
void VirtualModuleGroup::add(string group_name) {
    groups.insert(std::make_pair(group_name, std::make_shared<VirtualModuleGroup>(group_name, shared_from_this())));
}

void VirtualModuleGroup::remove(std::weak_ptr<Module> module) {
    modules.erase(module.lock()->name);
}
void VirtualModuleGroup::remove(std::weak_ptr<VirtualModuleGroup> group) {
    groups.erase(group.lock()->name);
}
void VirtualModuleGroup::remove_module(string name) {
    modules.erase(name);
}
void VirtualModuleGroup::remove_group(string group_name) {
    groups.erase(group_name);
}