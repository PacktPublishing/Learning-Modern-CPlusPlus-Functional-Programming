/* permutation.cpp */
#include <iostream>

using namespace std;

void doPermute(
    const string &chosen,
    const string &remaining)
{
    if(remaining == "")
    {
        cout << chosen << endl;
    }
    else
    {
        for(uint32_t u = 0; u < remaining.length(); ++u)
        {
            doPermute(
            chosen + remaining[u],
            remaining.substr(0, u)
                + remaining.substr(u + 1));
        }
    }
}

void permute(
    const string &s)
{
    doPermute("", s);
}

auto main() -> int
{
    cout << "[permutation.cpp]" << endl;

    string str;
    cout << "Permutation of a string" << endl;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << endl << "The possibility permutation of ";
    cout << str << endl;
    permute(str);

    return 0;
}
