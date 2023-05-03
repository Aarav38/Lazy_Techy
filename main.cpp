//LCD and GCD calculator by Team LAZY_TECHY
#include <iostream>
#include <algorithm>

using namespace std;

class Calculator {
private:
    int a, b;

    // function to calculate GCD of two numbers
    int gcd(int x, int y) {
        if (y == 0) {
            return x;
        }
        return gcd(y, x % y);
    }

public: