/*
Input
7

Output
*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************


*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;
	
	for(int i = 1 ; i<=n ; i++){
	    // print i stars
	    for(int j = 1 ; j<=i; j++){
	        cout << "*";
	    }
	    // print 2n-2i spaces
	    for(int j = 1 ; j<=2*(n-i); j++){
	        cout << " ";
	    }
	    // print i stars
	    for(int j = 1 ; j<=i; j++){
	        cout << "*";
	    }
	    cout << endl ;
	}
	
    
}
