#include<iostream>
using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

   
//     bool isPrime = true;

   
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
           
//             isPrime = false;
//             break;  
//         }
//     }

//     if (isPrime) {
//         cout << "The number is prime" << endl;
//     } else {
//         cout << "The number is not prime" << endl;
//     }

//     return 0;
// }


bool isprime(int n) {
    if (n == 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    if (isprime(n)) {
        cout << "The number is prime" << endl;
    } else {
        cout << "The number is not prime" << endl;
    }

    return 0;

}




