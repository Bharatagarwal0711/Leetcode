class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> ans(n,vector<int>(n));

        int minr = 0,minc = 0;
        int maxr = n-1,maxc = n-1;
        
        int count = 0;

        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc && count<n*n;i++) ans[minr][i] = ++count;
            minr++;

            for(int i=minr;i<=maxr && count<n*n;i++) ans[i][maxc] = ++count;
            maxc--;

            for(int i=maxc;i>=minc && count<n*n;i--) ans[maxr][i] = ++count;
            maxr--;

            for(int i=maxr;i>=minr && count<n*n;i--) ans[i][minc] = ++count;
            minc++;
        }
        return ans;
    }
};
