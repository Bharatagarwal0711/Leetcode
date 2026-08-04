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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode dummy(10);
        ListNode* temp = &dummy, *prev = head, *curr = head->next;

        int val = INT_MIN;

        while(curr){
            if(prev->val != curr->val){
                temp->next = prev;
                temp = temp->next;
                prev = curr;
                curr = curr->next;
            }
            else{
                val = prev->val;
                while(curr && curr->val == val) curr = curr->next;
                prev = curr;
                if(curr) curr = curr->next;
            }

        }
        if(prev && prev->val != val){
            temp->next = prev;
            prev->next = NULL;
        }
        else temp->next = NULL;

        return dummy.next;

    }
};