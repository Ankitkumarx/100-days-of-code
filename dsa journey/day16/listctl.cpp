/*List--> when talking about list , its implementation occuus due to
double-linked lists by the use of double-linked list , list stl has been made */

/*double linked --> there are two pointer , one for front and another one for back*/

#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    list<int> n(5,100);
    cout << "printing n" << endl;
    for(int i : n){
        cout <<endl;
        cout << i << "";
    }
    
    cout <<endl;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout <<endl;
        cout << i << "";
        }
    cout<<"size of list" << l.size() << endl;
    
}