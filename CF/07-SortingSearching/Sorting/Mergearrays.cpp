/*
H. Merge Two Sorted Arrays
time limit per test1 second
memory limit per test256 megabytes
You are given two arrays of integers, both sorted in non-decreasing order.

Merge the two arrays into a single sorted array.

Input
The first line contains two integers n
 and m
 (1≤n,m≤105
) — the sizes of the arrays.

The second line contains n
 integers Ai
 (−109≤Ai≤109
).

The third line contains m
 integers Bi
 (−109≤Bi≤109
).

Both arrays are sorted in non-decreasing order.

Output
Print the merged sorted array.

Examples
Input 
3 4
1 3 5
2 4 6 8
Output 
1 2 3 4 5 6 8
Input 
2 3
-5 10
-6 0 12
Output 
-6 -5 0 10 12


*/


// Merge two sorted arrays .
// approach -- take two pointers one for each array and traverse over the array and compare which is minimum and inssert minimum into a new array .

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , m ;
	cin >> n >> m ;
	
	int A[n];
	for(int i=0 ; i<n ; i++){
	    cin >> A[i];
	}
	int B[m];
	for(int i=0 ; i<m ; i++){
	    cin >> B[i];
	}
	// new array to store merged array.
	int ans[m+n];
    int a=0 , b=0 , k=0;

    // this looop will run till one array is completely finished. then just   the remaining elements from the other array.
    while(a < n and b < m ){
        if(A[a]<=B[b]){
        ans[k] = A[a] ;
	    a++ ;
	    }else{
            ans[k] = B[b];
	        b++; 
	    }
	    k++ ;
    }
	    
	//   the remaining parts of array as it is .
    while(a<n){
        ans[k] = A[a];
        a++ ;
        k++ ;
    }
    while(b<m){
        ans[k] = B[b];
        b++ ;
        k++ ;
    }
	for(int i=0 ; i<m+n ; i++){
	    cout << ans[i] << " " ;
	}
	
}
