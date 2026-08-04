// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle


#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i=1;i<=rowIndex+1;i++){
            vector<int> temp(i,1);
            ans.push_back(temp);
        }
        for(int i=2;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                if(i==j || j==0) continue;
                ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
            }
        }
        
        return ans[rowIndex];
    }
};