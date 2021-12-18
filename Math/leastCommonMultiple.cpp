#include <iostream>
#include "Math.h"

int main()
{
    int size;
    std::cout << "\nEnter size of array: "; std::cin >> size;
    std::cout << "----------------------" << std::endl;

    int l1[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "[" << i + 1 << "]: "; std::cin >> l1[i];
    }

    int result = lcm(l1, size);
    std::cout << "\nLess common multiple is: " << result << std::endl;
}

