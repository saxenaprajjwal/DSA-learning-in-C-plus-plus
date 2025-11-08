#include <iostream>
#include <climits>
using namespace std;


// Function to find maximum subarray sum using brute force approach
// Time Complexity: O(n^3) - three nested loops
// Space Complexity: O(1) - constant extra space
void maxSubarraySum1(int *arr, int n){
    int maxSum = INT_MIN;  // Initialize to smallest possible integer to handle negative numbers
    // Outer loop: iterate through all possible starting positions
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currSum = 0;   // Reset current sum for each new starting position

            // Middle loop: iterate through all possible ending positions from start
            for(int i=start; i<=end; i++){
                currSum += arr[i];
            }
            cout << currSum << ",";

            // Update maxSum if current sum is greater
            maxSum = max(maxSum, currSum);
        
        }
        cout << endl;
    }
    cout << "maximum array sum = " << maxSum << endl;
}

int main(){

    int arr[6] = {2, -3, 6, -5,  4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum1(arr, n);
    return 0;

}
