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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* slow = head;
        ListNode* temp = head;

        while(temp){
            while(temp && temp->val == slow->val){
                temp = temp->next;
            }
            slow->next = temp;
            slow = temp;
        }
        return head;
    }
};