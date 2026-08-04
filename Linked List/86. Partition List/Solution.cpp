#include<iostream>
#include<vector>
using namespace std; 

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        ListNode dummy1,dummy2;
        ListNode* temp = head, *temp1 = &dummy1, *temp2 = &dummy2;

        while(temp){
            if(temp->val < x){
                temp1->next = temp;
                temp1 = temp1->next;
            }
            else{
                temp2->next = temp;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }

        temp1->next = dummy2.next;
        temp2->next = NULL;
        head = dummy1.next;

        return head;

    }
};