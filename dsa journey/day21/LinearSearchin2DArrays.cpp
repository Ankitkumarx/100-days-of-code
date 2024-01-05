#include<iostream>
using namespace std;
bool isPresent(int arr[3][4], int target, int i, int j) {

  for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            
            if( arr[i][j] == target) {
                return 1;
            }
            
        }
    }
    return 0;
}




int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    
    /*//taking input
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>> arr[i][j];
        }
    }*/
    //print 
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << "";
        }
        cout << endl;
    }

   int target;
   cin >> target;
   if(isPresent(arr, target, 3, 4)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }

    





}