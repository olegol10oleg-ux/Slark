#include "SaltwaterShiv.h"
#include <iostream>

SaltwaterShiv::SaltwaterShiv(uint64_t startLevel)
{
    name = "SALTWATER SHIV";

    if (startLevel < 1)
        startLevel = 1;
    if (startLevel > 4)
        startLevel = 4;
    level = startLevel;

    switch (level)
    {
        case 1:
            healthRestorationChange = 4;
            healthRegenChange = 4;
            moveSpeedChange = 4;
            duration = 12.0;
            manaCost = 25;
            cooldown = 12.0;
            break;
        case 2:
            healthRestorationChange = 8;
            healthRegenChange = 8;
            moveSpeedChange = 8;
            duration = 12.0;
            manaCost = 30;
            cooldown = 10.5;
            break;
        case 3:
            healthRestorationChange = 12;
            healthRegenChange = 12;
            moveSpeedChange = 12;
            duration = 12.0;
            manaCost = 35;
            cooldown = 9.0;
            break;
        case 4:
            healthRestorationChange = 16;
            healthRegenChange = 16;
            moveSpeedChange = 16;
            duration = 12.0;
            manaCost = 40;
            cooldown = 7.5;
            break;
    }
}

void SaltwaterShiv::upgrade()
{

    level = ++level;

    switch (level)
    {
        case 2:
            healthRestorationChange = 8;
            healthRegenChange = 8;
            moveSpeedChange = 8;
            duration = 12.0;
            manaCost = 30;
            cooldown = 10.5;
            break;
        case 3:
            healthRestorationChange = 12;
            healthRegenChange = 12;
            moveSpeedChange = 12;
            duration = 12.0;
            manaCost = 35;
            cooldown = 9.0;
            break;
        case 4:
            healthRestorationChange = 16;
            healthRegenChange = 16;
            moveSpeedChange = 16;
            duration = 12.0;
            manaCost = 40;
            cooldown = 7.5;
            break;
    }

    std::cout << "LEVEL UP " << name << " upgraded to Level " << level << "!";
}

void SaltwaterShiv::printStatus() const
{
    std::cout << std::endl;
    std::cout << "Ability: " << name << std::endl << "LEVEL " << level << std::endl;
    std::cout << "Health Restoration Change per Attack: " << healthRestorationChange << "%" << std::endl;
    std::cout << "Health Regen Change per Attack: " << healthRegenChange << std::endl;
    std::cout << "Move Speed Change per Attack: " << moveSpeedChange << std::endl;
    std::cout << "Duration: " << duration << "s" << std::endl;
    std::cout << "Mana Cost: " << manaCost << std::endl;
    std::cout << "Cooldown: " << cooldown << "s" << std::endl;
    std::cout << "--------------------------------" << std::endl;
}