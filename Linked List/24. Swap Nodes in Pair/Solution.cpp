#include<iostream>
using namespace std; 

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode Dummy;

        ListNode* temp = &Dummy;
        ListNode* slow = head;

        while(slow && slow->next){

            ListNode* nxt = slow->next->next;

            temp->next = slow->next;
            temp = temp->next;

            ListNode* var = slow;
            temp->next = var;
            temp = temp->next;

            temp->next = nxt;

            slow = nxt;

        }

        return Dummy.next;
    }
};