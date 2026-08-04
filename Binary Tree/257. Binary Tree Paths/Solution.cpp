#include<iostream>
#include<vector>
#include<string>
using namespace std; 

class TreeNode{
public:

    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

};
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,ans,"");
        return ans;
    }

    void helper(TreeNode* root,vector<string> &ans,string temp){

        if(root == NULL) return;
        temp += to_string(root->val);
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(temp);
            return;
        }


        helper(root->left,ans,temp + "->");
        helper(root->right,ans,temp + "->");

    }
};