#pragma once
#include "tree/expression.h"
#include <optional>
#include <unordered_map>
#include <vector>

using std::vector;
using std::unordered_map;

class Label;

class BaseType : public Expression, public std::enable_shared_from_this<BaseType> {
public:
    BaseType(std::weak_ptr<Module> module, std::shared_ptr<Label> name, const vector<size_t>& array_dimensions);
    std::shared_ptr<Label> name;
    vector<size_t> array_dimensions;
    unordered_map<string, std::weak_ptr<BaseType>> members;
    void set_member(string key, std::weak_ptr<BaseType> member_type);
    virtual string hash_key() = 0;
    virtual string compile_type() = 0;
    virtual std::weak_ptr<BaseType> dimension_reduced() = 0;
    string compile_array_dimensions();
    std::weak_ptr<BaseType> type() override;
    
protected:
    // this is a ptr to a dimension reduced version of the type.
    // this way dimension_reduced() can return a weak ptr to the reduced dimension version of the type.
    std::shared_ptr<BaseType> dimension_reduced_u_ptr = nullptr;
};

class Type : public BaseType {
public:
    Type(std::weak_ptr<Module> module, std::shared_ptr<Label> name, std::optional<string> precision = std::nullopt, const vector<size_t>& array_dimensions = {});
    
    std::optional<string> precision;
    string compile() override;
    string compile_type() override;
    string compile_type_no_precision();
    string compile_precision();
    string hash_key() override;

    bool is_int();
    bool is_float();
    bool is_bool();

    std::weak_ptr<BaseType> dimension_reduced() override;
};

class TypeTuple : public BaseType {
public:
    TypeTuple(std::weak_ptr<Module> module, vector<std::weak_ptr<BaseType>> types, const vector<size_t>& array_dimensions = {});
    
    vector<std::weak_ptr<BaseType>> types;
    // name is a mangled version of the types names concatenated together.

    string compile() override;
    string compile_type() override;
    string compile_struct();
    string hash_key() override;
    static string get_mangled_name(vector<std::weak_ptr<BaseType>> types, vector<size_t> array_dimensions = {});
    
    std::weak_ptr<BaseType> dimension_reduced() override;
};

bool operator==(const std::shared_ptr<Type>& lhs, const std::shared_ptr<Type>& rhs);

bool operator==(const std::shared_ptr<TypeTuple>& lhs, const std::shared_ptr<Type>& rhs);

bool operator==(const std::shared_ptr<Type>& lhs, const std::shared_ptr<TypeTuple>& rhs);

bool operator==(const std::shared_ptr<TypeTuple>& lhs, const std::shared_ptr<TypeTuple>& rhs);