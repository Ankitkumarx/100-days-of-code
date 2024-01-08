#include<iostream>
#include<math.h>
using namespace std;

int reverseno(int n) {
    int rev = 0; 
    while (n != 0) {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter the number that you want to reverse: " << endl;
    cin >> n;

    int ri = reverseno(n);

    cout << "Reversed Number: " << ri<< endl;

    return 0;
} 