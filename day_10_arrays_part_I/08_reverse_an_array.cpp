#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0;i<n;i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main() {
    // // original array
    int arr[] ={5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);
    // //create a reverse copy
    // int copyArr[n];
    // for(int i=0;i<n;i++){
    //     int j=n-i-1;
    //     copyArr[i] = arr[j];
    // }
    // //Copy the reversed elements back to the original array
    // for(int i=0; i<n; i++){
    //     arr[i] = copyArr[i];
 
    // 2 pointer approach

    int start = 0, end = n-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    
    // Print the reversed array using our helper function
    printArr(arr,n);
    return 0;
}

