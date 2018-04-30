/* tail_recursion.cpp */
#include <iostream>

using namespace std;

void displayNumber(long long n)
{
    cout << n << endl;

    displayNumber(n + 1);
}

auto main() -> int
{
    cout << "[tail_recursion.cpp]" << endl;
    
    displayNumber(0);
    return 0;
}
