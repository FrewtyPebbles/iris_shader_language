#pragma once
#include "tree/language_node.h"
#include "tree/function_definition.h"
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <memory>
#include <optional>
#include <vector>

using std::unordered_set;
using std::unordered_map;
using std::string;
using std::vector;

class Declaration;
class Type;

// Classes will be used to define types including the base types

/*
Classes are used to define interfaces, but can mutate any type, not just structs.

The syntax looks like this:
```
define int as BaseInteger {
    # when derived classes are compiled, BaseInteger will be substituted for whatever the derived class is.
    func inline op +( left right self, other:BaseInteger) -> BaseInteger {
        return (self as int) + (other as int)
    }
    # ...
}

define BaseInteger as i8 {
    comp_name GLSL "int"
    comp_name WGSL "i32"
    comp_precision lp
}
define BaseInteger as i16 {
    comp_name GLSL "int"
    comp_name WGSL "i32"
    comp_precision mp
}
# ...
define BaseInteger as u8 {
    comp_name GLSL "uint"
    comp_name WGSL "u32"
    comp_precision lp
}
# ...
```
This will allow us to bootstrap the type definitions with the language itself.
Hopefully it will also make automagic type casting possible later.
*/
class ClassDefinition : public LanguageNode, public std::enable_shared_from_this<ClassDefinition> {
public:
    ClassDefinition(
        std::weak_ptr<Module> module,
        std::shared_ptr<Label> name,
        std::optional<std::weak_ptr<Type>> base_type = std::nullopt,
        unordered_map<string, std::shared_ptr<Declaration>> struct_members = {},
        // These functions are added to the module durring the initial compile pass.
        unordered_map<string, std::weak_ptr<ClassMethodDefinition>> member_functions = {},
        unordered_map<string, std::weak_ptr<ClassOperatorDefinition>> operator_functions = {},
        unordered_map<string, vector<string>> compiler_directives = {}
    );
    
    std::shared_ptr<Label> name;
    
    std::optional<std::weak_ptr<Type>> base_type;
        
    // this is only used if class_type is STRUCT.
    unordered_map<string, std::shared_ptr<Declaration>> struct_members;
    
    
    unordered_map<string, std::weak_ptr<ClassMethodDefinition>> member_functions;
    // these are the operator functions that make the magic happen.
    unordered_map<string, std::weak_ptr<ClassOperatorDefinition>> operator_functions;
    
    unordered_map<string, vector<string>> compiler_directives;

    std::weak_ptr<Declaration> get_struct_member(std::weak_ptr<Primitive> member_key);

    std::weak_ptr<Type> get_origin_type();

    string compile_as_base_members(ClassDefinition* derived);

    string compile() override;
private:

};