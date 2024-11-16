#include "TriangleNumberCalculator.hpp"
#include <iostream>
#include <list>
using namespace std;

int main() {
    TriangleNumberCalculator calc;
    int n, m;
    cout << "enter n: "; 
    cin >> n;
    cout << "enter m: ";
    cin >> m;
    cout << "value of n: " << calc.value(n) << endl;
    cout << "value of m: " << calc.value(m) << endl;
    cout << "add n and m: " << calc.add(n, m) << endl;
    cout << "subtract m from n: " << calc.subtract(n, m) << endl;
    cout << "multiply n and m: " << calc.multiply(n, m) << endl;
    cout << "divide n by m: " << calc.divide(n, m) << endl;
    cout << "sequence of n: ";
    list<int> seq = calc.sequence(n);
    for (int x = 0; seq.size() > 1; x++) {
        cout << seq.front() << ", ";
        seq.pop_front();
    }
    cout << seq.front() << endl;
    cout << "sequence of m: ";
    seq = calc.sequence(m);
    for (int x = 0; seq.size() > 1; x++) {
        cout << seq.front() << ", ";
        seq.pop_front();
    }
    cout << seq.front() << endl;
}