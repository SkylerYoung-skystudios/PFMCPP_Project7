#include "Paladin.h"

Paladin::Paladin(std::string name, int hp, int armor) : Character(hp, armor, 10) {}  

std::string Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(*this);
}