#include <iostream>
#include <climits>
using namespace std;


// Kadane's Algorithm - Find maximum subarray sum
// Time Complexity: O(n) - Single pass through array
// Space Complexity: O(1) - Only using two variables
void maxSubarraySum3(int *arr, int n){
    // Initialize maxSum to the smallest possible integer value
    // This handles arrays with all negative numbers

    int maxSum = INT_MIN;  
    // Initialize currSum to 0 - tracks the sum of the current subarray being considered
    int currSum = 0;

    // Single loop: iterate through each element of the array
    for(int i=0; i<n; i++){
        // Add the current element to currSum (extend the current subarray)
        currSum += arr[i];

        // Update maxSum if the current subarray sum is greater than the maximum found so far
        maxSum = max(maxSum, currSum);
        
        // Kadane's key optimization: if currSum becomes negative, discard it
        // Starting fresh from the next element is better than carrying negative sum forward
        if(currSum<0){
            currSum=0;
        }
    }
    cout << "maximum array sum = " << maxSum << endl;
}


int main(){

    int arr[6] = {2, -3, 6, -5,  4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum3(arr, n);
    return 0;
}       
    