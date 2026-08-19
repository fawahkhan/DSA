/*
You are given an integer array A
 of size n
.

Your task is to find the second largest distinct element present in the array.

If the second largest distinct element does not exist, print -1.

Input
The first line contains an integer n
 (0≤n≤100
).

The second line contains n
 integers Ai
 (1≤Ai≤1000
).

Output
Print the second largest distinct element in the array. If it does not exist, print -1.

Examples
InputCopy
5
4 3 10 9 2
OutputCopy
9
InputCopy
7
13 6 31 14 29 44 3
OutputCopy
31
InputCopy
4
5 5 5 5
OutputCopy
-1
Note
In the first example:

The array is: [4, 3, 10, 9, 2]
.
The largest element is 10
The next largest distinct element is 9
.
Therefore, the second largest element is 9
.

Note that we consider distinct values. For example, if the array were [5,5,5]
, there would be no second largest element, and the answer would be -1.



*/

// single pass approach , maintain a max elem and a second max elem simultaneously



#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int arr[n];
    
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
    bool exists = false ;
    int max = arr[0], max2 = arr[0] ;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>max){
            max2 = max ;
            exists = true ;
            max = arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max){
            exists = true ;
            max2 = arr[i] ;
        }
    
    }
    if(exists) cout << max2 ;
    else cout << "-1" ;
}