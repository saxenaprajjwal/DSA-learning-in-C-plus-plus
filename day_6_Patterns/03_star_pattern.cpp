#include <iostream>
using namespace std;

int main(){

    int n = 8;
    int i,j;

    // outer loop
    for(i=1;i<=n;i++){
        // inner loop
        for(j=1;j<=i; j++){
            // work
            cout << " * ";
        }

        cout << endl;
    }
    return 0;
}


 