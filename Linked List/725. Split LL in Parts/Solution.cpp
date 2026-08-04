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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,NULL);
        int size = 0, idx = 0;
        
        ListNode* temp = head;
        while(temp){
            size++;
            temp = temp->next;
        }

        temp = head;

        while(temp){
            int Len = size/k;
            if(size % k != 0) Len += 1;

            ans[idx] = temp;
            for(int i=0;i<Len-1;i++) temp = temp->next;

            ListNode* prev = temp;
            temp = temp->next;
            prev->next = NULL;

            k--;
            size = size-Len;
            idx++;
        }

        return ans;

    }
};