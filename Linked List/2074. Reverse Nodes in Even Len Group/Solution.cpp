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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* curr = head, *prev = NULL, *nxt = head->next;

        while(nxt){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        curr->next = prev;
        return curr;
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if(head->next == NULL) return head;

        ListNode* start = NULL;
        ListNode* tail = NULL;
        ListNode* prev = head;
        ListNode* temp = head->next;

        int k = 2;

        while(temp){ 

            start = temp;
            int count = 0;

            while(temp && count<k){
                count++;
                tail = temp;
                temp = temp->next;
            }

            if(count % 2 == 0){
                tail->next = NULL;
                prev->next = reverseList(start);
                start->next = temp;
                prev = start;
            }
            else  prev = tail;
            
            k++;
        }

        return head;

    }
};