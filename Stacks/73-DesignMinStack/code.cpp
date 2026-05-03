// LC 155 Design a Min Stack.- Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
#include <iostream>
#include <stack>
using namespace std ;

class MinStack {
public:
    stack<pair<int, int>>s; // val, min
    MinStack() {
        
    }
    
    // here we will push the top element as well as the minimum value in a pair .
    void push(int val) { 
        if(s.empty()){
            s.push({val, val}); // condition for empty stack
        }else{
            int minVal = min(val, s.top().second);
            s.push({val,minVal});
        }
    }
    // simple s.pop()
    void pop() {
        s.pop();
    }
    // just return the first element of the pair from the top
    int top() {
        return s.top().first ;
    }
    // just return the second element of the pair from the top    
    int getMin() {
        return s.top().second ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */