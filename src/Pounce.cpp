#include "Pounce.h"
#include <iostream>

Pounce::Pounce(uint64_t startLevel)
{
    name = "POUNCE";

    if (startLevel < 1)
        startLevel = 1;
    if (startLevel > 4)
        startLevel = 4;
    level = startLevel;

    switch (level)
    {
        case 1:
            leapDistance = 700;
            latchRadius = 120;
            leashDuration = 2.5;
            manaCost = 75;
            cooldown = 24.0;
            break;
        case 2:
            leapDistance = 700;
            latchRadius = 120;
            leashDuration = 2.75;
            manaCost = 75;
            cooldown = 20.0;
            break;
        case 3:
            leapDistance = 700;
            latchRadius = 120;
            leashDuration = 3.0;
            manaCost = 75;
            cooldown = 16.0;
            break;
        case 4:
            leapDistance = 700;
            latchRadius = 120;
            leashDuration = 3.25;
            manaCost = 75;
            cooldown = 12.0;
            break;
    }
}

void Pounce::upgrade()
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
            leapDistance = 700;
            latchRadius = 120;
            leashDuration = 2.75;
            manaCost = 75;
            cooldown = 20.0;
            break;
        case 3:
            leapDistance = 700;
            latchRadius = 120;
            leashDuration = 3.0;
            manaCost = 75;
            cooldown = 16.0;
            break;
        case 4:
            leapDistance = 700;
            latchRadius = 120;
            leashDuration = 3.25;
            manaCost = 75;
            cooldown = 12.0;
            break;
    }

    std::cout << "LEVEL UP " << name << " upgraded to Level " << level << "!";
}

void Pounce::printStatus() const
{
    std::cout << std::endl;
    std::cout << "Ability: " << name << std::endl << "LEVEL " << level << std::endl;
    std::cout << "Leap Distance: " << leapDistance << std::endl;
    std::cout << "Latch Radius: " << latchRadius << std::endl;
    std::cout << "Leash Duration: " << leashDuration << "s" << std::endl;
    std::cout << "Mana Cost: " << manaCost << std::endl;
    std::cout << "Cooldown: " << cooldown << "s" << std::endl;
    std::cout << "--------------------------------" << std::endl;
}