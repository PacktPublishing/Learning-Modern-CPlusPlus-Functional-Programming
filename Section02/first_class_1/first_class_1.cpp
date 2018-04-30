/* first_class_1.cpp */
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

void PassingFunc(
    FuncType fn, int x, int y)
{
    cout << "Result = " << fn(x, y) << endl;
}

auto main() -> int
{
    cout << "[first_class_1.cpp]" << endl;

    int i, a, b;
    FuncType func;

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

    switch(i)
    {
        case 1: PassingFunc(addition, a, b); break;
        case 2: PassingFunc(subtraction, a, b); break;
        case 3: PassingFunc(multiplication, a, b); break;
        case 4: PassingFunc(division, a, b); break;
    }

    return 0;
}
