#pragma once
#include "Character.h"

struct DragonSlayer : public Character
{
    DragonSlayer(std::string name_, int hp, int armor);

    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;

    std::unique_ptr<Item> attackItem;
private:
    const std::string name;
};