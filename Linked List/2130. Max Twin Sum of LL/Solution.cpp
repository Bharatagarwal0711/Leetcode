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

    int pairSum(ListNode* head) {
        ListNode* slow = head, *fast = head, *prev = head;
        int ans = INT_MIN;

        while(fast){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;

        slow = reverseList(slow);
        fast = head;

        while(slow){
            ans = max(ans,(slow->val+fast->val));
            slow = slow->next;
            fast = fast->next;
        }
        return ans;
    }
};