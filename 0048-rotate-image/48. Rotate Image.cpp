class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        
        int n = arr.size();

        for(int i=0;i<n;i++){    // transpose
            for(int j=0;j<i;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }

        for(int i=0;i<n;i++)  Reverse(arr[i]);   // Reverse
    
        return;
    }

    void Reverse(vector<int> &arr){
        int i = 0, j = arr.size()-1;
        while(i<j) swap(arr[i++],arr[j--]);
        return;
    }
};
