#pragma once
#include "Character.h"

struct Dwarf : public Character
{
    Dwarf(std::string name, int hp, int armor);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};