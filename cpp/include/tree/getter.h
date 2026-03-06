#pragma once
#include "tree/expression.h"

class Primitive;
class BaseType;

class Getter : public Expression {
public:
    Getter(std::shared_ptr<Module> module, std::shared_ptr<Expression> parent, std::shared_ptr<Primitive> child_label);

    std::shared_ptr<Expression> parent;
    std::shared_ptr<Primitive> child_label;

    string compile() override;
    std::shared_ptr<BaseType> type() override;
};