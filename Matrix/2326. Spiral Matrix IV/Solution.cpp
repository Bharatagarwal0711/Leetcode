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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        int minr = 0,minc = 0;
        int maxr = m-1,maxc = n-1;

        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc && count<m*n;i++){
                if(head == NULL) return ans;
                ans[minr][i] = head->val ;
                head = head->next;
            }
            minr++;

            for(int i=minr;i<=maxr && count<m*n;i++){
                if(head == NULL) return ans;
                ans[i][maxc] =  head->val ;
                head = head->next;
            } 
            maxc--;

            for(int i=maxc;i>=minc && count<m*n;i--){
                if(head == NULL) return ans;
                ans[maxr][i] = head->val ;
                head = head->next;
            }
            maxr--;

            for(int i=maxr;i>=minr && count<m*n;i--){
                if(head == NULL) return ans;
                ans[i][minc] = head->val ;
                head = head->next;
            }
            minc++;
        }
        return ans;
    }
};