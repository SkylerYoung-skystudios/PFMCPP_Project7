#pragma once
#include "Item.h"

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 11) { }
    void use(Character* character) override;
};

