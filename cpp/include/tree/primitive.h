#pragma once
#include "tree/expression.h"
#include <variant>

class Primitive : public Expression {
public:
    Primitive(std::variant<int64_t , double, string> value);

    std::variant<int64_t , double, string> value;

    string compile() override;
};