#include<iostream>
#include<vector>
using namespace std; 

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;

        ListNode dummy;
        ListNode* temp = &dummy, *curr = head;
        
        while(curr){
            if(curr->val != val){
                temp->next = curr;
                temp = temp->next;
            }
            curr = curr->next;
        }
        temp->next = NULL;
        
        return dummy.next;
    }
};