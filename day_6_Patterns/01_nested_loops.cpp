#include <iostream>
using namespace std;

int main(){

    int i,j; 
    int n = 5;                  

    // outer loop 
    for(i=1;i<=n;i++){
        // inner loop
        for(j=1;j<=n;j++){
            //work
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}