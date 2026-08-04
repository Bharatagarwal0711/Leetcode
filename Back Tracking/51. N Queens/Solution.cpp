#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;

class Solution {
public:

    bool isSafe(vector<string> &board,int row,int col,int n){
        
        for(int i=0;i<n;i++) if(board[i][col] == 'Q') return false;


        int i=row,j=col;
        while(i>=0 && j>=0){
            if(board[i][j] == 'Q') return false;
            i--;j--;
        } 

        i=row,j=col;
        while(i>=0 && j<n){
            if(board[i][j] == 'Q') return false;
            i--;j++;
        } 

        return true; 
    }

    void Queens(vector<vector<string>> &ans,int row,int n,vector<string> &board){

        if(row == n){
            ans.push_back({board});
            return;
        }

        for(int col=0;col<n;col++){
            
            if(isSafe(board,row,col,n)){
                board[row][col] = 'Q';
                Queens(ans,row+1,n,board);
                board[row][col] = '.';
            }
        }
        
    }

    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));

        Queens(ans,0,n,board);

        return ans;
        
    }
};