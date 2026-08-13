// same tip again just use as many nested loops as the number of elements in a group .

/*
Q. Count Quadraplets
time limit per test1 second
memory limit per test256 megabytes
You are given an array A
 of length n
 and an integer x
 (the target). Your task is to count the number of quadruplets (i,j,k,l)
 such that:

A[i]−2∗A[j]+3∗A[k]−4∗A[l]=x,

where 0<i<j<k<l<n
.

Input
The first line contains two integers n
 and x
 (1≤n≤100
, |x|≤106
).

The second line contains n
 integers A1,A2,…,An
 (|Ai|≤1000
).

Output
Print a single integer, the number of quadruplets (i,j,k,l)
 that satisfy the given condition.

Examples
Input 
4 -2
3 2 1 1
Output 
1
Input 
8 -10
1 2 3 4 5 6 5 6
Output 
5
Note
For the 2nd Example, The valid quadruplets (i,j,k,l)
 (1-indexed) are:

[ (1,3,5,7):   1 - 2 * 3 + 3 * 5 - 4 * 5 = -10 ]

[ (1,3,5,8):   1 - 2 * 3 + 3 * 5 - 4 * 6 = -10 ]

[ (1,3,7,8):   1 - 2 * 3 + 3 * 7 - 4 * 6 = -10 ]

[ (2,3,6,7):   2 - 2 * 3 + 3 * 6 - 4 * 5 = -10 ]

[ (2,3,6,8):   2 - 2 * 3 + 3 * 6 - 4 * 6 = -10 ]

So the answer is 5
.

Two quadruplets are considered different if they have at least one different index among them.
*/

#include <bits/stdc++.h>
using namespace std ;

void Quadraplets(){
    
    // take all inputs first ;
    int n, target ;
    cin >> n >> target ;
    int arr[n];
    for (int i=1 ; i<=n ; i++){
        cin >> arr[i];
    }
    
    
    // now start counting pairs
    int count = 0 ;
    
    for(int i=1 ; i<=n ; i++){
        for(int j=i+1 ; j<=n ; j++){ // we have started j from i+1 to avoid duplicates
            for(int k=j+1 ; k<=n ; k++){
                for(int l=k+1 ; l<=n ; l++){
                    if( ( arr[i] - (2*arr[j]) + (3*arr[k]) - (4*arr[l]) ) == target ){
                        count++ ;
                    }
                }
            }    
        }
    }
    cout << count << endl;
}

int main(){
    Quadraplets();
}