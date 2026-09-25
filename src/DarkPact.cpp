#include "DarkPact.h"
#include <iostream>

DarkPact::DarkPact(uint64_t startLevel)
{
    name = "Dark Pact";
    isReady = true;

    if (startLevel < 1)
        startLevel = 1;
    if (startLevel > 4)
        startLevel = 4;
    level = startLevel;

    switch (level)
    {
        case 1:
            damage = 75;
            selfDamage = 22;
            manaCost = 65;
            cooldown = 9.0;
            break;
        case 2:
            damage = 150;
            selfDamage = 45;
            manaCost = 65;
            cooldown = 8.0;
            break;
        case 3:
            damage = 225;
            selfDamage = 67;
            manaCost = 65;
            cooldown = 7.0;
            break;
        case 4:
            damage = 300;
            selfDamage = 90;
            manaCost = 65;
            cooldown = 6.0;
            break;
    }
}

void DarkPact::upgrade()
{
    if (level >= 4)
    {
        std::cout << "MAX " << name << " is already at level 4!" << std::endl;
        return;
    }

    level = ++level;

    switch (level)
    {
        case 2:
            damage = 150;
            selfDamage = 45;
            manaCost = 65;
            cooldown = 8.0;
            break;
        case 3:
            damage = 225;
            selfDamage = 67;
            manaCost = 65;
            cooldown = 7.0;
            break;
        case 4:
            damage = 300;
            selfDamage = 90;
            manaCost = 65;
            cooldown = 6.0;
            break;
    }

    std::cout << "LEVEL UP " << name << " upgraded to Level " << level << "!";
}

void DarkPact::printStatus() const
{
    std::cout <<  std::endl;
    std::cout << "Ability: " << name << std::endl << "LEVEL " << level << std::endl ;
    std::cout << "Damage: " << damage << std::endl;
    std::cout << "Self Damage: " << selfDamage << " (30%)" << std::endl;
    std::cout << "Mana Cost: " << manaCost << std::endl;
    std::cout << "Cooldown: " << cooldown << std::endl;
    std::cout << "--------------------------------" << std::endl;

}