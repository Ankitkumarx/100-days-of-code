#include<iostream>
using namespace std;
int getsum(int *arr , int n){
    cout << endl << "Size :" << sizeof(arr) << endl;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[6]={1,2,3,4,5,10};
    cout << "sum is :" << getsum(arr+3,3) <<endl;
    return 0;   
}