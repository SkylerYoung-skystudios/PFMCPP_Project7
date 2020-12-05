#pragma once

struct Paladin : public Character
{
    Paladin(std::string name, int hp, int armor) : Character(hp, armor, 0) {}

    std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};