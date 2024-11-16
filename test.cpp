#include "TriangleNumberCalculator.hpp"
#include <vector>
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

    assert(calc.multiply(1, 1) == 1);
    assert(calc.multiply(1, 0) == 0);
    assert(calc.multiply(-1, 1) == 0);
    assert(calc.multiply(9, 7) == 1260);
    cout << "multiply method working" << endl;

    assert(calc.divide(1, 1) == 1);
    assert(calc.divide(1, 0) == -1);
    assert(calc.divide(-1, 1) == 0);
    assert(calc.divide(9, 7) == double(45/28));
    cout << "divide method working" << endl;

    list<int> x;
    x = {1};
    assert(calc.sequence(1) == list<int>{1});
    x = {0};
    assert(calc.sequence(0) == list<int>{0});
    x = {0};
    assert(calc.sequence(-1) == list<int>{0});
    x = {1,3,6,10,15,21,28,36,45};
    assert(calc.sequence(9) == (list<int>{1,3,6,10,15,21,28,36,45}));
    cout << "sequence method working" << endl;

    cout << "all tests passed" << endl;
    return 0;
}