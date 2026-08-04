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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* head = NULL,*tail = NULL, *temp = list1;
        int idx = 0;

        while(temp){
            if(idx == a-1) head = temp;
            if(idx == b+1) tail = temp;
            idx++;
            temp = temp->next;
        }

        head->next = list2;

        temp = list2;
        while(temp->next) temp = temp->next;

        temp->next = tail;

        return list1;
    }
};