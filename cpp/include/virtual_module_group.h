#pragma once
#include <memory>
#include <vector>
#include <unordered_map>
#include <string>
#include <variant>
#include "tree/module.h"
#ifdef __EMSCRIPTEN__
#include <emscripten/val.h>
#endif

using std::string;
using std::vector;
using std::unordered_map;
using std::variant;

// This virtual file system is here for portability.
// Rather than writing module import directory traversal code for
// platforms like web and native, we will create a virtual module tree.
// it will be up to these platforms to populate the module traversal tree.
// this will make things more stable on platforms without a file system.


class VirtualModuleGroup : public std::enable_shared_from_this<VirtualModuleGroup> {
public:
    VirtualModuleGroup(string name, std::shared_ptr<VirtualModuleGroup> parent = nullptr, unordered_map<string, std::shared_ptr<Module>> modules = {});
    static std::shared_ptr<VirtualModuleGroup> create_shared(string name, std::shared_ptr<VirtualModuleGroup> parent = nullptr, unordered_map<string, std::shared_ptr<Module>> modules = {});
    string name;
    unordered_map<string, std::shared_ptr<Module>> modules;
    unordered_map<string, std::shared_ptr<VirtualModuleGroup>> groups;
    std::shared_ptr<VirtualModuleGroup> parent;

    void add(std::shared_ptr<Module> module);
    void add(std::shared_ptr<VirtualModuleGroup> group);
    void add(string name, string source_code);
    void add(string group_name);

    void remove(std::shared_ptr<Module> module);
    void remove(std::shared_ptr<VirtualModuleGroup> group);
    void remove_module(string name);
    void remove_group(string group_name);

#ifdef __EMSCRIPTEN__
    emscripten::val get_js(std::string next_path);
#endif
    variant<std::shared_ptr<VirtualModuleGroup>, std::shared_ptr<Module>> get(string next_path);
};