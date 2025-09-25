#include <iostream>
using namespace std;

int main(){
    // Declare an integer variable and initialize it with value 10
    int a = 10;
    
    // Create a pointer that stores the memory address of variable 'a'
    int *aptr = &a;
    
    // Print the memory address stored in the pointer
    cout << "Address stored in aptr: " << aptr << "\n";
    
    // Increment the pointer - This will increase the address by sizeof(int) bytes
    // On most systems, sizeof(int) is 4 bytes
    aptr++; // 1 integer ++
    
    // Print the new address after increment - it will be 4 bytes (or sizeof(int)) more than the previous address
    cout << "Address after increment: " << aptr << "\n";

    // Decrement the pointer - This will decrease the address by sizeof(int) bytes
    aptr--; // 1 integer --
    
    // Print the address after decrement - it should be same as the original address
    cout << "Address after decrement: " << aptr << "\n";
    
    return 0;
}