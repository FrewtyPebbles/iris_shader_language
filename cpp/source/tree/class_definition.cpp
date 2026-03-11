#include "tree/class_definition.h"
#include "tree/declaration.h"
#include "errors.h"

ClassDefinition::ClassDefinition(
    std::weak_ptr<Module> module,
    std::shared_ptr<Label> name,
    std::optional<std::weak_ptr<Type>> base_type,
    unordered_map<string, std::shared_ptr<Declaration>> struct_members,
    unordered_map<string, std::weak_ptr<ClassMethodDefinition>> member_functions,
    unordered_map<string, std::weak_ptr<ClassOperatorDefinition>> operator_functions,
    unordered_map<string, vector<string>> compiler_directives
) :
    LanguageNode(module),
    name(name),
    base_type(base_type),
    struct_members(struct_members),
    member_functions(member_functions),
    operator_functions(operator_functions),
    compiler_directives(compiler_directives)
{}

std::weak_ptr<Declaration> ClassDefinition::get_struct_member(std::weak_ptr<Primitive> member_key) {
    auto member_key_lock = member_key.lock();
    if (auto label = std::dynamic_pointer_cast<Label>(member_key_lock)) {
        std::optional<std::weak_ptr<ClassDefinition>> current_class = weak_from_this();
        // search class and base classes for struct member
        while (true) {
            if (!current_class.has_value())
                break;
            auto current_class_lock = current_class->lock();
            if (current_class_lock->struct_members.contains(label->value)) {
                return current_class_lock->struct_members.at(label->value);
            } else if (current_class_lock->base_type.has_value()) {
                current_class = current_class_lock->base_type->lock()->class_definition;
            } else {
                break;
            }
        }
        throw_error(ErrorType::DEFINITION_ERROR, module, label->line_number, label->column_number, "\"" + label->value + "\" is not defined in the class \"" + name->value + "\"");
    }
    else
        throw_error(ErrorType::LOGIC_ERROR, module, member_key.lock()->line_number, member_key.lock()->column_number, "Class instances cannot be indexed by the type \"" + member_key.lock()->type().lock()->name->value + "\".");
}

std::weak_ptr<Type> ClassDefinition::get_origin_type() {
    std::optional<std::weak_ptr<Type>> current_base_type = base_type;

    if (current_base_type.has_value()) {
        std::shared_ptr<Type> current_base_type_lock;
        while (true) {
            current_base_type_lock = current_base_type->lock();
            auto current_class_definition_optional = current_base_type_lock->class_definition;
            if (current_class_definition_optional.has_value()) {
                auto current_class_definition = current_class_definition_optional->lock();
                current_base_type = current_class_definition->base_type;
            } else {
                break;
            }
        }
    }

    if (current_base_type.has_value())
        return current_base_type.value();
    else
        return base_type.value();
}

string ClassDefinition::compile_as_base_members(ClassDefinition* derived) {
    auto origin_type = get_origin_type();
    string codegen;
    if (base_type.has_value()) {
        auto base_class_optional = base_type->lock()->class_definition;
        if (base_class_optional.has_value()) {
            codegen += base_class_optional->lock()->compile_as_base_members(this);
        }
    }
    for (auto [key, struct_member] : struct_members) {
        codegen += struct_member->compile();
    }

    return codegen;
}

string ClassDefinition::compile() {
    // define the type
    auto module_lock = module.lock();
    std::optional<string> comp_precision = std::nullopt;
    std::optional<string> comp_name_target = std::nullopt;
    std::optional<string> comp_name = std::nullopt;
    
    for (auto [key, value] : compiler_directives) {
        if (key == "comp_precision") {
            comp_precision = value[0];
        }
        if (key == "comp_name") {
            comp_name_target = value[0];
            comp_name = value[1];
        }
    }

    auto defined_type = std::make_shared<Type>(module, name, weak_from_this(), comp_precision);

    module_lock->memory_stack->define_type(defined_type);

    // define the name (check for comp_name compiler directive)

    if (comp_name.has_value()) {
        // TODO: make it change based on the target language
        auto comp_name_value = comp_name.value();
        name->define(defined_type, [comp_name_value]() {
            return comp_name_value;
        });
    } else {
        name->define(defined_type);
    }

    // do possible codegen
    auto origin_type = get_origin_type();
    string codegen;
    auto struct_type = std::dynamic_pointer_cast<Type>(module_lock->memory_stack->get_type("struct").lock());
    if (origin_type == struct_type) {
        // only codegen if the origin or most base class type is a struct
        codegen = "struct " + name->compile() + "{";
        auto base_class_optional = base_type->lock()->class_definition;
        if (base_class_optional.has_value()) {
            if (auto base_class_lock = base_class_optional->lock()) {
                codegen += base_class_lock->compile_as_base_members(this);
            }
        }

        for (auto [key, struct_member] : struct_members) {
            codegen += struct_member->compile();
        }

        codegen += "};";
    }

    return codegen;
}