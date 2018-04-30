/* mutable_2a.cpp */
#include <iostream>

using namespace std;

class Name
{
public:
    string str;
};

void Modify(Name &name)
{
    name.str = "Alexis Andrews";
}

auto main() -> int
{
    cout << "[mutable_2a.cpp]" << endl;

    Name n = {"Frankie Jones"};
    cout << "Initial name = " << n.str;
    cout << endl;

    Modify(n);
    
    cout << "After manipulating = " << n.str;
    cout << endl;

    return 0;
}
