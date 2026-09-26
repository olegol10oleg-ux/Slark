#ifndef SHADOW_DANCE_H
#define SHADOW_DANCE_H

#include <string>

class ShadowDance
{
public:
    ShadowDance(uint64_t startLevel = 1);

    void upgrade();
    void printStatus() const;
private:
    std::string name;
    uint64_t level;
    double duration;
    uint64_t moveSpeedBonus;
    uint64_t manaCost;
    double cooldown;

};


#endif