#include<iostream>
using namespace std;

// bool LinearSearch(int arr[] ,  int key , int size){
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }

//     return 0;
// }



// int main(){
//     int arr[5] = {1,2,5,6,3};
//     cout << "Enter the element to search for" << endl;

//     int key;
//     cin >> key;

//     bool found = LinearSearch(arr,5,key);

//     if(found){
//         cout << "key is present" << endl;
//     }

//     else {

//         cout << "key is absent" << endl;
//     }

//     return 0;


// }



bool LinearSearch(int arr[] ,  int key , int size){
    //base case 

    if(size==0){
        return false;

    }

    if(size = key){
        return true;
    }

    else {
        bool remainingpart = LinearSearch
        (arr +1 , size-1 , key);
        return remainingpart;
    }

}

int main(){
    int arr[5] = {1,2,5,6,3};
    cout << "Enter the element to search for" << endl;
    int size = 5;
    int key;
    cin >> key;
    bool found = LinearSearch(arr,5,key);

    if(found){
        cout << "key is present" << endl;
    }
    else {
         cout << "key is absent" << endl;
    }

    return 0;


}