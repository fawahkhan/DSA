// stock span problem
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    // stock prices 
    vector<int> price = {100, 80, 60, 70, 60, 75, 85} ;
    
    // solution
    vector<int> ans(price.size(), 0); // initialised all thhe values to be zero and the size to be same as price array.
    stack<int> s ;

    for (int i = 0 ; i < price.size() ; i++){
        // pop <= values from the stack 
        while( s.size() > 0 && price[s.top()] <= price[i] ){
            s.pop();
        }
        if(s.empty()){  // case of empty stack
            ans[i] = i+1 ;
        }else{
            ans[i] = i-s.top() ; // i - prevHigh
        }
        s.push(i); // at the end we will push that ith value to the stack and move to next iteration
    }
    // print answer values at the end 
    for(int val : ans){
        cout << val << " ";
    }
    cout << "\n" ;
}
