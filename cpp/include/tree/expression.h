#pragma once
#include "tree/language_node.h"
#include <memory>

class BaseType;
class Module;

class Expression : public LanguageNode {
public:
    Expression(std::shared_ptr<Module> module);
    virtual ~Expression() = default;
    std::shared_ptr<Module> module;
    virtual std::shared_ptr<BaseType> type() = 0;
};