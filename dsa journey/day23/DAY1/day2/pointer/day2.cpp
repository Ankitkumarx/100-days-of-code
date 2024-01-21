#include<iostream>
using namespace std;
int main(){

    //Null Pointer
    // int *ptr = 0;
    // cout << "The value of ptr is :" << ptr;
    int a =10;
    int *p=&a;
    int **q=&p;
    cout << &a << endl;
    cout << p << endl;
    cout << *q << endl;
    return 0;
}  