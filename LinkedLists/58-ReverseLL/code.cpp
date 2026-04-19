// problem no. 206 - reverse a given linked list
#include <iostream>

class Solution {
public:
    struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
    ListNode* reverseList(ListNode* head) {
       ListNode* prev = NULL;
       ListNode* curr = head;
       ListNode* next = NULL;

       while( curr != NULL){
        next = curr->next ;  // sabse pehle hame next ko preserve krna hai taaki saved rhe
        curr -> next = prev ; // ab connection break krdiya the next of current is assigned to prev 

        prev = curr ; // ab previous ko current bana diya
        curr = next ; //aur curr ko next bana diya and run the loop again
       }
       return prev ;
    }

};