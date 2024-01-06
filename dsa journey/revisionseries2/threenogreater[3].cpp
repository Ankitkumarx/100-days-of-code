#include<iostream>
using namespace std;

int maxno(int a, int b, int c) {
    return (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
}

int maxno(int a, int b, int c);
int main(){
    int a , b , c;
    cout << "Enter the no that you want to check" << endl;
    cin >> a >> b >> c ;
    cout <<"The data you enter" << a << b << c ;
    cout << endl;
    cout <<  "maximum" << maxno(a,b,c);
  
    
    return 0;
    
}