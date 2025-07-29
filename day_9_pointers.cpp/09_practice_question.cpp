#include <iostream>
using namespace std;

int main(){
    // Q1 what is type of a & b?
    // float* a,b
    // Answer -- a is float pointer 
    //         b is float

    // Q2 can we initialize a pointer with value 0?
    // Answer -- yes

    // All of these create null pointers:
// int *ptr1 = 0;           // Initialize with 0
// int *ptr2 = NULL;        // Initialize with NULL macro
// int *ptr3 = nullptr;     // Initialize with nullptr (C++11, recommended)
 
    int *ptr = 0;    //
    cout << ptr << "\n";                   
    return 0;

}