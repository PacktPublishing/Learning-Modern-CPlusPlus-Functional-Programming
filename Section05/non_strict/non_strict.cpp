/* non_strict.cpp */
#include <functional>
#include <iostream>

using namespace std;

int OuterFormulaNonStrict(
    int x,
    int y,
    int z,
    function<int(int, int)> yzFunc)
{
    cout << "Calculate " << x << " + ";
    cout << "InnerFormula(" << y << ", ";
    cout << z << ")" << endl;

    return x + yzFunc(y, z);
}

int InnerFormula(int y, int z)
{
    cout << "Calculate " << y << " * ";
    cout << z << endl;

    return y * z;
}

auto main() -> int
{
    cout << "[non_strict.cpp]" << endl;

    int x = 4;
    int y = 3;
    int z = 2;

    cout << "Calculate " << x <<" + ";
    cout << "(" << y << " * " << z  << ")";
    cout << endl;
    int result = OuterFormulaNonStrict(x, y, z, InnerFormula);

    cout << x << " + ";
    cout << "(" << y << " * " << z  << ")";
    cout << " = " << result << endl;

    return 0;
}
