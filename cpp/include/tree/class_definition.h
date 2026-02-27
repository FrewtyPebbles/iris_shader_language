#pragma once
#include "tree/language_node.h"
#include <unordered_set>

using std::unordered_set;


class ClassDefinition : public LanguageNode {
public:
    string name;
    string compile() override;
private:

};