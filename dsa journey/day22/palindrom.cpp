#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, r, rev = 0;
    cout << "Enter the number that you want: " << endl;
    cin >> n;

    int originalN = n; // Store the original value of n to compare later

    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if (originalN == rev)
        cout << "Palindrome no hai bhai" << endl;
    else
        cout << "Nahi hai bhai palindrome tu" << endl;

    return 0;
}
    