//Positive or Negative number

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter your number" << endl;
    cin >> n ;
    if(n>0){
          cout << "positive no" << endl;
    }
   else if (n < 0) {
          cout << "Negative no" << endl;
    }
     else {
        cout << "Zero";
     }
    return 0;
}