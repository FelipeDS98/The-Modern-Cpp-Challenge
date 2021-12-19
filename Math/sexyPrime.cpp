#include <iostream>
#include "Math.h"

int primes[100];

int main()
{    
    int limit;
    int count = 0;

    std::cout << "\nEnter limit: "; std::cin >> limit;

    for (int i = 0; i < limit; i++)
    {
        if (isPrime(i))
        {
            primes[count] = i;
            count += 1;
        }
    }

    std::cout << std::endl;

    for (int j = 0; j < count; j++)
    {
        if (isSexyPrime(primes, j, primes[j] + 6))
        {   
            std::cout << "(" << primes[j] << ", " << primes[j] + 6 << ")" << std::endl;
        }   
    }
    
}