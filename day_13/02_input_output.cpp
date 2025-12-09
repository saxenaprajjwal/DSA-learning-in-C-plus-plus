#include <iostream>
using namespace std;

int main(){
    int arr[3][4];
    int n = 3, m = 4;

    // Input: Read 3x4 matrix from user
    cout << "Enter " << n*m << " numbers (3 rows, 4 columns):\n";
    for (int i=0 ; i<n; i++){
        for (int j=0 ; j<m; j++){ 
            cin >> arr[i][j];
        } 
    }

    // Output: Print the matrix
    cout << "\nYour matrix:\n";
    for (int i=0 ; i<n; i++){
        for (int j=0 ; j<m; j++){ 
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    }

    return 0;
}