#include <iostream>
#include "Math.h"

int main()
{
    int a;
    std::cout << "\nEnter limit number: "; std::cin >> a;

    std::cout << "\nLargest prime is: " << largestPrime(a) << std::endl;
}