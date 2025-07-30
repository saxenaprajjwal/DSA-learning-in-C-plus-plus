
#include <iostream>
using namespace std;

int main(){

    // PART 1: STATIC ARRAY WITH PARTIAL INITIALIZATION
    // Create array of 25 integers, initialize first 5 elements
    // Remaining 20 elements automatically set to 0 by compiler
    int arr[25] = {7,5,2,1,3}; // other values will be zeros in this case
    int n = sizeof(arr) / sizeof(int);
    // Loop through all elements and print them
    // Using i <= n-1 is equivalent to i < n
    for(int i=0; i<=n-1; i++){ // we can also use i<n
        cout << arr[i] << " ";
    }
    cout << endl;

    // PART 2: DYNAMIC ARRAY WITH USER INPUT SIZE
    int n1;
    cout << "lenght of the array : ";
    cin >> n1;
    //Create Variable Length Array (VLA) - size determined at runtime
    // Elements contain garbage values initially (uninitialized)
    int arr1[n1];    
    // int n1 = sizeof(arr1) / sizeof(int);

    for(int i=0; i<=n1-1; i++){ // to input values from terminal
        cin >> arr1[i];// Read each element from terminal/keyboard
    }
    for(int i=0; i<=n1-1; i++){ 
        cout << arr1[i] << ",";
    }
    cout << endl;

    return 0;
}