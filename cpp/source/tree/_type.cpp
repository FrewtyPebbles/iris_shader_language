#include "tree/_type.h"
#include <iostream>
#include "tree/primitive.h"
#include "tree/class_definition.h"
#include "tree/declaration.h"
#include "errors.h"

BaseType::BaseType(std::weak_ptr<Module> module, std::shared_ptr<Label> name, const vector<size_t>& array_dimensions)
: Expression(module), name(name), array_dimensions(array_dimensions) {}

string BaseType::compile_array_dimensions() {
    string ret = "";
    for (const int & dim : array_dimensions) {
        ret += "[" + std::to_string(dim) + "]";
    }
    return ret;
}

std::weak_ptr<BaseType> BaseType::type() {
    return weak_from_this();
}

Type::Type(std::weak_ptr<Module> module, std::shared_ptr<Label> name, std::optional<std::weak_ptr<ClassDefinition>> class_definition, std::optional<string> precision, const vector<size_t>& array_dimensions)
: BaseType(module, name, array_dimensions), class_definition(class_definition), precision(precision) {
    if (array_dimensions.size()){
        auto new_vec = array_dimensions;
        new_vec.pop_back();
        dimension_reduced_u_ptr = std::make_shared<Type>(module.lock(), name, precision, new_vec);
    }
}

std::weak_ptr<BaseType> Type::get_member_type(std::weak_ptr<Primitive> member_key) {
    if (class_definition.has_value())
    return class_definition->lock()->get_struct_member(member_key).lock()->type();
    else
        throw_error(ErrorType::TYPE_ERROR, module, line_number, column_number, "The base type \"" + name->value + "\" does not have any struct members to query.");
}

string Type::compile() {
    if (precision)
        return compile_precision() + " " + compile_type();
    else
        return compile_type();
}

string Type::compile_precision() {
    if (precision == "lp")
        return "lowp";
    if (precision == "mp")
        return "mediump";
    if (precision == "hp")
        return "highp";
    else
        return "[ERROR PRECISION]";
}

string Type::compile_type() {
    if (name == "none")
        return "void";
    else if (name == "i8")
        return "lowp int";
    else if (name == "i16")
        return "mediump int";
    else if (name == "i32")
        return "highp int";
    else if (name == "u8")
        return "lowp uint";
    else if (name == "u16")
        return "mediump uint";
    else if (name == "u32")
        return "highp uint";
    else if (name == "f8")
        return "lowp float";
    else if (name == "f16")
        return "mediump float";
    else if (name == "f32")
        return "highp float";
    else if (name == "bool")
        return "bool";
    else if (name == "vec2" || name == "v2")
        return "vec2";
    else if (name == "vec3" || name == "v3")
        return "vec3";
    else if (name == "vec4" || name == "v4")
        return "vec4";
    else if (name == "m2" || name == "m2x2" || name == "mat2" || name == "mat2x2")
        return "mat2";
    else if (name == "m3" || name == "m3x3" || name == "mat3" || name == "mat3x3")
        return "mat3";
    else if (name == "m4" || name == "m4x4" || name == "mat4" || name == "mat4x4")
        return "mat4";
    else if (name == "m2x3" || name == "mat2x3")
        return "mat2x3";
    else if (name == "m3x2" || name == "mat3x2")
        return "mat3x2";
    else if (name == "m4x3" || name == "mat4x3")
        return "mat4x3";
    else if (name == "m3x4" || name == "mat3x4")
        return "mat3x4";
    else if (name == "m2x4" || name == "mat2x4")
        return "mat2x4";
    else if (name == "m4x2" || name == "mat4x2")
        return "mat4x2";
    else
        return name->value;
}

string Type::compile_type_no_precision() {
    if (name == "none")
        return "void";
    else if (name == "i8")
        return "int";
    else if (name == "i16")
        return "int";
    else if (name == "i32")
        return "int";
    else if (name == "u8")
        return "uint";
    else if (name == "u16")
        return "uint";
    else if (name == "u32")
        return "uint";
    else if (name == "f8")
        return "float";
    else if (name == "f16")
        return "float";
    else if (name == "f32")
        return "float";
    else if (name == "bool")
        return "bool";
    else if (name == "vec2" || name == "v2")
        return "vec2";
    else if (name == "vec3" || name == "v3")
        return "vec3";
    else if (name == "vec4" || name == "v4")
        return "vec4";
    else if (name == "m2" || name == "m2x2" || name == "mat2" || name == "mat2x2")
        return "mat2";
    else if (name == "m3" || name == "m3x3" || name == "mat3" || name == "mat3x3")
        return "mat3";
    else if (name == "m4" || name == "m4x4" || name == "mat4" || name == "mat4x4")
        return "mat4";
    else if (name == "m2x3" || name == "mat2x3")
        return "mat2x3";
    else if (name == "m3x2" || name == "mat3x2")
        return "mat3x2";
    else if (name == "m4x3" || name == "mat4x3")
        return "mat4x3";
    else if (name == "m3x4" || name == "mat3x4")
        return "mat3x4";
    else if (name == "m2x4" || name == "mat2x4")
        return "mat2x4";
    else if (name == "m4x2" || name == "mat4x2")
        return "mat4x2";
    else
        return name->value;
}

