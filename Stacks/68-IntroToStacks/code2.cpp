// implement stack using a list
#include <iostream>
#include <list>
using namespace std;

class Stack{
    list<int> ll ;
public:
    void push(int val){ // 0(1)  -- we will try that "head" remains the "top"
        ll.push_front(val);
    }
    void pop(){ // 0(1)
        ll.pop_front();
    }
    int top(){ // 0(1)
        return ll.front();
    }
    bool empty(){
        return ll.size() == 0 ;

    }
};

int main(){
    Stack s ;
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