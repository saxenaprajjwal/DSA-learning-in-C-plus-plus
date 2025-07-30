#include <iostream>
#include <iostream>
using namespace std;

int main(){
    // METHOD 1: Declare array without initialization
    // This creates an array of 50 integers with valid indices 0 to 49
    int marks[50];  
    
    // Accessing uninitialized elements - these will contain garbage values
    cout << marks[0] << endl;  // Garbage value from memory
    cout << marks[1] << endl;  // Garbage value from memory
    cout << marks[2] << endl;  // Garbage value from memory
    
    // WARNING: Out of bounds access! marks[51] is invalid (only 0-49 are valid)
    // This causes undefined behavior and may crash the program
    cout << marks[50] << endl;  
    cout << endl;

    // METHOD 2: Partial initialization with specific values
    // Array of 50 elements: first 3 are initialized, remaining 47 are set to 0
    int marks1[50] = {1, 2, 3}; 
    
    cout << marks1[0] << endl;  // Prints 1 (explicitly initialized)
    cout << marks1[1] << endl;  // Prints 2 (explicitly initialized)
    cout << marks1[2] << endl;  // Prints 3 (explicitly initialized)
    cout << marks1[3] << endl;  // Prints 0 (automatically initialized to 0)
    cout << endl;

    // METHOD 3: Array size determined by number of initializers
    // Compiler automatically sets size to 3 based on the number of values
    int marks2[] = {1, 2, 3}; 
    
    cout << marks2[0] << endl;  // Prints 1 (valid access)
    cout << marks2[1] << endl;  // Prints 2 (valid access)
    cout << marks2[2] << endl;  // Prints 3 (valid access)
    
    // WARNING: Out of bounds access! marks2 only has indices 0, 1, 2
    // Accessing marks2[3] is undefined behavior
    cout << marks2[3] << endl;  

    return 0;
}