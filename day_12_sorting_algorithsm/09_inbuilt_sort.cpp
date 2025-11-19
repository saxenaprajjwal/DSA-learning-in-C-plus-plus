#include <iostream>
#include <algorithm> //The sort() function is defined in the <algorithm> library.
using namespace std;

// Inbuild sort in C++:


void print(int arr[], int n){
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
   
int main(){
    int arr[8] = {1,4,1,3,2,4,3,7};    
    sort(arr,arr+8); //  by default ascending order sort

// // for sorting in parts 
//     sort(arr+2,arr+8);
// // for descending order sorting :
//     sort(arr,arr+8, greater<int>()); 

    print(arr,8);
    return 0;
} 