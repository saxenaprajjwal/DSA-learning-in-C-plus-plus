#include <iostream>
using namespace std;

int main () {
    int day = 1;
    cout << " enter day : " ;
    cin >>  day;
    switch (day) {
  
    case 1 : cout << " Mon" << endl;
            break;
    case 2 : cout << " tue" << endl;
            break;
    case 3 : cout << " wed" << endl;
            break;
    case 4 : cout << " thur" << endl;
            break;  
    case 5 : cout << " fri" << endl;
            break;
    case 6 : cout << " sat" << endl;
            break;
    case 7 : cout << " sun" << endl;
            break;
    default : cout << "INvalid Day" << endl;

  }
    return 0;
} 