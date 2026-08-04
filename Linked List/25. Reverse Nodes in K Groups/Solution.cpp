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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        ListNode Dummy(0);
        ListNode* temp = &Dummy;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast){
            int count = 0;

            ListNode* prev = fast;

            while(fast && count<k){
                prev = fast;
                fast = fast->next;
                count++;
            }

            if(count == k){
                prev->next = NULL;
                temp->next = reverseList(slow);
                temp = slow;
                temp->next = fast;
                slow = fast;
            }
        }

        return Dummy.next;

    }

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
};