// LC 430 - Flatten a Multilevel Doubly Linked List

#include <iostream>
using namespace std ;
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};


class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL) return head ;

        Node* curr = head ;  //first make a curr ptr to traverse
        while(curr != NULL){ 
            if(curr -> child != NULL){ // on a valid child node
                Node* next = curr -> next; // safely store the value of next element of the curr so that it remains preserved
                curr -> next = flatten(curr -> child) ; // connected curr to the flattened child nodes sub-linkedlist .
                curr -> next -> prev = curr ; // connected doubly 
                curr -> child = NULL ;  // made the child pointer null . Step1 complete . flattened child node aake connect krdi hai

            
            // step 2 , sub-linkedlist ke end element ko purani list ke next element se link kro doubly .
            
                // finding the tail
                while(curr->next!= NULL){
                    curr = curr -> next ;
                }
                // attach tail with next ptr
                if(next != NULL){ // agr next null nhi hai toh connect krdo sublist se
                    curr -> next = next ;
                    next -> prev = curr ;

                }
            }
            curr = curr -> next ;
        }
        return head ;
    }
};