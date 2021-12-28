#include <iostream>
#include "Math.h"

int main() 
{
    std::cout << "NUMBER" << "\tABUNDANCE" << std::endl;

    for (int i = 12; i <= 120; i++) 
    {  
        if (abundantNumber(i)) { std::cout << i << "\t" << abundance(i) - i << std::endl; }
    }
}