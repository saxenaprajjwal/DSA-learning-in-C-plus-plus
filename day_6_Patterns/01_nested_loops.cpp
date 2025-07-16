#include <iostream>
using namespace std;

int main(){

    int n = 5;                  
    
    // outer loop 
    for(int i=1;i<=n;i++){
        int val = i;
        // inner loop
        for(int j=1;j<=n;j++){
            //work
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}