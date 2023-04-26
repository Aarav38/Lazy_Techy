#include <iostream>
using namespace std;

class MathUtils {
public:
    int gcd(int a, int b) {
        if (a == 0) {
            return b;
        }
        return gcd(b % a, a);
    }

    int lcm(int a, int b) {
        int gcd_value = gcd(a, b);
        return (a / gcd_value) * b;
    }
};

