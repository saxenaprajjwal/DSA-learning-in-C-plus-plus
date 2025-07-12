#include <iostream>
#include <cmath>         // to calculate sqaure root and there many more math functions in this header file
using namespace std;

int main(){

//optimised code for prime no checking 

    int n = 191;
    bool isPrime = true;

    for(int x = 2; x <= sqrt(n); x++){                    // code runs from 2 to sqare root of n instead of n-1
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