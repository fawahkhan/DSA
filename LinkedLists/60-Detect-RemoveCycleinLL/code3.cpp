// how to remove the cycle from the linkedlist

#include <iostream>

/**
Definition for singly-linked list. */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // first detect a cycle using slow fast approach 
        //initialise slow and fast pointers with head 
        ListNode* slow = head ;
        ListNode* fast = head ; 

        while( fast != NULL && fast -> next != NULL){
            slow = slow -> next; 
            fast = fast -> next -> next ;
            if( slow == fast ){
                slow = head ;  // once you detect the cycle , on the exact same point reset the slow pointer to head . and continue the next loop again but now move both s and f by one step till they are equal again.
                ListNode* prev = NULL ;
                while( slow != fast ){
                    slow = slow -> next ;
                    prev = fast; // ab hamne har iteration pe pehle prev ko fast ki value se store krdiya before increasing fast . jese hi equal value ayegi loop exit hogi and hamare pas prev ki value bhi hogi.
                    fast = fast -> next ;
                }
                // now we just have to cut the ties with the previous node 
                prev -> next = NULL ;
                return slow ;
            }
        }
        return NULL ;
    }
};