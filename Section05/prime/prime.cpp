/* prime.cpp */
#include <iostream>
#include <cmath>

using namespace std;

bool PrimeCheck(int i)
{
    if ((i % 2) == 0)
    {
        return i == 2;
    }

    int sqr = sqrt(i);

    for (int t = 3; t <= sqr; t += 2)
    {
        if (i % t == 0)
        {
            return false;
        }
    }

    return i != 1;
}

auto main() -> int
{
    cout << "[prime.cpp]" << endl;

    int n = 0;

    cout << "List of the first 100 prime numbers:" << endl;
    for (int i = 0; ; ++i)
    {
        if (PrimeCheck(i))
        {
            cout << i << "\n";

            if (++n == 100)
                return 0;
        }
    }

    return 0;
}
