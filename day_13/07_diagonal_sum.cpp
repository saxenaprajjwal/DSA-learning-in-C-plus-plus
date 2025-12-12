#include <iostream>
using namespace std;

int diagonalSum(int mat[][4], int n){
    int sum = 0;

    for(int i=0; i<n; i++) {  // Iterate through rows
        for (int j=0; j<n; j++) {  // Iterate through columns
        // Check if element is on primary diagonal (top-left to bottom-right)
            if(i == j){
            sum += mat[i][j];
            } 
        // Check if element is on secondary diagonal (top-right to bottom-left)
        // Use 'else if' to avoid double-counting center in odd matrices
            else if (j == n-i-1){
                sum += mat[i][j];
            }
        }
    }
    cout << "sum = " << sum <<  endl;

}
    
int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    diagonalSum(matrix, 4);
    return 0; 
}