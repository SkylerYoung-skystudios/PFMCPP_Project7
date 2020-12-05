#include "Dwarf.h"

//Dwarf::Dwarf

//Dwarf::getName

//Dwarf::getStats


    Dwarf(std::string name, int hp, int armor) : Character(hp, armor, 0) {} override 

    std::string& getName() override
    {
        return name;
    }

    std::string getStats() override
    {
        return std::string = "hp is " << hp;
    }