// implement stack using a vector / array
#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector<int> v ;
public:
    void push(int val){ // 0(1)
        v.push_back(val);
    }
    void pop(){ // 0(1)
        v.pop_back();
    }
    int top(){ // 0(1)
        return v[v.size()-1] ;
    }
    bool empty(){
        return v.size() == 0 ;

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