#include "tree/_type.h"
#include <iostream>

Type::Type(string name, std::optional<string> precision, vector<size_t> array_dimensions)
: name(name), precision(precision), array_dimensions(array_dimensions) {}

string Type::compile() {
    if (precision)
        return compile_precision() + " " + compile_type();
    else
        return compile_type();
}

string Type::compile_array_dimensions() {
    string ret = "";
    for (const int & dim : array_dimensions) {
        ret += "[" + std::to_string(dim) + "]";
    }
    return ret;
}

string Type::compile_precision() {
    if (precision == "lp")
        return "lowp";
    if (precision == "mp")
        return "mediump";
    if (precision == "hp")
        return "highp";
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
}