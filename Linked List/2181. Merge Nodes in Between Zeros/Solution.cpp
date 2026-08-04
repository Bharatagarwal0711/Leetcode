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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* temp = head;
        ListNode* start = head->next;

        while(start){
            int sum = 0;

            while(start && start->val != 0){
                sum += start->val;
                start = start->next;
            }
            
            if(start->next == NULL) temp->next = NULL;
            start = start->next;
            
            temp->val = sum;
            temp = temp->next;
        }

        return head;
    }
};