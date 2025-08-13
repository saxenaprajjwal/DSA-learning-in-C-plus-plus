#include <iostream>
using namespace std;
// Array name can be converted to a pointer 

// void func(int arr[]) {
//     arr[0] = 1000;
// }
// // both syntax are same 
// void func2(int *ptr) {
//     ptr[0] = 1000;
// }

void printArr(int nums[], int n){
    //int n = sizeof(nums) / sizeof (int); this is incorect will give marnings 
    for(int i =0; i<<n; i++){
        cout << nums[i] << "i";
    }
    cout << endl;
} 
int main(){
    // int a = 5;
    // int *ptr = &a;
    // cout << ptr << endl; //0x...

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    // KEY CONCEPT: Array name 'arr' is automatically converted to a pointer
    // that points to the first element (arr[0])
    // cout << arr << endl;  
    // cout << *arr << endl;        // Same as arr[0] - prints 1
    // cout << *(arr+1) << endl;    // Same as arr[1] - prints 2  
    // cout << *(arr+2) << endl;    // Same as arr[2] - prints 3

    // func(arr);  // **passing arrray name is equivalent to passing the pointer**
    // cout << arr[0] << endl;
    // func2(arr);  
    // cout << arr[0] << endl;
     cout << "array size = " << sizeof(arr) << endl; //20
    printArr(arr,n );
   
    return 0;
}