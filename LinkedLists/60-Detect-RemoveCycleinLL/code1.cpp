// problem no. 141 - detect a cycle in a linkedlist
#include <iostream>
/**
Definition for singly-linked list.*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        // slow fast approach
        ListNode* slow = head; 
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            // move slow pt by 1 step and fast by 2.
            slow = slow->next;
            fast = fast->next->next ;
            if(slow == fast) return true ;
        } 
        return false ;
    }
};