#include <iostream>
#include <cmath>
#include "Math.h"

int main()
{
    ll a, b;
    std::cout << "\nEnter 'A': "; std::cin >> a;
    std::cout << "Enter 'B': "; std::cin >> b;

    std::cout << "\nGreatest common divisor is: " << gcd(fmin(a, b), fmax(a, b)) << std::endl;
}