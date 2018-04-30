/* factorial_iteration_for.cpp */
#include <iostream>

using namespace std;

int factorial (int n)
{
    int result = 1;

    for(int i = 1; i <= n; ++i)
    {
        result *= i;
    }

    return result;
}

auto main() -> int
{
    cout << "[factorial_iteration_for.cpp]" << endl;
    
    for(int i = 1; i < 10; ++i)
    {
        cout << i << "! = " << factorial(i) << endl;
    }

    return 0;
}
