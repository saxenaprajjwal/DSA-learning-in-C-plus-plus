#include <iostream>
using namespace std;

// PASS BY VALUE (when parameter is a copy of actual argument varaible in memory) 
// void changeA(int a){
//         a = 20;
//         cout << a << "\n"; 
//     }

// PASS BY REFERENCE (when we pass the reference of argument to the fuction)

//METHOD 1 -- using pointer
void changeA(int *ptr){
    *ptr = 20;
    cout << *ptr << "\n";
}

int main(){
    int a = 10;
    // changeA(a);          // do not chnages the value of variable in function in main function
    changeA(&a);           // chnages the value of variable in function in main function
    cout << a << "\n";

    return 0;
}