#include "tree/language_node.h"

LanguageNode::LanguageNode(std::weak_ptr<Module> module)
: module(module) {}