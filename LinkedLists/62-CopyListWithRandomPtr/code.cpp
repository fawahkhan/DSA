//  problem no. 138 Copy list with random pointer 
#include <iostream>
#include <unordered_map>
/*
// Definition for a Node.*/
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if( head == NULL ){
            return NULL ; // empty list
        }
        unordered_map<Node*, Node*> m ; // will stored corresponding pair nodes in this
        Node* newHead = new Node(head -> val); // created a new Head
        // initialised two pointers to iterate the list
        Node* oldTemp = head -> next;
        Node* newTemp = newHead ;
        
        m[head] = newHead ; //stored the value of NewHead in the map correspnding to head

        // copying the linkedlist simply without random nodes
        while(oldTemp != NULL){
            Node* copyNode = new Node(oldTemp -> val); //simple copy node bana diya old temp ki value pe fr newTemp ka next will point to copyNode.

            m[oldTemp] = copyNode; // map of oldTemp is pointing to copyNode
            newTemp -> next = copyNode ;
            // updating oldTemp and newTemp
            oldTemp = oldTemp -> next ;
            newTemp = newTemp -> next ;
        }
        // simple list is created now reinitialise the old and new temp .
        oldTemp = head ;
        newTemp = newHead ;
        while(oldTemp != NULL){
            newTemp -> random = m[oldTemp->random];  // oldTemp ke random ki value newTemp ki random ki value ke barabar krdo map se dekh ke.
            // updating old and new temp
            oldTemp = oldTemp -> next ;
            newTemp = newTemp -> next ;
        }
        return newHead ;
    }
};