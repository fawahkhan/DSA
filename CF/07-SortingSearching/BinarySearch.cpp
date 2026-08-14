/*
B. Binary Search
time limit per test1 second
memory limit per test256 megabytes
You are given a sorted array of integers and a number X
.

Determine whether X
 exists in the array.

Important: The array is sorted in non-decreasing order. Your solution is expected to use binary search.

Input
The first line contains an integer n
 (1≤n≤105
) — the size of the array.

The second line contains n
 integers Ai
 (−109≤Ai≤109
) in non-decreasing order.

The third line contains an integer X
 (−109≤X≤109
).

Output
Print YES if X
 exists in the array, otherwise print NO.

Examples
Input
5
1 3 5 7 9
7
Output
YES
*/


// use two pointers one for the upper bound and one for lower bound .
// find mid element and compare target with element and reset upper/lower bound accordingly in each iteration till you reach target .
#include <bits/stdc++.h>
using namespace std ;



int main(){
    int n;
    cin >> n ; 
    int arr[n];
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    int target ;
    cin >> target ;
    
    int l=0, r=n-1 ;
    bool flag = false ;
    while(l<=r){
        int mid = (l+r)/2 ;
        if(arr[mid] == target){
            flag = true;
            break ;
        }else if(arr[mid]<target){
            // search in the right half;
            l=mid+1 ;
        }else{
            // search in the left half
            r=mid-1 ;
        }
    }
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
}