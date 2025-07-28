#include <iostream>
using namespace std;

int main(){
    int a = 10; 
    int *ptr = &a;

    float pi = 3.14;
    float *ptr2 = &pi;

    // pointer to pointer 
    int **pptr = &ptr;
    cout << &ptr << " = " << pptr << "\n";


    cout << &a << "=" << ptr << "\n";
    cout << &pi << "=" << ptr2 << "\n";

    //size of pointers (take 8 bytes of memory)
    cout  << sizeof(ptr) << "\n";
    cout  << sizeof(ptr2) << "\n";

    return 0;
}