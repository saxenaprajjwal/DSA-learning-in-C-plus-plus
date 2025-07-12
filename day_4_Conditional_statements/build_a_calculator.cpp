#include <iostream>
using namespace std;

int main () {
int a , b;
char op; 

cout << "enter a: " ;
cin >> a;
cout << "enter b: " ;
cin >> b;
cout << "enter operator: " << op;
cin >> op;

// calculator
// if(op == '+'){
//     cout << "a + b = " << (a+b) << endl;
// } else if(op == '-'){
//     cout << "a - b = " << (a-b) << endl;
// } else if(op == '*'){
//     cout << "a * b = " << (a*b) << endl;
// } else if(op == '/'){
//     cout << "a / b = " << (a/b) << endl;
// } else {
//     cout << " invalid operator : ";  
// }

// using switch operator
switch (op) 
{
case '+' :  cout << "a + b = " << (a+b) << endl;
            break;
case '-' :  cout << "a - b = " << (a-b) << endl;
            break;
case '*' :  cout << "a * b = " << (a*b) << endl;
            break;
case '/' :  cout << "a / b = " << (a/b) << endl;
            break;
default  :   cout << " invalid operator : ";  

} 
    return 0;
}  