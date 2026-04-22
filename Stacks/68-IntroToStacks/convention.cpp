// implement code1 and code2 without class Stack ,
#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

int main(){
    stack<int> s ;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty()){
        cout << s.top() << " " ; 
        s.pop();
    }
    cout << "\n" ;
    return 0;
}