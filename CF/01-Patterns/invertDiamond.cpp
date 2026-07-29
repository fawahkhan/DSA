/*

Input
5

Output
***** *****
****   ****
***     ***
**       **
*         *
**       **
***     ***
****   ****
***** *****

check the no. of lines and the no. of spaces (imp)
trick . make a crown -> make a invert crown . put the invert crown on toop of the crown.
 then just add a space in between make sure to check the no. of rows to set the limit of loop .
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;
	for(int i = n ; i>=2 ; i--){
	    // print i stars
	    for(int j = 1 ; j<=i; j++){
	        cout << "*";
	    }
	    // print 2n-2i spaces
	    for(int j = 1 ; j<=2*(n-i)+1; j++){
	        cout << " ";
	    }
	    // print i stars
	    for(int j = 1 ; j<=i; j++){
	        cout << "*";
	    }
	    cout << endl ;
	}
	for(int i = 1 ; i<=n ; i++){
	    // print i stars
	    for(int j = 1 ; j<=i; j++){
	        cout << "*";
	    }
	    // print 2n-2i spaces
	    for(int j = 1 ; j<=2*(n-i)+1; j++){
	        cout << " ";
	    }
	    // print i stars
	    for(int j = 1 ; j<=i; j++){
	        cout << "*";
	    }
	    cout << endl ;
	}
	
	
    
}
