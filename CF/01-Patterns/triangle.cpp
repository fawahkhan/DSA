/*
Input
5

Output
    *
   * *
  * * *
 * * * *
* * * * *
Trick: Make right alligned pattern first and then add a space after star.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;
	
	for(int i = 1 ; i<=n ; i++){
	    // print spaces
	    for(int j = 1 ; j<=n-i; j++){
	    
	        cout << " ";
	        
	    }
	    // print stars
	    for(int j = 1 ; j<=i; j++){
	        if(j==i) cout << "*";
	        else cout << "* ";
	        
	    }
	    cout << endl ;
	}
    
}
