#include <iostream>
using namespace std;

 int main() {    
    
    //LOgical Operators 

    // And 
     cout << (( 3 < 5) && (5 < 10)) << endl; //true -> 1
     cout << (( 3 < 5) && (5 == 10)) << endl; 
   
    // OR
    cout << (( 3 < 5) || (5 == 10)) << endl; 
     
    // NOT
    cout << (!(3 == 5)) << endl;
    cout << (!(3 != 5)) << endl;
     
     

    


    return 0;
 }