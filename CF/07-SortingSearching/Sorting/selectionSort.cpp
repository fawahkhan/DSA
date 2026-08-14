/*
You are given an array of N
 integers. Your task is to simulate the Selection Sort algorithm and print the trace of each pass.

In Selection Sort, during the i
-th pass (1≤i≤N−1
):

Find the minimum element from the unsorted part of the array.
Swap it with the element at index i
.
Print the array after the swap, along with the element selected as minimum.
Format:
 Pass i: array_after_swap , min_selected = x
Input
The first line contains a single integer N
 (1≤N≤500)
.

The second line contains N
 integers A1,A2,…,AN
.

Output
For each pass i
 (1≤i≤N−1)
, print as required.

Example
Input  
 
6
30 10 50 20 40 60
Output  
 
Pass 1: 10 30 50 20 40 60 , min_selected = 10
Pass 2: 10 20 50 30 40 60 , min_selected = 20
Pass 3: 10 20 30 50 40 60 , min_selected = 30
Pass 4: 10 20 30 40 50 60 , min_selected = 40
Pass 5: 10 20 30 40 50 60 , min_selected = 50
Note
Example 1, Pass 1 explanation:

The minimum element in [30,10,50,20,40,60] is 10.

Swap it with the first element.

New array: [10,30,50,20,40,60]



*/

// search for minimum element in an array 
// swap it with the starting element i of that iteration
// start the next iteration with i+1 , and repeat the process till i=n-2 because the maximum number of swaps allowed is n-1. .

// my learnings/errors : for swapping in arrays , dont forget to store the index of the minimum element . only swap the array elements not the min variabble which you created .
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        
    }
    
    
    // selection sort start 
    for(int i = 0 ; i < n-1 ; i++){
        int min = arr[i];
        int location = i ;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<min){
                min = arr[j];
                location = j;
            }
        }
        swap(arr[i],arr[location]);
        
        cout << "Pass " << i+1 << ": ";
        for(int j = 0 ; j<n ; j++){
            cout << arr[j] << " ";
        }
        cout << ", min_selected = " << min << endl  ;
    }
}