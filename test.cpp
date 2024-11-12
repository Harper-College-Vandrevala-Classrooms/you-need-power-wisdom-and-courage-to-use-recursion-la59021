#include "TriangleNumberCalculator.hpp"
#include <cassert>
#include <iostream>
using namespace std;

int main() {
    TriangleNumberCalculator calc;
    // testing value method
    assert(calc.value(1) == 1);
    assert(calc.value(0) == 0);
    assert(calc.value(-1) == 0);
    assert(calc.value(7) == 28);
    assert(calc.value(9) == 45);
    assert(calc.value(30) == 465);
    cout << "value method working" << endl;

    assert(calc.add(1, 1) == 2);
    assert(calc.add(1, 0) == 1);
    assert(calc.add(-1, 1) == 1);
    assert(calc.add(9, 7) == 73);
    cout << "add method working" << endl;

    assert(calc.subtract(1, 1) == 0);
    assert(calc.subtract(1, 0) == 1);
    assert(calc.subtract(-1, 1) == -1);
    assert(calc.subtract(9, 7) == 17);
    cout << "subtract method working" << endl;

    cout << "all tests passed" << endl;
    return 0;
}