#include <iostream>
 using namespace std;
 int main(){ 
    
    // print the sqaure patetrn

    for(int i =1;i <=4;i++ ){
        cout << "****" << endl;
    }
    
    // PRINT numbers from n to 1 using for loop 
    int n;
    cout << "enter n = ";
    cin >> n;
    for(int i = n; i >=1 ; i--){
        cout << i << " ";
}
    cout << endl;
    return 0 ;
 }