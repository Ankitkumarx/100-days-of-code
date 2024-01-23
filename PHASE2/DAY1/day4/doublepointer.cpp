#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *ptr = &i;
    int **ptr2=&ptr;
    cout << " : " << ptr << endl;  //address of i
    cout << " : " << *ptr << endl; // value of i
    cout << " : " << *ptr2 << endl; //address of ptr
    cout << " : " << **ptr2 << endl; // value of ptr
    cout << " : " <<  ptr2 << endl;  //address of ptr
    cout << " : " << i << endl;
    cout << " : " << &i << endl;  //address of i
    
    
    
    return 0;



}