#include "DarkPact.h"
#include "Pounce.h"
#include "SaltwaterShiv.h"
#include <iostream>


int main()
{
    std::cout << " SLARK ";


    DarkPact darkPact1(1);
    DarkPact darkPact2(1);

    darkPact1.printStatus();

    for (int i = 0; i < 3; ++i)
    {
        darkPact1.upgrade();
        darkPact1.printStatus();
    }


    Pounce pounce1(1);
    Pounce pounce2(1);

    pounce1.printStatus();

    for (int i = 0; i < 3; ++i)
    {
        pounce1.upgrade();
        pounce1.printStatus();
    }


    SaltwaterShiv saltwaterShiv1(1);
    SaltwaterShiv saltwaterShiv2(1);

    saltwaterShiv1.printStatus();

    for (int i = 0; i < 3; ++i)
    {
        saltwaterShiv1.upgrade();
        saltwaterShiv1.printStatus();
    }

    return 0;
}