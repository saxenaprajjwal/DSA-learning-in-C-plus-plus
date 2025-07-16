#include <iostream>
using namespace std;

int main(){

    int n = 4;
    char ch ='A'

    // outer loop
    for(int i=1;i<=n;i++){
        // inner loop
        for(int j=1;j<=i;ch++){
            // work
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}