string Type::hash_key() {
    string ret = name->value;
    if (precision) {
        ret += precision.value();
    }
    for (auto dimension : array_dimensions) {
        ret += std::to_string(dimension);
    }
    return ret;
}

bool Type::is_int() {
    if (name == "i8" || name == "i16" || name == "i32" || name == "u8" || name == "u16" || name == "u32")
        return true;
    return false;
}

bool Type::is_float() {
    if (name == "f8" || name == "f16" || name == "f32")
        return true;
    return false;
}

bool Type::is_bool() {
    if (name == "bool")
        return true;
    return false;
}

std::weak_ptr<BaseType> Type::dimension_reduced() {
    return dimension_reduced_u_ptr;
}

TypeTuple::TypeTuple(std::weak_ptr<Module> module, vector<std::weak_ptr<BaseType>> types, const vector<size_t>& array_dimensions)
: BaseType(module, std::make_shared<Label>(module, ""), array_dimensions) {
    for (size_t i = 0; i < types.size(); ++i) {
        members.insert_or_assign(i, types[i]);
    }
    
    for (size_t i = 0; i < types.size(); ++i) {
        set_member(i, types[i]);
    }
    name->value = get_mangled_name(members, array_dimensions);

    if (array_dimensions.size()) {
        auto new_vec = array_dimensions;
        new_vec.pop_back();
        dimension_reduced_u_ptr = std::make_shared<TypeTuple>(module.lock(), types, new_vec);
    }
}

std::weak_ptr<BaseType> TypeTuple::get_member_type(std::weak_ptr<Primitive> member_key) {
    auto member_key_lock = member_key.lock();
    if (auto integer = std::dynamic_pointer_cast<Integer>(member_key_lock))
    if (integer->value >= 0)
        return members.at(integer->value);
    else
        throw_error(ErrorType::SYNTAX_ERROR, module, member_key_lock->line_number, member_key_lock->column_number, "The members of a tuple can only be accessed with a positive index.");
    else
        throw_error(ErrorType::SYNTAX_ERROR, module, member_key_lock->line_number, member_key_lock->column_number, "The members of a tuple can only be accessed using literal digits.");
}

void TypeTuple::set_member(size_t key, std::weak_ptr<BaseType> member_type) {
    members.insert_or_assign(key, member_type);
}

string TypeTuple::get_mangled_name(map<size_t, std::weak_ptr<BaseType>> members, vector<size_t> array_dimensions) {
    string mangled_name = "typetuple";
    for (auto [key, type] : members) {
        if (auto locked_type = type.lock()) {
            mangled_name += std::to_string(key);
            if (auto derived = std::dynamic_pointer_cast<Type>(locked_type)) {
                if (derived->precision) {
                    mangled_name += derived->precision.value();
                }
                mangled_name += derived->name->value;
            } else if (auto derived = std::dynamic_pointer_cast<TypeTuple>(locked_type)) {
                mangled_name += TypeTuple::get_mangled_name(derived->members, derived->array_dimensions);
            }
        }
    }
    if (array_dimensions.size()) {
        mangled_name += "dimstart_";
        for (auto dimension : array_dimensions) {
            mangled_name += std::to_string(dimension)+ "_";
        }
        mangled_name += "dimend";
    }
    return mangled_name;
}

string TypeTuple::compile() {
    return name->value;
}

string TypeTuple::compile_type() {
    return name->value;
}


string TypeTuple::compile_struct() {
    string ret = "struct " + name->value + "{";
    for (auto [key, value] : members) {
        ret +=  value.lock()->compile() + " _" + std::to_string(key) + ";";
    }
    ret += "}";
    return ret;
}

string TypeTuple::hash_key() {
    return name->value;
}

std::weak_ptr<BaseType> TypeTuple::dimension_reduced() {
    return dimension_reduced_u_ptr;
}

bool operator==(const std::shared_ptr<Type>& lhs, const std::shared_ptr<Type>& rhs) {
    return lhs->name->value == rhs->name->value && lhs->precision== rhs->precision;
}

bool operator==(const std::shared_ptr<TypeTuple>& lhs, const std::shared_ptr<Type>& rhs) {
    return false;
}

bool operator==(const std::shared_ptr<Type>& lhs, const std::shared_ptr<TypeTuple>& rhs) {
    return false;
}

bool operator==(const std::shared_ptr<TypeTuple>& lhs, const std::shared_ptr<TypeTuple>& rhs) {
    return lhs->name->value == rhs->name->value;
}

bool operator==(const std::weak_ptr<Type>& lhs, const std::weak_ptr<Type>& rhs) {
    return lhs.lock()->name->value == rhs.lock()->name->value && lhs.lock()->precision== rhs.lock()->precision;
}

bool operator==(const std::weak_ptr<TypeTuple>& lhs, const std::weak_ptr<Type>& rhs) {
    return false;
}

bool operator==(const std::weak_ptr<Type>& lhs, const std::weak_ptr<TypeTuple>& rhs) {
    return false;
}

bool operator==(const std::weak_ptr<TypeTuple>& lhs, const std::weak_ptr<TypeTuple>& rhs) {
    return lhs.lock()->name->value == rhs.lock()->name->value;
}