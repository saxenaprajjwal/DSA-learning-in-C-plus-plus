#include <iostream>
using namespace std;

// write a function to check if a number is prime or not
// 1st method
bool isPrime(int n){
    if (n == 1){
        return false;
    }

for(int i=2; i<=2; i++){
    if (n % i == 0) { // non prime
        return false;
        }
    }
    return true;
}

//2nd method(optimsed)
bool isPrime2(int n){
    if( n == 1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    cout << isPrime(23) << endl;
    cout << isPrime2(23) << endl;
     return 0;
}