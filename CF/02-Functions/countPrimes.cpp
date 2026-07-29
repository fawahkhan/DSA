// LC 204 : countPrimes --- unsolved ,, got a tle . approach was correct but not optimised . will revisit after learning arrays.



#include <bits/stdc++.h>
using namespace std ;

bool isPrime(int n){
    if(n<=1) return false ;
    for(int i = 2 ; i*i <= n ; i++ ){
        if(n%i == 0) return false ;
    }
    return true ;
}
int countPrimes(int n) {
    int cnt = 0 ;
    for(int i= 1 ; i < n ; i++){
        if(isPrime(i)){
            cnt++ ;
        }
    }
    return cnt ;
}


int main(){
    int ans = countPrimes(10000000);
    cout << ans ;
}