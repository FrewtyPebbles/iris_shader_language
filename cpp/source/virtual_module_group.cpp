#include "virtual_module_group.h"
#include "compile.h"

VirtualModuleGroup::VirtualModuleGroup(string name, std::shared_ptr<VirtualModuleGroup> parent, unordered_map<string, std::shared_ptr<Module>> modules)
: name(name), parent(parent), modules(modules) {}

std::shared_ptr<VirtualModuleGroup> VirtualModuleGroup::create_shared(string name, std::shared_ptr<VirtualModuleGroup> parent, unordered_map<string, std::shared_ptr<Module>> modules) {
    return std::make_shared<VirtualModuleGroup>(name, parent, modules);
}

#ifdef __EMSCRIPTEN__
emscripten::val VirtualModuleGroup::get_js(std::string next_path) {
    auto result = this->get(next_path);
            
    // Check which type is held in the variant and return it as a JS value
    if (std::holds_alternative<std::shared_ptr<VirtualModuleGroup>>(result)) {
        return emscripten::val(std::get<std::shared_ptr<VirtualModuleGroup>>(result));
    } else {
        return emscripten::val(std::get<std::shared_ptr<Module>>(result));
    }
}
#endif

variant<std::shared_ptr<VirtualModuleGroup>, std::shared_ptr<Module>> VirtualModuleGroup::get(string next_path) {
    if (next_path == ".") {
        // If parent is a Module, it will automatically go into slot 1
        return parent; 
    }
    
    if (modules.contains(next_path)) {
        // Assuming modules is map<string, shared_ptr<Module>>
        return modules.at(next_path); 
    } 
    
    if (groups.contains(next_path)) {
        // Assuming groups is map<string, shared_ptr<VirtualModuleGroup>>
        return groups.at(next_path); 
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

void VirtualModuleGroup::remove(std::shared_ptr<Module> module) {
    modules.erase(module->name);
}
void VirtualModuleGroup::remove(std::shared_ptr<VirtualModuleGroup> group) {
    groups.erase(group->name);
}
void VirtualModuleGroup::remove_module(string name) {
    modules.erase(name);
}
void VirtualModuleGroup::remove_group(string group_name) {
    groups.erase(group_name);
}