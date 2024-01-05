#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int num1, num2, largest;
    num1=32,num2=47; 
 
    if(num1 == num2)
        cout << "Both are Equal\n"; 
    else { 
        largest = num1 > num2? num1 : num2;
        cout << largest << " is largest";
    }

  return 0;
}