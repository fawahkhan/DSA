/*
F. Insertion Sort Trace
time limit per test1 second
memory limit per test256 megabytes
You are given an array of N
 integers. Your task is to simulate the Insertion Sort algorithm and print the trace after inserting each element.

In Insertion Sort:

Insert each element into its correct position in the sorted portion.
After inserting an element, print the array, highlighting the sorted portion using '|' to separate sorted and unsorted parts.
Print the number of shifts required to insert that element.
Format:
 Pass i: array_after_insertion, sorted portion | unsorted portion, shifts = x
Input
The first line contains a single integer N
 (1≤N≤500)
 — the size of the array.

The second line contains N
 integers A1,A2,…,AN
.

Output
For each insertion pass i
 (1≤i≤N−1)
, print the array after inserting the i
-th element, the sorted portion separated by '|', and the number of shifts required.

Example
Input 
5
5 1 4 2 3
Output 
Pass 1: 1 5 4 2 3 , 1 5 | 4 2 3 , shifts = 1
Pass 2: 1 4 5 2 3 , 1 4 5 | 2 3 , shifts = 1
Pass 3: 1 2 4 5 3 , 1 2 4 5 | 3 , shifts = 2
Pass 4: 1 2 3 4 5 , 1 2 3 4 5 | , shifts = 2
Note
Example 1, Pass 1 explanation:

We take the second element, 1, and insert it into the sorted portion consisting of the first element [5].

Compare 1 with 5: since 1 < 5, shift 5 one position to the right.

Place 1 in the first position.

The array after this insertion is [1,5,4,2,8]. Number of shifts required = 1.



*/

// just consider the first element to be sorted and rest all elems to be unsorted . then shift one element into the sorted list in each iteration.
// so the loop will run till i=1 to the last index n ;
// just insert the element at i in each pass into the sorted list and move all the elements accordingly .
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n ; 
	cin >> n ; 
	int a[n];
	
    for(int i = 0 ; i<n ; i++){
        cin >> a[i] ;
    }
    
    // we consider the element a[0] to be sorted and rest all elements to be sorted . then pick the element from the unsorted list and insert it into sorted list.
    
    for(int i=1 ; i<n ; i++){
        cout << "Pass " << i << ": ";
        int temp = a[i] ; // store the value of 1st element in the unsorted region in temp so that it doesnt get lost .
        
        int j = i-1 ;
        int shift = 0 ;
        while(j>=0 and a[j] > temp){
            a[j+1] = a[j]; // move the greater elements to the right till we get the proper spot for the new element to insert .
            shift++ ;
            j-- ;
            
            
        }
        a[j+1] = temp ;
        for(int k = 0 ; k<n ; k++){
            cout << a[k] << " " ;
        }
        cout << ", " ;
        for(int k=0 ; k<=i ; k++){
            cout << a[k] << " " ;
        }
        cout << "| ";
        for(int k=i+1 ; k<n ; k++){
            cout << a[k] << " " ;
        }
        cout << ", shifts = " << shift;
        cout << endl; 
    }
    
}
