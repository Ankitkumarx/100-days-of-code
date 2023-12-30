#include<iostream>
using namespace std;

void printingcouting(int n) {
    for(int i=0; i<=n; i++){
        cout << endl;
        cout << i << "";
    }
     cout << endl;
}
int main() {
    int n;
    cin >> n;
    printingcouting(n);
    return 0;
}