#include<iostream>
#include<string>
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
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;
        
        node->val = node->next->val;
        node->next = temp->next;

        delete temp;
    }
};