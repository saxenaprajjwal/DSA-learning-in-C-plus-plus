#include <iostream>
using namespace std;

// Deferecing operator gets te value of the variable pointed by an operator.

int main(){
    int a = 10;
    cout << &a << " \n";
    cout << *(&a) << "\n";

    int *ptr = &a;
    cout << ptr << " \n";
    cout << *(ptr) << "\n";

    // can change the value of variable too
    *ptr =  20;
    cout << a << "\n";

    return 0;
}