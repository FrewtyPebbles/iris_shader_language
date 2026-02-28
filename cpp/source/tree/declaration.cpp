#include "tree/declaration.h"
#include "tree/_type.h"
#include "tree/descriptor.h"

Declaration::Declaration(std::vector<std::shared_ptr<Descriptor>> descriptors, string label, std::shared_ptr<Type> type, std::shared_ptr<Expression> assignment)
: descriptors(descriptors), label(label), type(type), assignment(assignment) {}

string Declaration::compile() {
    string ret;
    for (const auto & descriptor : descriptors) {
        ret += descriptor->compile() + " ";
    }
    ret += type->compile() + " " + label + type->compile_array_dimensions();
    if (assignment) {
        ret += "=" + assignment->compile();
    }
    return ret;
}