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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* slow = head, *fast = head, *prev = head;

        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        ListNode* a = sortList(head);
        ListNode* b = sortList(slow);

        return Merge(a,b);
    }

    ListNode* Merge(ListNode* a,ListNode* b){
        ListNode dummy(10);
        ListNode* temp = &dummy;

        while(a && b){
            if(a->val>=b->val){
                temp->next = b;
                b = b->next;
            }
            else{
                temp->next = a;
                a = a->next;
            }
            temp = temp->next;
        }
        temp->next = a? a:b;

        return dummy.next;
    }
};