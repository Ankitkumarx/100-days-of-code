#include<iostream>
#include<math.h>
using namespace std;

void reversekp(int arr[], int n) {
    int s = 0;
    int l = n - 1;
    while (s < l) {
        swap(arr[s], arr[l]);
        s++;
        l--;
    }
}

int main() {
    int arr[5] = {1, 2, 5, 9, 0};

    // Call the reversekp function to reverse the array
    reversekp(arr, 5);

    // Print the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
} 