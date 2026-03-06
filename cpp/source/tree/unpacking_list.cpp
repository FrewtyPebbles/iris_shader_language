#include "tree/unpacking_list.h"
#include "tree/module.h"
#include "tree/primitive.h"
#include "tree/declaration.h"

UnpackingItem::UnpackingItem(std::shared_ptr<Module> module)
: Expression(module) {}

UnpackingList::UnpackingList(std::shared_ptr<Module> module, std::vector<std::shared_ptr<UnpackingItem>> unpacking_items)
: UnpackingItem(module), unpacking_items(unpacking_items) {}

string UnpackingList::compile() {
    string ret;
    for (auto unpacking_item : unpacking_items) {
        ret += unpacking_item->compile();
    }
    return ret;
}

string UnpackingList::compile_declarations() {
    string ret;
    for (auto unpacking_item : unpacking_items) {
        ret += unpacking_item->compile_declarations();
    }
    return ret;
}

std::shared_ptr<BaseType> UnpackingList::type() {
    vector<std::shared_ptr<BaseType>> types;
    for (auto unpacking_item : unpacking_items) {
        types.push_back(unpacking_item->type());
    }
    return module->memory_stack.get_type(TypeTuple::get_mangled_name(types));
}

UnpackingLabel::UnpackingLabel(std::shared_ptr<Module> module, std::shared_ptr<Label> label, std::shared_ptr<Expression> assignment)
: UnpackingItem(module), label(label), assignment(assignment) {}

string UnpackingLabel::compile() {
    label->define(assignment->type());
    return label->compile() + "=" + assignment->compile() + ";";
}

string UnpackingLabel::compile_declarations() {
    return label->lookup()->compile() + " " + label->compile() + ";";
}

std::shared_ptr<BaseType> UnpackingLabel::type() {
    return label->type();
}

UnpackingDeclaration::UnpackingDeclaration(std::shared_ptr<Module> module, std::shared_ptr<Declaration> declaration)
: UnpackingItem(module), declaration(declaration) {}

string UnpackingDeclaration::compile() {
    return declaration->compile() + ";";
}

string UnpackingDeclaration::compile_declarations() {
    return declaration->compile_no_assignment() + ";";
}

std::shared_ptr<BaseType> UnpackingDeclaration::type() {
    return declaration->type();
}