// Optimal approach ------ Time Complexity 0(n)

#include <iostream>
#include <climits>
#include <vector>

using namespace std ;



int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN , curSum = 0 ;
    for (int val : nums){
        curSum = curSum + val ;
        maxSum = max(maxSum, curSum);
        if(curSum < 0) curSum = 0 ;
    }
    return maxSum ;
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << maxSubArray(nums);
    return 0;
}