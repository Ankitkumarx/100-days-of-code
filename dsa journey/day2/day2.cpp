#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "enter the value of a : " ;
    cin >> a;

    if(a>0){
        cout << "A is positive";

    }
    else if (a<0){
        cout << "A is negative";
    }

    else {

        cout << "A is 0";
    }
    return 0;
}

