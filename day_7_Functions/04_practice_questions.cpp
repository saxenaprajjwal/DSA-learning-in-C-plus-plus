#include <iostream>
using namespace std;

int prod(int a, int b){ 
    int p = a * b;
    return p;                            
}

// write A fucntion to print no is even or odd

bool isEven(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}



int main() {
    cout << prod(200,4) << endl;
    cout << isEven(20) << endl;
     return 0;
}