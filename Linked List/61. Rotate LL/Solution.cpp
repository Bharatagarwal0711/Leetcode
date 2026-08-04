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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL) return head;

        int n = 1;
        ListNode *slow = head, *fast = head;
        while(fast->next){
            n++;
            fast = fast->next;
        }

        k %= n;
        if(k == 0) return head;
        int idx = n - k;

        slow = head;
        for(int i = 1; i < idx; i++) slow = slow->next;  

        ListNode* ans = slow->next;

        slow->next = NULL;
        fast->next = head;

        return ans;
    }
};