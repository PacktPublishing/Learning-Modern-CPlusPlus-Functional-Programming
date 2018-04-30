/* first_class_4.cpp */
#include <vector>
#include <cmath>
#include <algorithm>
#include <functional>
#include <iostream>

using std::vector;
using std::function;
using std::transform;
using std::back_inserter;
using std::cout;
using std::endl;

typedef function<double(double)> HyperbolicFunc;

vector<HyperbolicFunc> funcs = {
    sinh,
    cosh,
    tanh,
    [](double x) {
        return x*x; }
};

vector<HyperbolicFunc> inverseFuncs = {
    asinh,
    acosh,
    atanh,
    [](double x) {
        return exp(log(x)/2); }
};

template <typename A, typename B, typename C>
function<C(A)> compose(
    function<C(B)> f,
    function<B(A)> g) {
        return [f,g](A x) {
            return f(g(x));
    };
}

auto main() -> int
{
    cout << "[first_class_4.cpp]" << endl;

    vector<HyperbolicFunc> composedFuncs;

    vector<double> nums;
    for (int i = 1; i <= 5; ++i)
        nums.push_back(i * 0.2);
    
    transform(
        begin(inverseFuncs),
        end(inverseFuncs),
        begin(funcs),
        back_inserter(composedFuncs),
        compose<double, double, double>);

    for (auto num: nums)
    {
        for (auto func: composedFuncs)
            cout << "f(g(" << num << ")) = " << func(num) << endl;

        cout << "---------------" << endl;
    }

    return 0;
}
