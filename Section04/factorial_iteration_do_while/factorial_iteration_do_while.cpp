/* factorial_iteration_do_while.cpp */
#include <iostream>

using namespace std;

int factorial (int n)
{
    int result = 1;
    int i = 1;

    do
    {
        result *= i;
    }
    while(++i <= n);

    return result;
}

auto main() -> int
{
    cout << "[factorial_iteration_do_while.cpp]" << endl;

    for(int i = 1; i < 10; ++i)
    {
        cout << i << "! = " << factorial(i) << endl;
    }

    return 0;
}
