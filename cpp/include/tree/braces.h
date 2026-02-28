#pragma once
#include "tree/expression.h"
#include <memory>

class Braces : public Expression {
public:
    Braces(std::shared_ptr<Expression> expression);
    std::shared_ptr<Expression> expression;
};

class Parentheses : public Braces {
public:
    using Braces::Braces;
    string compile() override;
};

class Magnitude : public Braces {
public:
    using Braces::Braces;
    string compile() override;
};

class AbsoluteValue : public Braces {
public:
    using Braces::Braces;
    string compile() override;
};