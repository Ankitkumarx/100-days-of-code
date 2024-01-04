#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<char>& s) {
    int start = 0, end = s.size() - 1;
    while (start < end) {
        swap(s[start++], s[end--]);
    }
}

int main() {
    vector<char> s = {'a', 'f', 'd', 'e', 'w'};
    
    cout << "Original characters: ";
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;

    reverse(s);

    cout << "Reversed characters: ";
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}