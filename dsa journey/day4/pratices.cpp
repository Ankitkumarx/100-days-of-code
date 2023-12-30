/*#include <iostream>
using namespace std;

int main() {
    int a , b = 1;
    a= 10;
    if(++a)
     cout << b;
     else 
     cout << ++b;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    int a=1 , b = 2;
    if(a--> 0 && ++b > 2){
        cout << "stage1- Inside If";
        
    }
    else {
        cout << "stage2 - Inside else";
    }
    cout << a << "" << b << endl; 
    return 0;
}
*/

/*#include <iostream>
using namespace std;

int main() {
    int a=1 , b = 2;
    if(a--> 2 || ++b > 0){
        cout << "stage1- Inside If";
        
    }
    else {
        cout << "stage2 - Inside else";
    }
    cout << a << "" << b << endl; 
    return 0;
}


*/

/*#include <iostream>
using namespace std;

int main() {
    int n = 3;
    cout << (25 * (++n));
    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = a++;
    int c = ++a;
    cout <<b;
    cout <<c;
    return 0;
}*/

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 1;
//     int b = a++;
//     int c = ++a;
//     cout <<b;
//     cout <<c;
//     return 0;
// }

/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    
    cout << "printing count from 1 to n" <<endl;
    
    for(int i = 1; i<=n; i++){
        cout << i << endl;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    
    cout << "printing count from 1 to n" <<endl;
    int i = 1;
    for(; ;){
        if(i<=n){
        cout << i << endl;
    }
    else {
        break;
    }
     
    i++;
    
}
}*/
/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    
    int sum = 0;
    
    for(int i=1; i<=n; i++){
          sum = sum + i;    
    }
    
    cout<< sum <<endl;
}
*/
/*#include <iostream>
using namespace std;

int main() {
     
     int n=10;   // 0 1 1 2 3 5 8 13 21 34 55
     int a=0;
     int b=1;
     
     cout << a << "" << b << "";
     for(int i=1; i<=n; i++){
         int c = a + b;
         cout << c << "";
         
         a=b;
         b=c;
     }
     
}
*/
/*
#include <iostream>
using namespace std;

int main() {
     
     int n;
     cout << "Enter the value of n :" << endl;
     cin >> n;
     
     bool isprime = 1; // -->> prime no 
     
     for(int i=2; i<n; i++){
         if(n%i==0){
             isprime=0; // -->> not prime no 
             break;
         }
     }
     
     if(isprime ==0){
         cout << "Not a prime no" << endl;
     }
     
     else {
         cout << " Prime no" << endl;
     }
}

*/



