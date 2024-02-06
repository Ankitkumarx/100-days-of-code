#include<iostream>
using namespace std;

int factorai(int n){
    //base case 
    if(n==0)
    return 1;
    
    return n * factorai(n-1);
}

int main(){
    int n;
    cin >> n;
    int ans = factorai(n);
    cout << ans  << endl;
}