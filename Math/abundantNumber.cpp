#include <iostream>
#include "Math.h"

int main() 
{
    std::cout << "NUMBER" << "\tABUNDANCE" << std::endl;

    for (int i = 12; i <= 120; i++) 
    {  
        int abdc = abundance(i) - i;

        if (abdc > 0) { std::cout << i << "\t" << abdc << std::endl; }
    }
}