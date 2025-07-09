#include <iostream>
using namespace std;

int main(){

    int n = 191;
    bool isPrime = true;

    for(int x = 2; x <= n-1; x++){
        if ( n % x == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){                                  // can only write isPrime no need to write  = true 
        cout << "number is prime" << endl;
    }else{
        cout << "number is composite" << endl;
    }

    return 0;
}