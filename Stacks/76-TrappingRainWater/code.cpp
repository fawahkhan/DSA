// LC-42 Traping rain water - Prefix array approach
/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
Example:
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
 
*/
#include <iostream>
#include <stack>
#include <vector>
using namespace std ;

class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0 ; // will store final answer
        int n = height.size(); // no. of elements in heights array
        vector<int> lmax(n,0); // to store left max
        vector<int> rmax(n,0); // to store right max
        lmax[0] = height[0]; // initialized with left boundary
        rmax[n-1] = height[n-1]; // initialized with right boundary
        
        // finding lmax
        for(int i = 1 ; i< n ; i++){
            lmax[i] = max(lmax[i-1],height[i]);
        }

        // finding rmax
        for(int i = n-2 ; i>=0 ; i--){
            rmax[i] = max(rmax[i+1],height[i]);
        }

        // final answer = sum of all values. 
        for(int i = 0 ; i<n ; i++){
            ans+= (min(rmax[i], lmax[i]) - height[i]);
        }
        return ans;
    }
};