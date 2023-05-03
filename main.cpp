//LCD and GCD calculator by Team LAZY_TECHY
#include <iostream>


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
        return gcd(abs(a), abs(b)); // Method Overloading
    }
};

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    
    int numbers[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int gcd_result = numbers[0];
    int lcm_result = numbers[0];
    for (int i = 1; i < n; i++) {
        gcd_result = Calculator(gcd_result, numbers[i]).gcd();
        lcm_result = Calculator(lcm_result, numbers[i]).lcm();
    }

    cout << "The GCD of the " << n << " integers is: " << gcd_result << endl;
    cout << "The LCM of the " << n << " integers is: " << lcm_result << endl;

    return 0;
}
