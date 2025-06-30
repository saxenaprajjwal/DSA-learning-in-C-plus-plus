#include <iostream>
//symbolic constants
#define X 25
#define ll long long 
using namespace std;

int main() {
    const int num = 25;   // must be inialized
    const float PI = 3.14;
    const float g = 9.8;
/* not allowed 
   const int n;
   n = 5;
*/
    const int Y = 35;
    cout<<X; //25             // macros : runs before the actual compilation (dont occupy space in memory)
    cout<<Y;
    ll x;
    ll y = 25;



    return 0;
} 