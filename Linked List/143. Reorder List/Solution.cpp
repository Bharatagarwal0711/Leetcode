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

    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nex = curr->next;

        while(nex){
            curr->next = prev;
            prev = curr;
            curr = nex;
            nex = nex->next;
        }
        curr->next = prev;
        return curr;
    }

    void reorderList(ListNode* head) {
        if(head->next == NULL) return;

        ListNode* temp = head;
        ListNode* slow = head, * fast = head, * prev = head;

        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;

        fast = reverseList(slow);
        slow = head->next;
        while(slow && fast){

            ListNode* S = slow->next;
            ListNode* F = fast->next;

            temp->next = fast;
            temp = temp->next;
            temp->next = slow;
            temp = temp->next;

            slow = S;
            fast = F; 
        }

        temp->next = slow? slow:fast;
        
    }
};