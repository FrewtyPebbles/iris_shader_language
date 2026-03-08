#pragma once
#include "tree/language_node.h"
#include <memory>

class BaseType;
class Module;

class Expression : public LanguageNode {
public:
    Expression(std::weak_ptr<Module> module);
    virtual ~Expression() = default;
    virtual std::weak_ptr<BaseType> type() = 0;
};