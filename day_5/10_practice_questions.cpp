#include <iostream>
using namespace std;

int main(){
    
// Q.) Write a program where user can keep entering numbers till they enter a multiple of 10

    int n;
     do {
        cout << "enter number : " ;
        cin >> n;
        if( n% 10 == 0){
            break;
        }
        cout << "you entered " << n << endl;
    } while (true);

    return 0;
}