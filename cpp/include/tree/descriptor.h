#pragma once
#include "tree/language_node.h"
#include <optional>

class Descriptor : public LanguageNode {
public:
    Descriptor(string name, std::optional<uint32_t> index = std::nullopt);
    string name;
    std::optional<uint32_t> index;
    string compile() override;
};