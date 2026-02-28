#pragma once
#include <string>

using std::string;

class LanguageNode {
public:
    size_t line_number = 0;
    size_t column_number = 0;
    virtual string compile() = 0;
};