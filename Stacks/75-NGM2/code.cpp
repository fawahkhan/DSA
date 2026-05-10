// LC 503. Next Greater Element II -
/*Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.

The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std ;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        // Final answer array initialized with -1
        vector<int> ans(n, -1);

        // Stack stores indices
        stack<int> s;

        // Traverse from right to left twice
        // to simulate circular array
        for (int i = 2 * n - 1; i >= 0; i--) {

            // Remove all smaller or equal elements
            while (!s.empty() && nums[s.top()] <= nums[i % n]) {
                s.pop();
            }

            // If stack empty => no greater element
            // otherwise top is next greater
            ans[i % n] = s.empty() ? -1 : nums[s.top()];

            // Push current index
            s.push(i % n);
        }

        return ans;
    }
};