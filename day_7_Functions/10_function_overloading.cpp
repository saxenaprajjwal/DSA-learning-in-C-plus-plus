#include <iostream>
using namespace std;

int sum(int a, int b){
    cout << (a+b) << endl;
    return a + b;
}
//FUNCTION OVERLOADING: multiple fnct with same hame nut different parameters-
// 1. On the basis of parameter type:
double sum(double a, double b){
    cout << (a+b) << endl;
    return a + b;
}

// 2. On the basis of no of parameters:
int sum(int a, int b, int c){
    cout << (a+b+c) << endl;
    return a + b + c;
}

int main() {
    sum (2,3);
    sum(12,13);
    sum(1.5,2.5); //4
    sum(1,2,3);
    return 0;
}