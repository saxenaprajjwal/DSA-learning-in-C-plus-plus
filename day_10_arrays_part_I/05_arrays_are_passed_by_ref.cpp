#include <iostream>
using namespace std;

// Array name can be converted to a pointer 

int main(){
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl; //0x...

    // int arr[] = {5, 4, 3, 9, 12};
    // int n = sizeof(arr) / sizeof(int);
    // cout << arr << endl;
    // cout << *arr << endl; //arr[0]
    // cout << *(arr+1) << endl; //arr[1]
    // cout << *(arr+2) << endl; //arr[2]


  
    

    return 0;
}