/* lambda_initialization_captures.cpp */
#include <iostream>

using namespace std;

auto main() -> int
{
    cout << "[lambda_initialization_captures.cpp]" << endl;

    int a = 5;
    cout << "Initial a = " << a << endl;

    auto myLambda = [&x = a]() { x += 2; };

    myLambda();
    
    cout << "New a     = " << a << endl;

    return 0;
}
