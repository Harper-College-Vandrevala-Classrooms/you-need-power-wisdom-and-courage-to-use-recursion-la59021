#include <list>
using namespace std;

class TriangleNumberCalculator {
    public:
        int value(int n) {
            if (n <= 0) {
                return 0;
            }
            return value(n-1) + n;
        }
        int add(int n, int m) {
            return value(n) + value(m);
        }
        int subtract(int n, int m) {
            return value(n) - value(m);
        }
        int multiply(int n, int m) {
            return value(n) * value(m);
        }
        double divide(int n, int m) {
            if (m == 0)
            return -1;
            return value(n) / value(m);
        }
        list<int> sequence(int n) {
            list<int> x;
            if (n <= 0) {
                x = {0};
            }
            else for (int i = 1; i <= n; i++) {
                x.push_back(value(i));
            }
            return x;
        }
};