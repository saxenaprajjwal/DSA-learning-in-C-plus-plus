#include <iostream>
using namespace std;

int main() {
    float eng;                     // in C++ int is int ans is always int for ex 5/2 is 2 and even if it is 2.999 ans will be 2 so convert to float
    float sci;
    float maths;

    cout<<"enter english marks : ";
    cin>>eng;

    cout<<"enter science marks: ";
    cin>>sci;

    cout<<"enter math marks : ";
    cin>>maths;
    
    // calculate average
    float avg = (eng + sci + maths) / 3;
    cout<<"avgerage marks = "<<avg<<endl;
    return 0;
}