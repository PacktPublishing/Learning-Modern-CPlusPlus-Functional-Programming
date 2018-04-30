/* Main.cpp - Step03 */
#include <iostream>
#include "Customer.h"

using namespace std;

void RegisterCustomers()
{
    int i = 0;
    bool b = false;

    vector<string> nameList =
    {
        "William",
        "Aiden",
        "Rowan",
        "Jamie",
        "Quinn",
        "Haiden",
        "Logan",
        "Emerson",
        "Sherlyn",
        "Molly"
    };

    Customer::registeredCustomers.clear();

    for (auto name : nameList)
    {
        Customer c;
        c.id = i++;
        c.name = name;
        c.address = "somewhere";
        c.phoneNumber = "0123";
        c.email = name + "@xyz.com";
        c.isActive = b;

        b = !b;

        Customer::registeredCustomers.push_back(c);
    }
}

auto main() -> int
{
    cout << "[Step03]" << endl;
    cout << "--------" << endl;

    RegisterCustomers();

    Customer customer;

    cout << "List of active customer names:" << endl;
    vector<string> activeCustomerNames =
        customer.GetActiveCustomerNames();
    for (auto &name : activeCustomerNames)
    {
        cout << name << endl;
    }

    return 0;
}
