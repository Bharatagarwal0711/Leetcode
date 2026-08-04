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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy ;
        ListNode* temp = &dummy;

        while(list1 && list2){
            if(list1->val >= list2->val){
                temp->next = list2;
                list2 = list2->next;
            }
            else{
                temp->next = list1;
                list1 = list1->next;
            }
            temp = temp->next;
        }
        
        temp->next = list1? list1 : list2;

        return dummy.next;
    }
};