/*
K. Strong Password
time limit per test1 second
memory limit per test256 megabytes
You are given a password.

A password is considered strong if all of the following conditions are satisfied:

It consists of exactly 10
 characters.
It contains at least one lowercase English letter.
It contains at least one uppercase English letter.
It contains at least one digit.
It contains at least one special character.
Any character that is not a lowercase letter, uppercase letter, or digit is considered a special character.

Input
The only line contains a string S
.

It is guaranteed that 1≤|S|≤100
 and all characters are printable ASCII characters.

Output
Print Strong if the password is strong. Otherwise, print Weak.
*/


#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ; 
    cin >> s ;
    int n = s.size();
    if(n!=10) {
        cout << "Weak";
        return 0 ;
    }
    int upper = 0, lower = 0, digit = 0, spl = 0 ;
    for(int i=0; i<n ; i++){
        if(s[i]>='a' and s[i]<='z'){
            lower++ ;
        }
        else if(s[i]>='A' and s[i]<='Z'){
            upper++ ;
        }
        else if(s[i]>='0' and s[i]<='9'){
            digit++ ;
        }
        else{
            spl++ ;
        }
    }
    if(upper==0 || lower==0 || digit==0 || spl==0){
        cout << "Weak" ;
        return 0;
    }else{
        cout << "Strong";
    }
}