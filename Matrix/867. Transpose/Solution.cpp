// Matrix Transpose

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();          // number of rows
        int n = matrix[0].size();       // number of columns
        vector<vector<int>> result(n, vector<int>(m)); // transposed size is n x m

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                result[j][i] = matrix[i][j];
            }
        }

        return result;
    }
};
