#include "tree/expression.h"

Expression::Expression(std::weak_ptr<Module> module)
: LanguageNode(module) {}