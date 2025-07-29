#include <iostream>
using namespace std;

// PASS BY REFERENCE (when we pass the reference of argument to the fuction)

//METHOD 1 -- using pointer
void changeA(int *ptr){
    *ptr = 20;
    cout << *ptr << "\n";
}

int main(){
    int a = 10;
    changeA(&a);           // changes the value of variable in function in main function
    cout << a << "\n";
    return 0;
}