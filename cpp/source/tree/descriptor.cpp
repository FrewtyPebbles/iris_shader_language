#include "tree/descriptor.h"
#include <iostream>
#include "errors.h"

Descriptor::Descriptor(std::weak_ptr<Module> module, string name, std::optional<uint32_t> index)
: LanguageNode(module), name(name), index(index) {}

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
    throw_error(ErrorType::SYNTAX_ERROR, module.lock(), line_number, column_number, "Cannot cast expression to tuple.");
}