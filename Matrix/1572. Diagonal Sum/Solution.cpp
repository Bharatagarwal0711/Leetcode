#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int ans = 0;
        int i=0,j=n-1;
        while(i<n && j>=0){
            ans += mat[i][i] + mat[i][j];  
            i++;
            j--;
        }
        
        if(n%2 == 1) ans -= mat[n/2][n/2];
        return ans;

    }
};