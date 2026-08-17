#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0;i<9;i++){

            vector<bool> row(10);
            vector<bool> col(10);

            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    if(row[board[i][j]-'0']) return false;
                    row[board[i][j]-'0'] = 1;
                }

                if(board[j][i] != '.'){
                    if(col[board[j][i]-'0']) return false;
                    col[board[j][i]-'0'] = 1;
                }

            }
        }

        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                if(check(board,i,j)==false) return false;
            }
        }

        return true;

    }

    bool check(vector<vector<char>>& board,int row,int col){

        unordered_set<char> temp;

        for(int i=row;i<row+3;i++){
            for(int j=col;j<col+3;j++){
                if(board[i][j] != '.'){
                    if(temp.find(board[i][j]) != temp.end() ) return false;
                    temp.insert(board[i][j]);
                }
            }
        }

        return true;
    }

};