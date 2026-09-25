#ifndef DARK_PACT_H
#define DARK_PACT_H

#include <string>


class DarkPact
{
public:
    DarkPact(uint64_t startLevel = 1);

    void upgrade();
    void printStatus() const;
private:
    std::string name;
    uint64_t level;
    uint64_t damage;
    uint64_t selfDamage;
    uint64_t manaCost;
    double cooldown;
};


#endif