// push---- back front both
// pop --- from front back both

// double ended queue
#include <iostream>
#include <deque>
using namespace std ;


int main(){
    deque<int> q ;
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    q.push_front(5);


    q.pop_back(); // 5,1,2
    cout << q.front() << " " << q.back() << endl;
    return 0 ;
}