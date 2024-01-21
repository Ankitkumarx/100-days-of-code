#include<iostream>
using namespace std;

int calculateGCD(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}
 
int main() {
    int num1, num2;

    cout << "Enter the values of num1 and num2: ";
    cin >> num1 >> num2;

    int gcd_result = calculateGCD(num1, num2);
    int lcm_result = (num1 * num2) / gcd_result;

    cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd_result << endl;
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm_result << endl;

    return 0;
}
