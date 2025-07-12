#include <iostream>
using namespace std;

int main () {
    int income;
    cout << "enter ur income : " << endl;
    cin >> income;

    if(income <= 5 ) { 
        cout << "0%"  "tax" << endl;
    } 
    else if (income <= 10) {
        cout << "20 %"  "tax " << endl;
    }
    
    else {
        cout << "30 %"  "tax " << endl;
    }

    return 0;
}  
