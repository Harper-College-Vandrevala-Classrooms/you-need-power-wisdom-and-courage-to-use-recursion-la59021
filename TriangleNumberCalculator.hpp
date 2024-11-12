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
};