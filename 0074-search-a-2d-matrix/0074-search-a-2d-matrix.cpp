class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int low = 0;
        int high = rows*cols-1;
        int mid,r,c;

        while(low<=high){

            mid = low + (high-low)/2;

            r = mid / cols;
            c = mid % cols;

            if(matrix[r][c] == target) return true;
            else if(matrix[r][c]>target) high = mid-1;
            else low = mid+1;
        }
        return false;
    }
};