
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
        for(int i=0;i<rows;i++){
            if(grid[i][0]==0){
                for(int j=0;j<columns;j++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j] = 0;
                }
            }
        }

        for(int j=0;j<columns;j++){
            int noz=0,noo=0;
            for(int i=0;i<rows;i++){
                if(grid[i][j]==0) noz++;
                else noo++;
            }

            if(noz>noo){
                for(int i=0;i<rows;i++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j] = 0;
                }
            }
        }

        int sum = 0;
        for(int i=0;i<rows;i++){
            int x = 1;
            for(int j=columns-1;j>=0;j--){
                sum+=grid[i][j]*x;
                x*=2;
            }
        }
        return sum;
    }

};