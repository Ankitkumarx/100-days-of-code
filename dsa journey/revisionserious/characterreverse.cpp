#include<iostream>
using namespace std;
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++] , name[e--]);
    }
}

int main(){
    char name[5] = {'a','f','d','e','w'};
    cout << name << endl;

    reverse(name,5);
    cout << "reverse character :" ;
    cout << name << endl;
    return 0;
    
}