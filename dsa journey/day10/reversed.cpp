#include<iostream>
using namespace std;

// Function to reverse an array
void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the indices toward the center
        start++;
        end--;
    }
}

// Function to print an array
void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    // Reverse arrays
    reverse(arr, 6);
    reverse(brr, 5);

    // Print reversed arrays
    cout << "Reversed arr: ";
    printarray(arr, 6);

    cout << "Reversed brr: ";
    printarray(brr, 5);

    return 0;
}
