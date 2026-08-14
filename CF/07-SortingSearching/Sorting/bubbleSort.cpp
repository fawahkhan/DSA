/*
E. Bubble Sort Trace
time limit per test1 second
memory limit per test256 megabytes
You are given an array of N
 integers. Your task is to simulate the Bubble Sort algorithm and print the trace of each pass.

In Bubble Sort:

Compare adjacent elements and swap them if they are in the wrong order.
After each pass, print the array and the number of swaps in that pass.
Stop early if a pass has 0 swaps.
Format
 Pass i: array_after_swap , swaps = x
Input
The first line contains a single integer N
 (1≤N≤500)
 — the size of the array. The second line contains N
 integers A1,A2,…,AN
.

Output
For each pass i
 (1≤i≤N−1)
, print the array after the pass and the number of swaps in that pass. Stop if swaps = 0.

Example
Input  
 
5
5 1 4 2 8
Output  
 
Pass 1: 1 4 2 5 8 , swaps = 3
Pass 2: 1 2 4 5 8 , swaps = 1
Pass 3: 1 2 4 5 8 , swaps = 0
Note
Example 1, Pass 1 explanation:

Compare and swap adjacent elements in [5,1,4,2,8]. After the first pass, array = [1,4,2,5,8], swaps = 3.
*/


// maximum no. of passes allowed in bubble sort is n-1 . so the upper limit of i must be n-1 .

// since we are sending the maximum element to the back at each pass , thus in the next iteration we need not go till n-1 ,
// we can go till n-i-1 and our work will still be done
// because the last i elements are already sorted.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n ;
	cin >> n ;
	int arr[n];
	for(int i = 0 ; i< n ; i++){
	    cin >> arr[i] ;
	}
	
    // so in bubble sort basically in each iteration :
            // a. we go to each element in an array and then we move to the next element 
            // compare two adjacent elements and swap them to sort in increasing order .
            
    
    for(int i=0 ; i<n-1; i++){
        //  this is the pass no.
        int swaps = 0 ; // this is the swap number
        cout << "Pass " << i+1 << ": " ;
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]) ;
                swaps++ ;
            }
        }
        
        for(int i = 0 ; i<n ; i++ ){
            cout << arr[i] << " " ;
        }
        cout << ", swaps = " << swaps << endl ;
        if(swaps == 0 ) break ;
        
    }
    

}
