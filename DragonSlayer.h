#pragma once

struct DragonSlayer : public Character
{
    DragonSlayer(std::string name, int hp, int armor) : Character(hp, armor, 0) {}

    std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;

private:
    const std::string name;
};