#include <iostream>
#include "DarkPact.h"

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

    return 0;

}