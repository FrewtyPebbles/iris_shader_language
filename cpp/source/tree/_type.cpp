#include "tree/_type.h"
#include <iostream>
#include "tree/primitive.h"

BaseType::BaseType(std::shared_ptr<Module> module, std::shared_ptr<Label> name, vector<size_t> array_dimensions)
: Expression(module), name(name), array_dimensions(array_dimensions) {}

void BaseType::set_member(string key, std::shared_ptr<BaseType> member_type) {
    members.insert_or_assign(key, member_type);
}

string BaseType::compile_array_dimensions() {
    string ret = "";
    for (const int & dim : array_dimensions) {
        ret += "[" + std::to_string(dim) + "]";
    }
    return ret;
}

std::shared_ptr<BaseType> BaseType::type() {
    return shared_from_this();
}

Type::Type(std::shared_ptr<Module> module, std::shared_ptr<Label> name, std::optional<string> precision, vector<size_t> array_dimensions)
: BaseType(module, name, array_dimensions), precision(precision) {}

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

std::shared_ptr<BaseType> Type::dimension_reduced() {
    auto new_vec = array_dimensions;
    new_vec.pop_back();
    return std::make_shared<Type>(module, name, precision, new_vec);
}

TypeTuple::TypeTuple(std::shared_ptr<Module> module, vector<std::shared_ptr<BaseType>> types, vector<size_t> array_dimensions)
: BaseType(module, std::make_shared<Label>(module, ""), array_dimensions), types(types) {
    for (size_t i = 0; i < types.size(); ++i) {
        set_member(std::to_string(i), types[i]);
    }
    name->value = get_mangled_name(types, array_dimensions);
}

string TypeTuple::get_mangled_name(vector<std::shared_ptr<BaseType>> types, vector<size_t> array_dimensions) {
    string mangled_name = "typetuple";
    for (auto type : types) {
        if (auto derived = std::dynamic_pointer_cast<Type>(type)) {
            if (derived->precision) {
                mangled_name += derived->precision.value();
            }
            mangled_name += derived->name->value;
        }
        if (auto derived = std::dynamic_pointer_cast<TypeTuple>(type)) {
            mangled_name += TypeTuple::get_mangled_name(derived->types, derived->array_dimensions);
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
    for (size_t i = 0; i < types.size(); ++i) {
        ret +=  types[i]->compile() + " _" + std::to_string(i) + ";";
    }
    ret += "}";
    return ret;
}

string TypeTuple::hash_key() {
    return name->value;
}

std::shared_ptr<BaseType> TypeTuple::dimension_reduced() {
    auto new_vec = array_dimensions;
    new_vec.pop_back();
    return std::make_shared<TypeTuple>(module, types, new_vec);
}