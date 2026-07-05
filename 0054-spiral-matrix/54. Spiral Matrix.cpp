class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int m = matrix.size();
        int n = matrix[0].size();

        int minRow = 0, minCol = 0;
        int maxRow = m-1, maxCol = n-1;

        int ele = 0;

        while((minRow <= maxRow) && (minCol <= maxCol)){

            for(int i=minCol;i<=maxCol && ele<m*n;i++){  // Right
                ans.push_back(matrix[minRow][i]);
                ele++;
            }
            minRow++;

            for(int i=minRow;i<=maxRow && ele<m*n;i++){  // Down
                ans.push_back(matrix[i][maxCol]);
                ele++;
            }
            maxCol--;

            for(int i=maxCol;i>=minCol && ele<m*n;i--){  // Left
                ans.push_back(matrix[maxRow][i]);
                ele++;
            }
            maxRow--;

            for(int i=maxRow;i>=minRow && ele<m*n;i--){  // Up
                ans.push_back(matrix[i][minCol]);
                ele++;
            }
            minCol++;

        }
        return ans;
    }
};
