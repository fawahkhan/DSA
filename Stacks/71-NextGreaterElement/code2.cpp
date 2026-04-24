/*
LC 491 : Next Greater 1
You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1. 
*/
#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
using namespace std ;


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int , int> m;  // nums2[i], NG
        stack<int> s ;
        for(int i = nums2.size()-1 ; i>=0 ; i--){
            while(s.size()>0 && s.top() <= nums2[i]){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]] = -1; // here we are not making a new array for ng , directly woh values map me hi save kra di.
            }else{
                m[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }
        vector<int> ans ;  // this will store the NG wrt nums2 in the sequence of nums1
        for( int i=0 ; i<nums1.size(); i++){
            ans.push_back(m[nums1[i]]); // seedhe maps se uss element ki id nikal li uske key se and store kra di
        }
        return ans;
    }
};