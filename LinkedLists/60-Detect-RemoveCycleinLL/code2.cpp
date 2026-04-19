// problem 142- detect the exact position where the linkedlist cycle starts
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

                while( slow != fast ){
                    slow = slow -> next ;
                    fast = fast -> next ;
                }
                return slow ; // ab slow ya fast dono same hi point pe hai kisi ko bhi return krwa do .
            }
        }
        return NULL ;
    }
};