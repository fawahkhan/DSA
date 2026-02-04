// Maximum Subarray Sum - Brute force approach

#include <iostream>
#include <climits>
using namespace std ;

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7 ;
    int MaxSum = INT_MIN;
    for(int st=0 ; st<n ; st++){
        int  sum = 0 ;
        for(int end=st ; end<n ; end++){
            sum = sum + arr[end] ;
            MaxSum = max(MaxSum,sum);         
        }        
    }
    cout << MaxSum ;
    return 0 ;
}

/*
Brute Force Approach :
    1. Make a variable to store Maximum Sum and initialise it with minus infinity.Then iterate to all subarrays
    2. Make a variable to store sum of each subarray . Find sum of all elements in each subarray and store it in that variable
    3. Compare it with maxsum, and if sum> maxsum then store sum inside maxsum . 
    4. Return the subarray with maximum sum and print it along with its sum .
*/