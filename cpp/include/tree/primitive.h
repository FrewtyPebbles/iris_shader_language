#pragma once
#include "tree/expression.h"
#include <variant>
#include "tree/module.h"

class LabelDefinition;

class Primitive : public Expression {
public:
    Primitive(std::weak_ptr<Module> module);
};

class Label : public Primitive, public std::enable_shared_from_this<Label> {
public:
    Label(std::weak_ptr<Module> module, string value);

    string value;

    std::weak_ptr<LabelDefinition> lookup();
    string compile() override;
    void define(std::weak_ptr<BaseType> type, std::function<string()> compile_function = nullptr);
    std::weak_ptr<BaseType> type() override;
};

bool operator==(const std::shared_ptr<Label>& lhs, const std::string& rhs);

bool operator==(const std::string& lhs, const std::shared_ptr<Label>& rhs);

class Integer : public Primitive {
public:
    Integer(std::weak_ptr<Module> module, int64_t value);

    int64_t value;

    string compile() override;
    std::weak_ptr<BaseType> type() override;
};

class Float : public Primitive {
public:
    Float(std::weak_ptr<Module> module, double value);

    double value;

    string compile() override;
    std::weak_ptr<BaseType> type() override;
};

class Boolean : public Primitive {
public:
    Boolean(std::weak_ptr<Module> module, bool value);

    bool value;

    string compile() override;
    std::weak_ptr<BaseType> type() override;
};