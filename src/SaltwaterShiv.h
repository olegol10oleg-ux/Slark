#ifndef SALTWATER_SHIV_H
#define SALTWATER_SHIV_H

#include <string>


class SaltwaterShiv
{
public:
    SaltwaterShiv(uint64_t startLevel = 1);

    void upgrade();
    void printStatus() const;
private:
    std::string name;
    uint64_t level;
    uint64_t healthRestorationChange;
    uint64_t healthRegenChange;
    uint64_t moveSpeedChange;
    double duration;
    uint64_t manaCost;
    double cooldown;


};


#endif