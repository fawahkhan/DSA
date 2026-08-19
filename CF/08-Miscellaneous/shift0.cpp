/*
You are given an integer array for multiple test cases.

For each test case, move all zero elements to the end of the array while maintaining the relative order of the non-zero elements.

Input

The first line contains an integer t (1≤t≤100) — the number of test cases.

For each test case:

The first line contains an integer n (0≤n≤105).
The second line contains n integers Ai (−109≤Ai≤109).

The sum of n over all test cases does not exceed 105.

Output

For each test case, print the modified array after pushing all zeros to the end.

Examples

Input

 

1
7
2 0 0 1 3 0 0


Output

 

2 1 3 0 0 0 0


Input

 

2
5
0 3 0 2 0
5
9 0 0 8 2


Output

 

3 2 0 0 0
9 8 2 0 0


Note

In the first example, the array is:

[2 0 0 1 3 0 0]

After moving all zeros to the end while preserving the order of non-zero elements:

Non-zero elements remain in the same order: 2, 1, 3
All zeros are moved to the end.

Result:

[2 1 3 0 0 0 0]

*/

// shift all zzeroes to the end 


// more optimised solution in a single pass 
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    for(int x = 1 ; x<=t ; x++){
        // input
        int n ;
        cin >> n ;
        int arr[n];
        for(int i = 0 ; i<n ; i++){
            cin >> arr[i];
        }
        
        // one pass solution
        int ptr = 0 ; 
        for(int i = 0 ; i< n ; i++){
            // bring all non zero elements to the front
            if(arr[i]!=0){
                arr[ptr] = arr[i] ; // pointer ke index pe non zero element daldiya
                ptr++; // increased the index of pointer.
            }
        }
        // fill the rest of spaces with 0.
        while(ptr<n){
            arr[ptr] = 0;
            ptr++;
        }
        
        
        for(int i = 0 ; i<n ; i++){
            cout << arr[i] << " ";
        }
        cout << endl ;
    }
}