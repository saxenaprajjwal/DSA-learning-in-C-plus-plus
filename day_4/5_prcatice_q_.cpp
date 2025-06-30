#include <iostream>
using namespace std;

int main () {                  
    int a,b,c;
    cout << "enter a:" << endl;
    cin >> a;
    cout << "enter b:" << endl;
    cin >> b;
    cout << "enter c:" << endl;
    cin >> c;
    if ( a >= b && a >= c ) {
        cout << "largest no is : " << a << endl; 
    }
    else if ( b >= c){
        cout << "largest no is : " << b << endl;  
    }
    else{
        cout << "largest no is : " << c << endl;
    }

    return 0;
}  
