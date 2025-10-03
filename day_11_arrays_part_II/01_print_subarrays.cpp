#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n){
    for(int start=0; start<n; start++){                       // n times
        for(int end=start; end<n; end++){                     // n times
           // cout << "(" << start << "," << end << ") ";
           for(int i=start; i<= end; i++) {                   // n times
            cout << arr[i]; 
           }
           cout << ", ";
        }
        cout << endl;                                      // total time complexity O(n^3)
    }                                  // using strings it will be ~ O(n^2)
}

int main(){
    int arr[5] = {1,2,3,4,5}; 
    int n =5;

    printSubarrays(arr,n);
    return 0;
}