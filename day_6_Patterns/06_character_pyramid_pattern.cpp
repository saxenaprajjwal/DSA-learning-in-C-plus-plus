#include <iostream>
using namespace std;

int main(){

    int n = 5;
    char ch ='A';

    // outer loop
    for(int i=1;i<=n;i++){
        // inner loop
        for(int j=1;j<=i;j++){
            // work
            cout << ch;     // can be used as ch++ which is a post increment
            ch++;
        }
        cout << endl;
    }
    return 0;
}