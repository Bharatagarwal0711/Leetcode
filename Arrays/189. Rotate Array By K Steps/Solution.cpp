#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i=0;i<rows;i++) 
            for(int j=0;j<i;j++) 
                swap(matrix[i][j],matrix[j][i]);
                
        for(int i=0;i<rows;i++) Reverse(matrix[i]);
        return;
    }
    void Reverse(vector<int> &arr){
        int i = 0;
        int j = arr.size()-1;
        while(i<j) swap(arr[i++],arr[j--]);
    }
};