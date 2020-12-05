#include "Dwarf.h"

Dwarf::Dwarf(std::string name, int hp, int armor) : Character(hp, armor, 4) {}  

std::string Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(*this);
}

/*
    Dwarf(std::string name, int hp, int armor) : Character(hp, armor, 0) {} override 

    std::string& getName() override
    {
        return name;
    }

    std::string getStats() override
    {
        return std::string = "hp is " << hp;
    }
*/

