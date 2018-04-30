/* mutable_1.cpp */
#include <iostream>

using namespace std;

auto main() -> int
{
    cout << "[mutable_1.cpp]" << endl;

    int mutableVar = 100;
    cout << "Initial mutableVar = " << mutableVar;
    cout << endl;

    for(int i = 0; i <= 10; ++i)
        mutableVar = mutableVar + i;
    
    cout << "After manipulating mutableVar = " << mutableVar;
    cout << endl;

    return 0;
}
