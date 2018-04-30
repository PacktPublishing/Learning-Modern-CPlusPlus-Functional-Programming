/* Main.cpp - Step04 */
#include <iostream>
#include "Customer.h"

using namespace std;

vector<Customer> RegisterCustomers()
{
    int i = 0;
    bool b = false;

    vector<Customer> returnValue;

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

        returnValue.push_back(c);
    }

    return returnValue;
}

auto main() -> int
{
    cout << "[Step04]" << endl;
    cout << "--------" << endl;

    Customer customer;

    cout << "List of active customer names:" << endl;
    vector<string> activeCustomerNames =
        customer.GetActiveCustomerNames(
            RegisterCustomers());
    for (auto name : activeCustomerNames)
    {
        cout << name << endl;
    }

    return 0;
}
