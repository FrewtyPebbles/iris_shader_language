#pragma once
#include <string>

using std::string;

class LanguageNode {
public:
    virtual string compile() = 0;
};