#pragma once
#include <string>
#include <memory>

using std::string;

class Module;

class LanguageNode {
public:
    LanguageNode() = default;
    LanguageNode(std::weak_ptr<Module> module);
    size_t line_number = 0;
    size_t column_number = 0;
    std::weak_ptr<Module> module;
    virtual string compile() = 0;
};