/* first_class_3.cpp */
#include <vector>
#include <functional>
#include <iostream>

using namespace std;

typedef function<int(int, int)> FuncType;

int addition(int x, int y)
{
    return x + y;
}

int subtraction(int x, int y)
{
    return x - y;
}

int multiplication(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    return x / y;
}

auto main() -> int
{
    cout << "[first_class_3.cpp]" << endl;

    vector<FuncType> functions;

    functions.push_back(addition);
    functions.push_back(subtraction);
    functions.push_back(multiplication);
    functions.push_back(division);

    int i, a, b;
    function<int(int, int)> func;

    cout << "Select mode:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Choice: ";
    cin >> i;

    if(i < 1 || i > 4)
    {
        cout << "Please select available mode!";
        return 1;
    }

    cout << "a -> ";
    cin >> a;

    while (cin.fail())
    {

        cin.clear();

        cin.ignore(INT8_MAX, '\n');

        cout << "You can only enter numbers.\n";
        cout << "Enter a number for variable a -> ";
        cin >> a;
    }

    cout << "b -> ";
    cin >> b;

    while (cin.fail())
    {

        cin.clear();

        cin.ignore(INT8_MAX, '\n');

        cout << "You can only enter numbers.\n";
        cout << "Enter a number for variable b -> ";
        cin >> b;
    }

    cout << "Result = " << functions.at(i - 1)(a, b) << endl;

    return 0;
}
