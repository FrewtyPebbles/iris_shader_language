#pragma once
#include <unordered_map>
#include <string>

using std::unordered_map;
using std::string;

const unordered_map<string, string> TYPES = {
    {"fp10", "lowp float"},
    {"f16", "mediump float"},
    {"f32", "highp float"},
    {"i8", "lowp int"},
    {"i16", "mediump int"},
    {"i32", "highp int"},
    {"u8", "lowp uint"},
    {"u16", "mediump uint"},
    {"u32", "highp uint"},
    {"none", "void"},
    {"bool", "bool"},
    {"tex_1d", "sampler1D"},
    {"tex_2d", "sampler2D"},
    {"tex_3d", "sampler3D"},
    {"tex_2d_array", "sampler2DArray"},
    {"tex_2d_shadow", "sampler2DShadow"},
    {"tex_2d_shadow_array", "sampler2DShadowArray"},
    {"tex_cube", "samplerCube"},
    {"tex_cube_shadow", "samplerCubeShadow"},
};