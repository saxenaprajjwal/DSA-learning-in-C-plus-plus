#include<iostream>  // Includes the input/output stream library
using namespace std;  // Uses the standard namespace to avoid writing std:: repeatedly

// Function that prints array elements using pointer arithmetic
void printArr(int *ptr, int n) {
    for(int i=0; i<n; i++){  // Loop from 0 to n-1
        cout << *(ptr+i) << "\n";  // Print the value at address (ptr+i)
    }
}

int main(){
    // Commented code showing pointer basics
    // int a = 5;  // Declare and initialize an integer
    // int *ptr = &a;  // Declare a pointer and store address of 'a'
    // cout << ptr << "\n";  // Print the address stored in ptr
    // cout << (ptr+3) << "\n";  // Print address after adding 3*sizeof(int) bytes
    
    // Working code
    int arr[] = {1,2,3,4,5};  // Declare and initialize an array with 5 elements
    int n = sizeof(arr) / sizeof(int);  // Calculate number of elements in array
    printArr(arr, n);  // Call the function, passing array and its size
    return 0;  // End program with success code
}