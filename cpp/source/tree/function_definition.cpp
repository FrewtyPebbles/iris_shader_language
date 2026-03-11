#include "tree/function_definition.h"
#include "tree/_type.h"
#include "tree/declaration.h"
#include "tree/statement.h"
#include "errors.h"
#include <iostream>

FunctionDefinition::FunctionDefinition(
    std::weak_ptr<Module> module,
    std::shared_ptr<Label> name,
    vector<std::shared_ptr<Declaration>> arguments,
    std::shared_ptr<BaseType> return_type,
    vector<std::shared_ptr<LanguageNode>> body
)
: LanguageNode(module), name(name), arguments(arguments),
return_type(return_type), body(body) {}

FunctionDefinition::FunctionDefinition(const FunctionDefinition & src)
: LanguageNode(src.module), name(src.name), arguments(src.arguments),
return_type(src.return_type), body(src.body), function_dependencies(src.function_dependencies) {}

std::shared_ptr<FunctionDefinition> FunctionDefinition::create_alias(string alias_name) {
    auto alias_function = std::make_shared<FunctionDefinition>(*this);
    alias_function->name = std::make_shared<Label>(module, alias_name);
    return alias_function;
}

string FunctionDefinition::compile() {
    string ret = return_type->compile() + " " + name->compile() + "(";
    auto module_lock = module.lock();
    module_lock->memory_stack->stack_push(false);
    if (arguments.size()) {
        ret += arguments[0]->compile();
        for (size_t i = 1; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += "){";
    for (const auto & statement : body) {
        ret += statement->compile();
    }
    module_lock->memory_stack->stack_pop();
    ret += "}";
    return ret;
}

string FunctionDefinition::compile_prototype() {
    name->define(return_type);
    string ret = return_type->compile() + " " + name->compile() + "(";
    if (arguments.size()) {
        ret += arguments[0]->compile();
        for (size_t i = 1; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += ");";
    return ret;
}

ClassMethodDefinition::ClassMethodDefinition(
    std::weak_ptr<Module> module,
    std::weak_ptr<Type> self_type,
    std::shared_ptr<Label> name,
    vector<std::shared_ptr<Declaration>> arguments,
    std::shared_ptr<BaseType> return_type,
    unordered_set<SelfDescriptor> self_descriptors,
    vector<std::shared_ptr<LanguageNode>> body
) : FunctionDefinition(module, name, arguments, return_type, body), self_label(std::make_shared<Label>(module, "self")), self_type(self_type), self_descriptors(self_descriptors) {
    self_label->line_number = name->line_number;
    self_label->column_number = name->column_number;
}

ClassMethodDefinition::ClassMethodDefinition(const ClassMethodDefinition & src)
: FunctionDefinition(src.module, src.name, src.arguments, src.return_type, src.body), self_type(src.self_type), self_descriptors(src.self_descriptors) {}

string ClassMethodDefinition::compile() {
    auto self_type_lock = self_type.lock();
    string ret = return_type->compile() + " " + mangle_name() + "(";
    
    if (self_descriptors.contains(SelfDescriptor::IN))
    ret += "in ";
    else if (self_descriptors.contains(SelfDescriptor::OUT))
    ret += "out ";
    else if (self_descriptors.contains(SelfDescriptor::MUT))
    ret += "inout ";
    
    auto module_lock = module.lock();
    module_lock->memory_stack->stack_push(false);
    
    ret += self_type.lock()->compile() + " self";
    self_label->define(self_type);
    
    if (arguments.size()) {
        for (size_t i = 0; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += "){";
    for (const auto & statement : body) {
        ret += statement->compile();
    }
    module_lock->memory_stack->stack_pop();
    ret += "}";
    return ret;
}

string ClassMethodDefinition::compile_prototype() {
    
    string ret = return_type->compile() + " " + mangle_name() + "(";
    
    if (self_descriptors.contains(SelfDescriptor::IN))
        ret += "in ";
    else if (self_descriptors.contains(SelfDescriptor::OUT))
        ret += "out ";
    else if (self_descriptors.contains(SelfDescriptor::MUT))
        ret += "inout ";

    auto module_lock = module.lock();
    module_lock->memory_stack->stack_push(false);

    ret += self_type.lock()->compile() + " self";
    self_label->define(self_type);

    if (arguments.size()) {
        for (size_t i = 0; i < arguments.size(); ++i) {
            ret += "," + arguments[i]->compile();
        }
    }
    ret += ");";
    return ret;
}

string ClassOperatorDefinition::mangle_name() {
    auto self_type_lock = self_type.lock();
    return self_type_lock->name->value + "_" + name->compile();
}

ClassOperatorDefinition::ClassOperatorDefinition(
        std::weak_ptr<Module> module,
        std::weak_ptr<Type> self_type,
        std::shared_ptr<Label> name,
        vector<std::shared_ptr<Declaration>> arguments,
        std::shared_ptr<BaseType> return_type,
        unordered_set<SelfDescriptor> self_descriptors,
        bool is_inline = false,
        vector<std::shared_ptr<LanguageNode>> body = {}
    ) : ClassMethodDefinition(module, self_type, name, arguments, return_type, self_descriptors, body), is_inline(is_inline) {}

ClassOperatorDefinition::ClassOperatorDefinition(const ClassOperatorDefinition & src)
: ClassMethodDefinition(src.module, src.self_type, src.name, src.arguments, src.return_type, src.self_descriptors, src.body), is_inline(src.is_inline) {}

string ClassOperatorDefinition::compile() {
    size_t mutation_descriptor_count = 
        static_cast<int>(self_descriptors.contains(SelfDescriptor::IN))
        + static_cast<int>(self_descriptors.contains(SelfDescriptor::OUT))
        + static_cast<int>(self_descriptors.contains(SelfDescriptor::MUT))
        ;
    if (mutation_descriptor_count > 1) {
        throw_error(ErrorType::DEFINITION_ERROR, module, self_label->line_number, self_label->column_number, "The self parameter in the class method " + self_type.lock()->name->value + "." + name->value + " cannot have more than one of the following descriptors: in, out, mut");
    }
    return "";
}

string ClassOperatorDefinition::mangle_name() {
    auto self_type_lock = self_type.lock();
    string self_descriptors_ss;

    if (self_descriptors.contains(SelfDescriptor::RIGHT))
        self_descriptors_ss += "right";
    if (self_descriptors.contains(SelfDescriptor::LEFT))
        self_descriptors_ss += "left";

    return self_type_lock->name->value + "_" + self_descriptors_ss + "_op__" + name->compile();
}

string ClassOperatorDefinition::compile_inline(std::weak_ptr<Label> existing_self_label, vector<std::weak_ptr<Expression>> existing_arguments) {
    string codegen;
    auto module_lock = module.lock();
    // we will mangle the function's variables to prevent name conflicts.
    module_lock->memory_stack->stack_push(true);

    codegen += "{";
    
    // define the arguments as aliases for the variables being passed in
    if (self_descriptors.contains(SelfDescriptor::IN)) {
        module_lock->memory_stack->define(self_label, self_type);
        auto dec = Declaration(module, {}, self_label, self_type.lock(), existing_self_label.lock());
        codegen += dec.compile();
    } else {
        module_lock->memory_stack->define_alias(self_label, existing_self_label);
    }

    if (existing_arguments.size() != arguments.size()) {
        throw std::runtime_error("Wrong number of inline class operator arguments for operator function \"" + name->value + "\". expected " + std::to_string(arguments.size()) + " recieved " + std::to_string(existing_arguments.size()) + ".");
    }

    std::shared_ptr<Declaration> current_argument;
    std::weak_ptr<BaseType> current_argument_type;
    for (size_t i = 0; i < arguments.size(); ++i) {
        current_argument = arguments[i];
        if (current_argument->contains_descriptor("in")) {
            current_argument_type = current_argument->type();
            module_lock->memory_stack->define(current_argument->label, current_argument_type);
            auto dec = Declaration(module, {}, current_argument->label, current_argument_type.lock(), existing_arguments[i].lock());
            codegen += dec.compile();
        } else {
            if (auto label = std::dynamic_pointer_cast<Label>(existing_arguments[i].lock()))
                module_lock->memory_stack->define_alias(current_argument->label, label);
            else if (arguments[i]->contains_descriptor("mut")) {
                throw_error(ErrorType::LOGIC_ERROR, module, existing_arguments[i].lock()->line_number, existing_arguments[i].lock()->column_number, "Cannot pass an expression as a \"mut\" argument.");
            } else if (arguments[i]->contains_descriptor("out")) {
                throw_error(ErrorType::LOGIC_ERROR, module, existing_arguments[i].lock()->line_number, existing_arguments[i].lock()->column_number, "Cannot pass an expression as a \"out\" argument.");
            }
        }
    }

    for (const auto & statement : body) {
        codegen += statement->compile();
    }

    codegen += "}";

    module_lock->memory_stack->stack_pop();
    return codegen;
}