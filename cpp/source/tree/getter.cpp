#include "tree/getter.h"
#include "tree/primitive.h"
#include "constants.h"
#include "error_listener.h"

Getter::Getter(std::shared_ptr<Expression> parent, string child_label)
: parent(parent), child_label(child_label) {}

string Getter::compile() {
    if (auto primitive = std::dynamic_pointer_cast<Primitive>(parent)) {
        if (std::holds_alternative<string>(primitive->value)) {
            string base_name = std::get<string>(primitive->value);
            if (base_name == "gl") {
                auto compiled_name = base_name + "_" + child_label;
                if (GL_BUILT_IN_VARIABLES.contains(compiled_name))
                    return compiled_name;
                else
                    throw std::runtime_error(create_definition_error_message(line_number, column_number, "\"" + child_label + "\" is not defined in namespace \"" + base_name + "\""));
            }
        }
    }
    return parent->compile() + "." + child_label;
}