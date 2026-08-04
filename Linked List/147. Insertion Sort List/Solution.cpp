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
    ListNode* insertionSortList(ListNode* head) {
        if(head->next == NULL) return head;
        ListNode dummy(0);
        dummy.next = head;

        ListNode* start = head->next, *prev = NULL;
        ListNode *temp = NULL, *nxt = NULL;
        head->next = NULL;

        while(start){
            nxt = start->next;

            prev = &dummy;
            temp = dummy.next;
            
            while(temp && temp->val < start->val){
                prev = temp;
                temp = temp->next;
            }
            prev->next = start;
            start->next = temp;

            start = nxt;
        }
        return dummy.next;
    }
};