#include <iostream>
#include <climits>
using namespace std;


// Function to find maximum subarray sum using optimised approach
// Time Complexity: O(n^2) 
// This function finds the contiguous subarray with the largest sum
void maxSubarraySum2(int *arr, int n){
    int maxSum = INT_MIN;  // Initialize to smallest possible integer to handle negative numbers
    // Outer loop: iterate through all possible starting positions
    for(int start=0; start<n; start++){
        int currSum = 0;
        // Initialize currSum to 0 for each new starting position
        // This will store the sum of the current subarray

        // Inner loop: iterate through all possible ending positions from 'start' to end of array
        for(int end=start; end<n; end++){
            // Add the current element to currSum to extend the subarray
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "maximum array sum = " << maxSum << endl;
}

int main(){

    int arr[6] = {2, -3, 6, -5,  4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum2(arr, n);
    return 0;

}
