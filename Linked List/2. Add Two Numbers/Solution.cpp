#include<iostream>
#include<climits>
#include<vector>
using namespace std; 

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode dummy(0);
        ListNode* temp1 = l1, *temp2 = l2, *temp = &dummy;

        int carry = 0;

        while(temp1 || temp2 || carry){
            int val = carry;
            if(temp1){
                val += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2){
                val += temp2->val;
                temp2 = temp2->next;
            }

            if(val>=10){
                val = val-10;
                carry = 1;
            }
            else carry = 0;

            ListNode* node = new ListNode(val);
            temp->next = node;
            temp = node;
        }
        
        return dummy.next;

    }
};