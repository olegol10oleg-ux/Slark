#ifndef POUNCE_H
#define POUNCE_H

#include <string>

class Pounce
{
public:
    Pounce(uint64_t startLevel = 1);

    void upgrade();
    void printStatus() const;
private:
    std::string name;
    uint64_t level;
    uint64_t leapDistance;
    uint64_t latchRadius;
    double leashDuration;
    uint64_t manaCost;
    double cooldown;

};


#endif