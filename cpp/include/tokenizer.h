#pragma once
#include <vector>
#include <string>

using std::vector;
using std::string;

namespace Tokenizer {
    vector<string> parse(string input_string, size_t tab_size = 4);
};