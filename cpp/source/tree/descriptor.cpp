#include "tree/descriptor.h"
#include <iostream>

Descriptor::Descriptor(string name, std::optional<uint32_t> index)
: name(name), index(index) {}

string Descriptor::compile() {
    if (name == "vertex") {
        return "layout(location=" + std::to_string(index.value()) + ") in";
    } else if (name == "in") {
        return "in";
    } else if (name == "out") {
        return "out";
    } else if (name == "uniform") {
        return "uniform";
    } else if (name == "mut") {
        return "inout";
    } else if (name == "def") {
        return "#define";
    }
    return "[ERROR BAD DESCRIPTOR]";
}