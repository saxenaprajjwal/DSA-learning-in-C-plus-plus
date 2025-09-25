#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr = &x;
    int y = 25;
    ptr = &y;
    cout << *ptr << "\n"; //25
    
    // but this is not possible with Array Pointers
    // int arr[5];
    // cout << arr << "\n";
    // int y = 25;
    // arr = &y;
    return 0;

}