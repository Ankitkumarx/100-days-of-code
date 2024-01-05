//Find the Sum of Numbers in a Given Interval in C++;

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter your 1st number" << endl;
    cin >> n ;
    int k ;
    cout << "Enter your 2nd number" << endl;
    cin >> k ;
    int sum = 0;
    for(int i=n; i<=k; i++){
        sum = sum + i;
        cout << "sum from" << sum;
        }
     
    return 0;
}