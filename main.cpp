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
// constructor
    Calculator(int x, int y) {
        a = x;
        b = y;
    }

    // method to calculate LCM
    int lcm() {
        return abs(a * b) / gcd(a, b);
    }

    // method to calculate GCD
    int gcd() {
        return gcd(abs(a), abs(b));
    }
};

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
