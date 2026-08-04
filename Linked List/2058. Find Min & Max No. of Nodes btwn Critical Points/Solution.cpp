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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int> ans(2,-1);
        vector<int> points;
        int idx = 1;

        ListNode* curr = head->next;
        ListNode* prev = head;
        ListNode* nxt = head->next;

        int minDis = INT_MAX;

        while(nxt && nxt->next){
            nxt = nxt->next;

            bool flag = ((curr->val > prev->val) && (curr->val > nxt->val)) ||
                        ((curr->val < prev->val) && (curr->val < nxt->val));

            if(flag) points.push_back(idx);
            if(points.size()>1){
                minDis = min(minDis,points[points.size()-1]-points[points.size()-2]);
            }
            
            idx++;
            prev = curr;
            curr = nxt;

        }
        
        if(points.size() < 2) return ans;

        ans[1] = points[points.size()-1] - points[0];
        ans[0] = minDis;
        
        return ans;


    }
};