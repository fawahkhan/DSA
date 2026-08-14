/*
You are given an array of integers and a number X
.

Determine whether X
 exists in the array.

Input
The first line contains an integer n
 (1≤n≤105
) — the size of the array.

The second line contains n
 integers Ai
 (−109≤Ai≤109
).

The third line contains an integer X
 (−109≤X≤109
).

Output
Print YES if X
 exists in the array, otherwise print NO.

Examples
Input 
5
1 3 7 9 2
7
Output 
YES
*/

// simple searching just go to each element and compare it with the target element 
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
    
    // linear search 
    for(int i=0; i<n ; i++){
        if(arr[i] == target){
            cout << "YES" ;
            return 0;
        }
    }
    cout << "NO";
}