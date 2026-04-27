#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    vector<int> arr = {3, 1, 0, 8, 6};
    vector<int> prevSmallerElem(arr.size(),0);
    stack<int> s ;

    for(int i = 0 ; i < arr.size(); i++){
        while(s.size()>0 && s.top()>= arr[i]){
            s.pop();
        }
        if(s.empty()){
            prevSmallerElem[i] = -1 ;
        }else{
            prevSmallerElem[i] = s.top();
        }
        s.push(arr[i]);
    }

    for( int val : prevSmallerElem){
        cout << val << " ";
    }
    cout<< "\n";
    

    return 0;
}