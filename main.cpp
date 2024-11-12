#include "TriangleNumberCalculator.hpp"
#include <iostream>
using namespace std;

int main() {
    TriangleNumberCalculator calc;
    int n, m;
    cin >> n;
    cin >> m;
    cout << "value: " << calc.value(n) << endl;
    cout << "add: " << calc.add(n, m) << endl;
    cout << "subtract: " << calc.subtract(n, m) << endl;
}