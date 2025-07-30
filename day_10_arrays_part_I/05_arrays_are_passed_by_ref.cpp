#include <iostream>
using namespace std;

// Array name can be converted to a pointer 

void (func(int arr[])) {
    arr[0] = 1000;
}

int main(){
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl; //0x...

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    // KEY CONCEPT: Array name 'arr' is automatically converted to a pointer
    // that points to the first element (arr[0])
    // cout << arr << endl;  
    // cout << *arr << endl;        // Same as arr[0] - prints 1
    // cout << *(arr+1) << endl;    // Same as arr[1] - prints 2  
    // cout << *(arr+2) << endl;    // Same as arr[2] - prints 3

    func(arr);
    cout << arr[0] << endl;
    return 0;
}