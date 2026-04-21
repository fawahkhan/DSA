// LC 25 - Reverse Nodes in k-Group

#include <iostream>
using namespace std ;

/**
 * Definition for singly-linked list. */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head ; // sabse pehle ek temp bana liya aur head se initialise krliya , this will help us traverse.
        int cnt = 0 ; // this will help us keep a track
        // check if k nodes exist
        while (cnt<k){
            if(temp == NULL) return head; // k nodes dont exist
            temp = temp -> next ;
            cnt++;
        }

        // recursively call for rest of the linkedList
        ListNode* prevNode = reverseKGroup(temp, k) ; // this will give us the next starting node. after reversing the group with k nodes , or if not k nodes then return us that linkedlist as it is.
        
        // reverse current group
        temp = head ; // reinitialised to head
        cnt = 0 ;
        while (cnt < k){
            ListNode* next = temp -> next; // stored the address of the node next to ttemp initially.
            temp -> next = prevNode ; // then connected to newNode safely after reversing without losing initial next

            prevNode = temp; // updating prevNode , bringing it one step back , 
            temp = next; // now the initial next i.e. 2 became our new temp. now loop goes on.
            cnt ++ ;
        }
        return prevNode ; // as our new head.
    }   
};