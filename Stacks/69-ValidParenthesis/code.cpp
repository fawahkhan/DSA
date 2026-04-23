// LC - 20: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. If last braccket is closed first then it is valid.
#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> st ; // made a stack

        for(int i = 0; i< str.size(); i++){
            if(str[i] == '{' || str[i] == '[' || str[i] == '('){ // case of opening brackets
            st.push(str[i]);

            }else{ // case for closing brackets 
                // first check if the stack is emptyy
                if(st.size()==0){
                    return false ; // closing > opening
                }
                if((st.top()=='{' && str[i] == '}') || (st.top()=='[' && str[i] == ']') || (st.top()=='(' && str[i] == ')')){
                    st.pop(); // means match is found so pop out
                }else{
                    // no matches found
                    return false ;
                }
            }
        }
        return st.size() == 0 ;
    }
};