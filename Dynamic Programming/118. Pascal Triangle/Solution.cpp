#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            vector<int> temp(i,1);
            ans.push_back(temp);
        }
        for(int i=2;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(i==j || j==0) continue;
                ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
            }
        }
        
        return ans;
    }
};