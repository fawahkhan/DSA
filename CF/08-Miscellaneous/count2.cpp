// if you're given an unusually large number and you have to find sum of all its digits so int wont work neither will long long work
// in that case we have to store that large number in a string and go to each character s[i] and convert it into a digit so that its sum can be taken .

// note that by default the ascii values will be added , to convert it into a number we have to subtract '0' or its ascii value 48 from every s[i].
/*
You are given a very large non-negative integer N
 that may not fit in 64-bit integer types.

Your task is to compute the sum of its digits.

Input
The only line contains the integer N
 as a string.

It is guaranteed that 1≤|N|≤105
 and N
 consists only of digits 0–9.

Output
Print one integer — the sum of the digits of N
.

Example
InputCopy
1000000000000000000003
OutputCopy
4
*/
#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin >> s ;
    int n = s.size(), sum=0 ; 
    for(int i = 0 ; i< n ; i++){
        sum += s[i] - 48 ;
    }
    cout << sum ;
}
