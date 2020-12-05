#pragma once

struct Dwarf : public Character
{
    Dwarf(std::string name, int hp, int armor) : Character(hp, armor, 0) {}

    std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};