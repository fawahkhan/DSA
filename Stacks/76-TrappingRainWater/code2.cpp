// optimized approach - 2 pointers
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0 ;
        int n = height.size();
        int l=0, r=n-1;  // two pointers
        int lmax= 0, rmax =0; // these will serve as boundaries

        while(l<r){
            // calculate boundary for each index
            lmax = max(lmax, height[l]);
            rmax = max(rmax, height[r]);

            if(lmax<rmax){ // left is deciding factor
                ans+= lmax - height[l] ;
                l++ ;
            }else{
                ans += rmax - height[r] ;
                r-- ;
            }
        }



        return ans;
    }
};