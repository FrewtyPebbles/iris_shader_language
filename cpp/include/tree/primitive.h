#pragma once
#include "tree/expression.h"
#include <variant>
#include "tree/module.h"

class LabelDefinition;

class Primitive : public Expression {
public:
    Primitive(std::shared_ptr<Module> module);
};

class Label : public Primitive, public std::enable_shared_from_this<Label> {
public:
    Label(std::shared_ptr<Module> module, string value);

    string value;

    std::shared_ptr<LabelDefinition> lookup();
    string compile() override;
    void define(std::shared_ptr<BaseType> type, std::function<string()> compile_function = nullptr);
    std::shared_ptr<BaseType> type() override;
};

bool operator==(const std::shared_ptr<Label>& lhs, const std::string& rhs);

bool operator==(const std::string& lhs, const std::shared_ptr<Label>& rhs);

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