#include <iostream>
using namespace std;

int main(){

    int *ptr = NULL;
    cout << ptr << "\n";

    cout << *ptr << "\n"; //segmentation fault >> after this code halts

    cout << "bye"; // no output bcz of aboove fault
    return 0;
}
