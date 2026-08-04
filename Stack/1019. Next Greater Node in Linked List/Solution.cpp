#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> values;

        ListNode* temp = head;
        while(temp){
            values.push_back(temp->val);
            temp = temp->next;
        }
        
        int n = values.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i=n-1;i>=0;i--){

            while(!st.empty() && st.top() <= values[i]) st.pop();

            ans[i] = st.empty() ? 0 : st.top(); 

            st.push(values[i]);
        }

        return ans;

    }
};