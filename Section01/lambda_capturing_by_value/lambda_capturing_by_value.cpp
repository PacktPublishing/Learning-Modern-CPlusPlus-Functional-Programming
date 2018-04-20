/* lambda_capturing_by_value.cpp */
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

auto main() -> int
{
    cout << "[lambda_capturing_by_value.cpp]" << endl;

    vector<int> vect;
    for (int i = 0; i < 10; ++i)
        vect.push_back(i);

    cout << "Original Data:" << endl;
    for_each(
             begin(vect),
             end(vect),
             [](int n){
                cout << n << " ";
            });
    cout << endl;

    int a = 2;
    int b = 8;

    cout << "Printing elements between " << a;
    cout << " and " << b << " explicitly [a,b]:" << endl;
    for_each(
             begin(vect),
             end(vect),
             [a,b](int n){
                if (n >= a && n <= b)
                    cout << n << " ";
            });
     cout << endl;

     a = 3;
     b = 7;
     
     cout << "printing elements between " << a;
     cout << " and " << b << " implicitly[=]:" << endl;
     for_each(
              begin(vect),
              end(vect),
              [=](int n){
                if (n >= a && n <= b)
                cout << n << " ";
            });
     cout << endl;

     return 0;
}
