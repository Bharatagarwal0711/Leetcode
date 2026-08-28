#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {

        int fsize = firstList.size();
        int ssize = secondList.size();
        
        if(fsize == 0 || ssize == 0) return {};

        vector<vector<int>> ans;
        int i=0, j=0;

        vector<int> temp(2);

        while(i<fsize && j<ssize){


            bool check = overlap(firstList[i],secondList[j]);

            if(!check) {
                if(GreaterInterval(firstList[i],secondList[j]) == 0) j++;
                else i++;

                continue;
            }


            temp[0] = max(firstList[i][0],secondList[j][0]);
            temp[1] = min(firstList[i][1],secondList[j][1]);

            if(firstList[i][1] < secondList[j][1]) i++;
            else j++;


            ans.push_back(temp);

        }

        return ans;

    }

    bool overlap(vector<int> &first, vector<int> &second){
        if((first[0] >= second[0] && first[0] <= second[1])  || (second[0] >= first[0] && second[0] <= first[1]) ) 
            return true;

        return false;
    }

    bool GreaterInterval(vector<int> &first, vector<int> &second){
        // 0 -> FirstInterval is Greater
        // 1 -> Second Interval is Greater

        if(first[0] > second[0]) return 0;
        return 1;

    }
};