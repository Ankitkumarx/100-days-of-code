#include<iostream>
#include <math.h>
using namespace std;
int main() {
    
     int n,r,rev;
     cout << " Enter the  no  that you want :" << endl;
     cin >> n ;
     while(n != 0){
        r=n %10 ;
        rev=rev*10+r;
        n=n/10;

     }
     cout << r;

 return 0;     
      
     



    }
     

    
    