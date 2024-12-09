//Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

// Note: The second largest element should not be equal to the largest element.

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n= arr.size();
        int largest= -1;
        int slargest= -1;
        for(int i=0; i<n; i++){
            if(arr[i]>largest){
                slargest=largest;
                largest=arr[i];
            }
            if(arr[i]>slargest && arr[i]<largest){
                slargest= arr[i];
            }
        }
        return slargest;
    }
};