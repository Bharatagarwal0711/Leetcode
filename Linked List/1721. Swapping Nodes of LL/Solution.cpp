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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* slow = head, *fast = head,* temp = head;
        for(int i=1;i<=k && fast;i++) fast = fast->next;

        while(fast){
            fast = fast->next;
            slow = slow->next;
        }

        for(int i=1;i<k;i++) temp = temp->next;

        swap(temp->val , slow->val);
        return head;
        
    }
};