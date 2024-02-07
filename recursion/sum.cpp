#include<iostream>
using namespace std;

// Function to calculate the sum of elements in an array recursively
int getsum(int *arr, int size) {

    // Base case: If size is 0, return 0
    if (size == 0) {
        return 0;
    }

    // Base case: If size is 1, return the only element in the array
    if (size == 1) {
        return arr[0];
    }

    // Recursive case:
    // Calculate the sum of the remaining elements in the array (excluding the first element)
    int remainingPart = getsum(arr + 1, size - 1);

    // Sum the first element and the sum of the remaining elements
    int sum = arr[0] + remainingPart;

    // Return the calculated sum
    return sum;
}

int main() {
    int arr[5] = {2, 4, 9, 9, 9};
    int size = 5;

    // Call the getsum function and print the result
    int sum = getsum(arr, size);
    cout << "Sum is: " << sum << endl;

    return 0;
}
