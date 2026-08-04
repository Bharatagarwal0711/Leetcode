#include<iostream>
#include<vector>
#include<climits>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> res;

        int rows = matrix.size(), cols = matrix[0].size();
        
        int minr = 0, minc = 0;

        int maxr = matrix.size()-1, maxc = matrix[0].size()-1;

        int ele = rows * cols;
        int count = 0;

        while(minr<=maxr && minc<=maxc){

            for(int i=minc;i<=maxc && count<ele;i++){
                res.push_back(matrix[minr][i]);
                count++;
            }
            minr++;

            for(int i=minr;i<=maxr && count<ele;i++){
                res.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;

            for(int i=maxc;i>=minc && count<ele;i--){
                res.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;

            for(int i=maxr;i>=minr && count<ele;i--){
                res.push_back(matrix[i][minc]);
                count++;
            }
            minc++;

        }
        return res;
    }
};