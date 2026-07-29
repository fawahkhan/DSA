/*
Input
6

Output

0
10
010
1010
01010
Trick - alternate the binary by checking the even ---- if(i%2==0) make it 1 else make it 0.
*/

#include <bits/stdc++.h>
using namespace std ;

int main(){
    int m; 
    cin >> m ;
    for (int i = 0; i < m; i++) {
        for (int j = 1; j <= i; j++) {
            if((i+j)%2==0) cout << 0;
            else cout << 1; 
            
        }    
        cout << endl;
    }
    return 0;
}
