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

int main() {
    int a, b;

    cout << "Enter two positive integers: ";
    cin >> a >> b;

    MathUtils* math_utils_ptr = new MathUtils(); // create a MathUtils object pointer

    int gcd_value = math_utils_ptr->gcd(a, b); // call gcd method using the pointer
    int lcm_value = math_utils_ptr->lcm(a, b); // call lcm method using the pointer

    cout << "GCD of " << a << " and " << b << " is " << gcd_value << endl;
    cout << "LCM of " << a << " and " << b << " is " << lcm_value << endl;

    delete math_utils_ptr; // free the allocated memory

    return 0;
}