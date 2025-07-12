#include <iostream>
using namespace std;

    int main(){

// work gets done at least once irrespective of the condition 

    int i = 1;
        do {
            cout << i << " ";
            i++;
        } while(i<=5);
        cout << endl;

// diff btw while and do while loop 

    int val = 1;
        do{
            cout << "prajjwal saxena in do-while loop" << endl;
        }while(val > 5);

        while( val > 5){
            cout << "prajjwal saxena in while loop";  
        }

        return 0;
    }