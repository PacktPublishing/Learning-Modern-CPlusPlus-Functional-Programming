/* strict.cpp */
#include <iostream>

using namespace std;

int OuterFormula(int x, int yz)
{
    cout << "Calculate " << x << " + ";
    cout << "InnerFormula(" << yz << ")";
    cout << endl;

    return x + yz;
}

int InnerFormula(int y, int z)
{
    cout << "Calculate " << y << " * ";
    cout << z << endl;

    return y * z;
}

auto main() -> int
{
    cout << "[strict.cpp]" << endl;

    int x = 4;
    int y = 3;
    int z = 2;

    cout << "Calculate " << x <<" + ";
    cout << "(" << y << " * " << z  << ")";
    cout << endl;
    int result = OuterFormula(x, InnerFormula(y, z));

    cout << x << " + ";
    cout << "(" << y << " * " << z  << ")";
    cout << " = " << result << endl;

    return 0;
}
