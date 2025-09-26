#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int *ptr1 = &a;
    int *ptr2 = ptr1 + 3;

    cout << ptr2 << "\n";
    cout << ptr1 << "\n";

    cout << ptr2 - ptr1 << "\n"; // pointers can be subtracted given they are of same type

    // same thing applies to array as well

    // int arr[20] = {1,2,3,4,5,6};
    // int *ptr1 = arr; 
    // int *ptr2 = ptr1 +3; //4

    // cout << *ptr2 << "\n";
    // cout << *ptr1 << "\n";

    // cout << ptr2 -ptr1 << "\n";
    return 0;

}