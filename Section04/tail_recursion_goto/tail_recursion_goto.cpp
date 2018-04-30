/* tail_recursion_goto.cpp */
#include <iostream>

using namespace std;

void displayNumber(long long n)
{
loop:
    cout << n << endl;

    n++;
    goto loop;
}

auto main() -> int
{
    cout << "[tail_recursion_goto.cpp]" << endl;
    
    displayNumber(0);

    return 0;
}
