#include<iostream>
using namespace std;

bool search (int arr[] , int size , int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[5]={ 5 , 1 , 6 , 8 ,9};
   cout<< "enter the element to search for" << endl;
   int key ;
   cin >> key ;
   bool found = search(arr,5,key);
   if(found){
       cout << " key present on the given data "<< endl;
       
   }
    else {
        cout << " key is not present on the given data "<< endl;
        
    }
}