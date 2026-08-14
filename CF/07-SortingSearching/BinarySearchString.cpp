// binary search on string -- tip: string acts just like arrays .
/*
C. Binary Search (Strings)
time limit per test1 second
memory limit per test256 megabytes
You are given a guest list containing names in sorted lexicographical order.

Given the name of a guest, determine whether the name exists in the list.

Important: The list is sorted. Your solution is expected to use binary search.

Input
The first line contains an integer n
 (1≤n≤105
) — the number of names.

The next n
 lines each contain a name Si
.

Each name:

consists only of lowercase English letters,
has length between 1 and 20.
The names are given in non-decreasing lexicographical order.

The last line contains a name X
 — the guest to search for.

Output
Print YES if the name exists in the list, otherwise print NO.

Examples
Input  
 
5
alice
bob
charlie
david
emma
charlie
Output  
 
YES
Input  
 
3
anna
bella
carol
diana
Output  
 
NO
*/

#include <bits/stdc++.h>
using namespace std ;



int main(){
    int n;
    cin >> n ; 
    string s[n];
    for(int i=0; i<n ; i++){
        cin >> s[i];
    }
    string target ;
    cin >> target ;
    
    int l=0, r=n-1 ;
    bool flag = false ;
    while(l<=r){
        int mid = (l+r)/2 ;
        if(s[mid] == target){
            flag = true;
            break ;
        }else if(s[mid]<target){
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