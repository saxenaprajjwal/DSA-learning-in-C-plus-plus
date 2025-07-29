#include <iostream>
using namespace std;

// PASS BY REFERENCE -- when we pass the reference of argument to the fuction
//METHOD 2 -- using reference variable (is an alternate name of already existing variable)
void changeA(int &param){
    param = 20;
    cout << &param << "\n";
}


int main(){

    // int a = 10;
    // int &b = a;   // need to be initialsed always
    // b = 25;
    // cout << a << "\n";
    // cout << b << "\n";

    int a = 10;
    changeA(a);
    cout << a << "\n";

    return 0;
}