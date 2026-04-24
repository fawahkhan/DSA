//  top find the next greated element : we need 2 know two things : 
// 1. the elements at the right
// 2. greater than current element or not.
// return the immediate greater one or return -1 if not found.
#include <iostream> 
#include <vector>
#include <stack>
using namespace std ;

int main(){
   vector<int> arr = {6,8,0,1,3} ;

   vector<int> nextGreaterElem(arr.size(), 0);
   stack<int> s ;

   for(int i = arr.size()-1 ; i>=0 ; i--){
    while( s.size() > 0 && s.top() <= arr[i]){
        s.pop(); //   stack me se top element pop krdo jabtk top element is smaller
    }
    if(s.empty()){
        nextGreaterElem[i] = -1 ;
    }else{
        nextGreaterElem[i] = s.top();
    }
    s.push(arr[i]); // NOTE you did mistake here . you have to push the element from that array into the stack for further comparison not the element from the nextGreaterELEM.
   }
   for(int val : nextGreaterElem){
        cout << val << " ";
    }
    cout << "\n" ;



}