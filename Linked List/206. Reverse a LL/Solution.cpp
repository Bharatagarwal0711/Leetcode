#include<iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nex = curr->next;

        while(nex){
            curr->next = prev;
            prev = curr;
            curr = nex;
            nex = nex->next;
        }
        curr->next = prev;
        return curr;

    }
};