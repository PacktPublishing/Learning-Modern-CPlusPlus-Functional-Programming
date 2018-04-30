/* const.cpp */
#include <iostream>

using namespace std;

class MyAge
{
public:
    const int age;
    MyAge(const int initAge = 20) :
        age(initAge)
    {
    }
};

auto main() -> int
{
    cout << "[const.cpp]" << endl;

    MyAge AgeNow, AgeLater(28);

    cout << "My current age is ";
    cout << AgeNow.age << endl;
  
    cout << "My age in eight years later is ";
    cout << AgeLater.age << endl;

    return 0;
}
