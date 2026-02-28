#pragma once
#include "tree/expression.h"

class Getter : public Expression {
public:
    Getter(std::shared_ptr<Expression> parent, string child_label);

    std::shared_ptr<Expression> parent;
    string child_label;

    string compile() override;
};