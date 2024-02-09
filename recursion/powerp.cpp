#include<iostream>
#include<cmath> 

using namespace std;

//simple function.
int main() {
    int x, y;
    cin >> x >> y;
    cout << "power: " << pow(x, y) << endl;
    return 0;
}


// using function.

double calculatePower(int base, int exponent) {
    return pow(base, exponent);
}

int main() {
    int x, y;
    cout << "Enter base and exponent: ";
    cin >> x >> y;

    cout << "Power: " << calculatePower(x, y) << endl;

    return 0;
}


//recursion method

int power(int n, int base) {
    if (n == 0)
        return 1;

    return (base * power(n - 1, base));
}

int main() {
    int n, base;
    cout << "Enter exponent (n): ";
    cin >> n;
    
    cout << "Enter base: ";
    cin >> base;

    int ans = power(n, base);

    cout << "Result: " << ans << endl;
    return 0;
}