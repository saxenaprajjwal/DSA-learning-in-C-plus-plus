#include <iostream>
#include <algorithm> 
using namespace std;

// practice question ; sort this array of characters using insertion sort
// in descending order char ch[] = {'f','b','a','e','c','d'}


void print(char arr[], int n){ 
    for(int i=0; i<n;i++){
        cout << arr[i] << " , ";
    }
    cout << endl;
}

void sortChar(char arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] < curr){ // for desecneding array -- arr[prev] < curr
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev+1] = curr; 
    }
    print(arr ,n);

}
   
int main(){
    char ch[6] = {'f','b','a','e','c','d'};
    sortChar(ch , 6);
    return 0;
} 