#include<iostream>
using namespace std; 

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {} 
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt = head->next;

        while(nxt){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        curr->next = prev;
        return curr;
    }

    ListNode* removeNodes(ListNode* head) {

        if(head->next == NULL) return head;

        head = reverseList(head);
        int mx = head->val;
        ListNode*temp = head;

        ListNode dummy(0);
        ListNode* dum = &dummy;

        while(temp){
            if(temp->val >= mx){
                dum->next = temp;
                dum = dum->next;
                mx = temp->val;
            }
            temp = temp->next;
        }
        dum->next = NULL;

        return reverseList(dummy.next);
        
    }
};