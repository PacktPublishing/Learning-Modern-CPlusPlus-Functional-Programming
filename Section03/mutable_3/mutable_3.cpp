/* mutable_3.cpp */
#include <iostream>
#include "../mutableemployee/mutableemployee.cpp"

using namespace std;

auto main() -> int
{
    cout << "[mutable_3.cpp]" << endl;

    string first = "Frankie";
    string last = "Kaur";
    double d = 1500.0;

    MutableEmployee me(0, first, last, d);

    cout << "Content of MutableEmployee instance" << endl;
    cout << "ID     : " << me.Id() << endl;
    cout << "Name   : " << me.FirstName();
    cout << " " << me.LastName() << endl;
    cout << "Salary : " << me.Salary() << endl << endl;

    me.SetId(1);
    me.SetFirstName("Alexis");
    me.SetLastName("Andrews");
    me.SetSalary(2100.0);

    cout << "Content of MutableEmployee after mutating" << endl;
    cout << "ID     : " << me.Id() << endl;
    cout << "Name   : " << me.FirstName();
    cout << " " << me.LastName() << endl;
    cout << "Salary : " << me.Salary() << endl;

    return 0;
}
