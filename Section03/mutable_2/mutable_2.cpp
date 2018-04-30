/* mutable_2.cpp */
#include <iostream>

using namespace std;

void Modify(string &name)
{
    name = "Alexis Andrews";
}

auto main() -> int
{
    cout << "[mutable_2.cpp]" << endl;

    string n = "Frankie Jones";
    cout << "Initial name = " << n;
    cout << endl;

    Modify(n);

    cout << "After manipulating = " << n;
    cout << endl;

    return 0;
}
