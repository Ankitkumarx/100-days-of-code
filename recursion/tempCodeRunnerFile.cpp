bool isprime(int n ){

if(n==1){
    return false;
}

 for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
           
            return false;
            
                    
                    
                    }

                    }
 return true ;
}






int main(){
    int n;
    cout << "enter the value of n" << endl;
    cin >>n;
  
if (isprime) {
        cout << "The number is prime" << endl;
    } else {
        cout << "The number is not prime" << endl;
    }

    return 0;
}
