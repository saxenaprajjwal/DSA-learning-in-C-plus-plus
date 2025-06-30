#include <iostream>
using namespace std;

int main () {
    int age;
    cout << "enter ur age : " << endl;
    cin >> age;

    if(age >= 18 ) { 
        cout << "can vote" << endl;
    } 
    if (age >= 45 ) {
        cout << " contest for elections" << endl;
    }
    
    else {
        cout << " can't vote " << endl;
    }


    return 0;
}  