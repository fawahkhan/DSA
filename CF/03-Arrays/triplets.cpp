// tip : just the same as pair sum ... bas jitne ka bhi group banane ko bole toh utne nested loop chala do easy . it will also avoid duplicates .
/*
P. Triplets
time limit per test1 second
memory limit per test256 megabytes
You have been given an integer array of size N
 and a number X
. Find the total number of triplets in the array which sum to X
.

Two triplets are considered different if they involve different indices of the array, even if the values are the same.

Input
1≤t≤50
0≤N≤102
0≤X≤109
Output
Print the number of triplets.
*/

#include <bits/stdc++.h>
using namespace std ;

void triplets(){
    
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
            for(int k=j+1 ; k<n ; k++){    
                if( (arr[i]+arr[j]+arr[k]) == target ){
                
                    count++ ;
                
                    
                }
            }    
        }
    }
    cout << count << endl;
}

int main(){
    int t ; 
    cin >> t ;
    for(int i=0 ; i<t ; i++){
        triplets();
    }
}