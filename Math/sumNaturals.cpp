#include <iostream>
#include "Math.h"

int main()
{
    unsigned int limit;
    std::cout << "\nLimit: "; std::cin >> limit;
    
    std::cout << "\nThe sum of naturals is: " << sumNaturals(limit) << std::endl;
}