#include <iostream>
using namespace std;

int main(){

// WAP to show numbers entered by user except multiples of 10


   int n;
     do {
        cout << "enter number : " ;
        cin >> n;
        if( n% 10 == 0){
            continue;
        }
        cout << "you entered " << n << endl;
    } while (true);

    return 0;
}