#include <iostream>
 using namespace std;

 int main() {                                           
    // Arithmetic operators
    int a = 5;
    int b = 3;
    cout << "+ " << a + b << endl;
    cout << "- " << a - b << endl;
    cout << "* " << a * b << endl;
    cout << "/ " << a / b << endl;
    cout << "% " << a % b << endl;
    //Unary Operators           normally a++ and ++ mean same thing 
                                       //but b = a++ and b = ++a are different
    int d = 8;
    d++; // c=c+1
    cout << "d= "<< d << endl;
    d--; // d=d-1
    cout << "d= "<< d << endl;

    int f = 2;
    int e = f++;
    cout << "f= " << f << endl;
    cout << "e= " << e << endl; 
    
    int h = 2;
    int i = ++h;
    cout << "h= " << h << endl; 
    cout << "i= " << i << endl;         //same logic works for a-- and --a 



    return 0;
 }
