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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size() == 0) return NULL;
        if(arr.size() == 1) return arr[0];

        while(arr.size()>1){
            vector<ListNode*> temp;

            for(int i=0;i<arr.size();i+=2){
                if(i+1 < arr.size()) temp.push_back(Merge(arr[i],arr[i+1]));
                else temp.push_back(arr[i]);
            }
            arr = temp;
        }

        return arr[0];
    }

    ListNode* Merge(ListNode* a,ListNode* b){
        ListNode dummy;
        ListNode* temp = &dummy;

        while(a && b){
            if(a->val>=b->val){
                temp->next = b;
                b = b->next;
            }
            else{
                temp->next = a;
                a = a->next;
            }
            temp = temp->next;
        }
        temp->next = a?a:b;

        return dummy.next;
    }
};