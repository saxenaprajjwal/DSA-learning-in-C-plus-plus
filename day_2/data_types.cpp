#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int age = 25;
    int marks = -200;
    char grade = 'A';
    bool isadult = true;
    float cgpa  = 8.9;
    float x = 1.2345678910111213;
    double xx = 1.2345678910111213;

cout<<age<<" "<<marks<<" "<< grade<<" "<< isadult<<endl;
cout<<"size of int"<<" "<<sizeof(age)<<endl;
cout<<"size of char"<<" "<<sizeof(grade)<<endl;
cout<<"size of bool"<<" "<<sizeof(isadult)<<endl;       
cout<<"size of float"<<" "<<sizeof(cgpa)<<endl;

cout<<setprecision(13)<<"x ="<<x<<endl;
cout<<setprecision(13)<<"xx ="<<xx<<endl;

return 0;
}