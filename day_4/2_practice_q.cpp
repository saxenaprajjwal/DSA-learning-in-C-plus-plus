#include <iostream>
using namespace std;

int main () {

    // print the largest of numbers 

   int a,b ;
   cout << "enter a : ";
   cin >> a;
   cout << "enter b : ";
   cin >> b;

   if (a >= b) {
    cout << " a is larger : " << a << endl;
   }
   else {
    cout << " b is larger  : " << b << endl;
   }

    // print if a no is odd or even

    int num;
    cout << "enter the num : " << endl;
    cin >> num;

    if(num % 2 == 0) { 
        cout << "even" << endl;
    } 
    else {
        cout << " odd " << endl;
    }
    



    return 0;
}  