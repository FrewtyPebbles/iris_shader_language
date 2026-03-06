#pragma once
#include "tree/expression.h"
#include <variant>
#include "tree/module.h"

class LabelDefinition;

class Primitive : public Expression {
public:
    Primitive(std::shared_ptr<Module> module);
};

class Label : public Primitive {
public:
    Label(std::shared_ptr<Module> module, string value);

    string value;

    std::shared_ptr<LabelDefinition> lookup();
    string compile() override;
    void define(std::shared_ptr<BaseType> type, std::function<string()> compile_function = nullptr);
    std::shared_ptr<BaseType> type() override;
};

class Integer : public Primitive {
public:
    Integer(std::shared_ptr<Module> module, int64_t value);

    std::shared_ptr<Module> module;
    int64_t value;

    string compile() override;
    std::shared_ptr<BaseType> type() override;
};

class Float : public Primitive {
public:
    Float(std::shared_ptr<Module> module, double value);

    std::shared_ptr<Module> module;
    double value;

    string compile() override;
    std::shared_ptr<BaseType> type() override;
};