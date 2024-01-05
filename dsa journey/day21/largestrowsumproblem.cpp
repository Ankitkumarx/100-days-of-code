#include<iostream>
#include <climits>
using namespace std;
bool isPresent(int arr[3][4], int target) {
 
  for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            
            if( arr[i][j] == target) {
                return 1;
            }
            
        }
    }
    return 0;
}
void printsum(int arr[3][4]){
  for(int i=0; i<3; i++) {
      int sum=0;
        for(int j=0; j<4; j++) {
            
            sum += arr[i][j];
                
        }
         cout << sum <<"";   
        }
        cout << endl;
    }
    
  int largestrowsum(int arr[3][4] ) {
    int maxi =INT_MIN;
    int rowIndex = -1;
    for(int i=0; i<3; i++) {
        int sum = 0;
        for(int j=0; j<4; j++) {
            sum += arr[i][j];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = i;
        }
       
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}    
  






int main(){
     int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
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
   if(isPresent(arr, target)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }

    printsum(arr);
   
   cout << "lagest row -->" << largestrowsum(arr ); 



}