#include <iostream>
using namespace std;

int main(){

    int arr[20] = {1,2,3,4,5,6};
    int *ptr1 = arr; 
    int *ptr2 = ptr1 +3; //4

    cout << (ptr2 > ptr1) << "\n"; // yes : true : 1

    cout << (ptr1 == arr) << "\n"; // yes : true : 1

    return 0;
}

