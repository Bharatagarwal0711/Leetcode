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
    int factor = 1;
    int getDecimalValue(ListNode* head) {
        if(head == NULL) return 0;
        int ans = getDecimalValue(head->next);

        ans += head->val*factor;
        factor *= 2;

        return ans;
    }
};
