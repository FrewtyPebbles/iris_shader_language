#include "tree/primitive.h"

Primitive::Primitive(std::variant<int64_t , double, string> value)
: value(value) {}

string Primitive::compile() {
    if (std::holds_alternative<int64_t>(value)) {
        int64_t v = std::get<int64_t>(value);
        return std::to_string(v);
    } else if (std::holds_alternative<double>(value)) {
        double v = std::get<double>(value);
        return std::to_string(v);
    } else { // LABEL
        string v = std::get<string>(value);
        return v;
    }
}