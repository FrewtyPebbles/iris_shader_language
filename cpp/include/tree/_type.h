#pragma once
#include "tree/expression.h"
#include <optional>
#include <vector>

using std::vector;

class Type : public Expression {
public:
    Type(string name, std::optional<string> precision = std::nullopt, vector<size_t> array_dimensions = {});
    string name;
    std::optional<string> precision;
    vector<size_t> array_dimensions;

    string compile() override;
    string compile_array_dimensions();
private:
    string compile_type();
    string compile_precision();
};