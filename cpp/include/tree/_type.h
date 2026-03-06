#pragma once
#include "tree/expression.h"
#include <optional>
#include <unordered_map>
#include <vector>

using std::vector;
using std::unordered_map;

class BaseType : public Expression, public std::enable_shared_from_this<BaseType> {
public:
    BaseType(std::shared_ptr<Module> module, string name, vector<size_t> array_dimensions);
    string name;
    vector<size_t> array_dimensions;
    unordered_map<string, std::shared_ptr<BaseType>> members;
    void set_member(string key, std::shared_ptr<BaseType> member_type);
    virtual string hash_key() = 0;
    virtual string compile_type() = 0;
    virtual std::shared_ptr<BaseType> dimension_reduced() = 0;
    string compile_array_dimensions();
    std::shared_ptr<BaseType> type() override;
    
};

class Type : public BaseType {
public:
    Type(std::shared_ptr<Module> module, string name, std::optional<string> precision = std::nullopt, vector<size_t> array_dimensions = {});
    
    std::optional<string> precision;
    string compile() override;
    string compile_type() override;
    string compile_type_no_precision();
    string compile_precision();
    string hash_key() override;

    bool is_int();
    bool is_float();
    bool is_bool();

    std::shared_ptr<BaseType> dimension_reduced() override;
};

class TypeTuple : public BaseType {
public:
    TypeTuple(std::shared_ptr<Module> module, vector<std::shared_ptr<BaseType>> types, vector<size_t> array_dimensions = {});
    
    vector<std::shared_ptr<BaseType>> types;
    // name is a mangled version of the types names concatenated together.

    string compile() override;
    string compile_type() override;
    string compile_struct();
    string hash_key() override;
    static string get_mangled_name(vector<std::shared_ptr<BaseType>> types, vector<size_t> array_dimensions = {});
    
    std::shared_ptr<BaseType> dimension_reduced() override;
};