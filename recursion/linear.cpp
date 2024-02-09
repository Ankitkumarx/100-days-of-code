#include<iostream>
using namespace std;
bool LinearSearch(int arr[] , int size , int k){
    //base case 
    if(size == 0)
    return false;

    if(arr[0] == k){
        return true;
    }
    // recursive call 
    else {
        bool remainingpart = LinearSearch
        (arr +1 , size-1 , k);
        return remainingpart;
    }
}




int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;
    bool ans = LinearSearch(arr,size,key);
    

    if(ans){
        cout << "present" << endl;
    }
    else {
        cout << "absent" << endl;
    }
}