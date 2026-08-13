/*
O. Pair Sum
time limit per test1 second
memory limit per test256 megabytes
You have been given an integer array of size N
 and a number X
. You need to find the total number of pairs in the array which sum to X
.

Two pairs are considered different if they involve different indices of the array, even if the values are the same.

Input
The first line contains an integer t
 (1≤t≤100)
 — the number of test cases.

For each test case: The first line contains an integer N
 (0≤N≤1000)
 — the size of the array. The second line contains N
 integers. The third line contains an integer X
 (0≤X≤109)
.

Output
For each test case, print a single integer — the number of pairs in the array whose sum is equal to X
.

Examples
Input 
1
9
1 3 6 2 5 4 3 2 4
7
Output 
7
Input 
2
9
1 3 6 2 5 4 3 2 4
12
6
2 8 10 5 -2 5
10
Output 
0
2
Note
The given array can contain duplicate elements.


*/

#include <bits/stdc++.h>
using namespace std ;

void pairs(){
    
    // take all inputs first ;
    int n ;
    cin >> n ;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
    int target ;
    cin >> target ;
    
    
    // now start counting pairs
    int count = 0 ;
    
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){ // we have started j from i+1 to avoid duplicates
            if( (arr[i]+arr[j]) == target ){
                count++ ;
            }
        }
    }
    cout << count << endl;
}

int main(){
    int t ; 
    cin >> t ;
    for(int i=0 ; i<t ; i++){
        pairs();
    }
}