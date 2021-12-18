#include <iostream>
#include<string>
#define ll unsigned long long

ll sumNaturals(unsigned int limit)
{
    ll result = 0;

    for (ll i = 3; i <= limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }

    return result;
}

ll gcd(ll a, ll b)
{
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

ll lcmSimple(ll a, ll b)
{
    return a * b / gcd(a, b);
}

int lcm(int a[], int size)
{
    int b[size];
    std::copy(a, a + size, b);
    
    while (true)
    {   
        ll min = 10000;
        int index = 0, count = 0;

        for (int i = 0; i < size; i++)
        {
            if (min > b[i])
            {
                min = b[i];
                index = i;
            }

            if (b[i] == b[i + 1])
            {
                count += 1;
            }
        }

        b[index] += a[index];
        
        if (count == (size - 1)) { break; }
    }

    return b[size - 1];
}

int largestPrime(int a)
{
    int result = 0;

    while (a--)
    {   
        int sum = 0;
        std::string s = std::to_string(a);

        if (s[s.size() - 1] != '5' || a == 5) { 
            if (a % 2 != 0 && a != 9)
            {
                if (!s.empty())
                {
                    for (int i = 0; i < s.size(); i++)
                    {
                        sum += s[i] - '0';
                    }
                }            

                if (sum % 3 != 0 || a == 3)
                {
                    result = a;
                    break;
                }
            }
        }
    }

    return a > 0 && a < 3 ? 2 : result;
}