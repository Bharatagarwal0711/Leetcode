#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int> penalty(customers.size()+1);

        int n = penalty.size();

        int no = 0;

        for(int i=0;i<n;i++){
            penalty[i] = no;
            if(customers[i]=='N') no++;
        }

        no = 0;
        for(int i=customers.size()-1;i>=0;i--){
            if(customers[i]=='Y') no++;
            penalty[i] += no;
        }

        int min = INT_MAX;
        int idx = -1;
        for(int i=0;i<n;i++){
            if(penalty[i]<min){
                min = penalty[i];
                idx = i;
            } 
        } 
        return idx;

    }
};