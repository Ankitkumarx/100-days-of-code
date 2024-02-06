#include<iostream>
using namespace std;
void reachhome(int src, int dest){

    //base case 

    if(src==dest){
        cout << "pahuch gya" << endl;
        return ;
    }
// processing - ek step aage badhjao

src++;

//recursive call

reachhome(src,dest);


}






int main(){
    int dest = 10;
    int src = 1;

    cout << endl;

    reachhome(src,dest);
}