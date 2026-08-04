#include<iostream>
#include<string>
#include<vector>
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL) return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=1;i<=n+1;i++){
            if(fast == NULL) return head->next;
            fast = fast->next;
        }

        while(fast){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* temp = slow->next;
        slow->next = slow->next->next;

        delete temp;
        return head;

    }
};
