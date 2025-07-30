#include <iostream>
using namespace std;

int main(){ 
    int arr[] = {5, 4, 3, 9, 12};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]> max){
            max = arr[i];
            cout << "assigning value " << arr[i] << " to max\n"; // just for dry purposes
        }
        // for smallest
        if(arr[i]< min){
            min = arr[i];
        }
    }
    cout << "largest = " << max << endl;
    cout << "smallest = " << min << endl;
    

    return 0;
}

