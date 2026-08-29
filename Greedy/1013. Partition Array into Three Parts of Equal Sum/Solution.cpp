#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for(int ele: arr) sum += ele;

        if(sum % 3 != 0) return false;

        int target = sum / 3;
        sum = 0;
        int parts = 0;

        for(int ele: arr){
            sum += ele;

            if(sum == target){
                parts++;
                sum  = 0;
            }

            if(parts == 3) return true;
        }

        return false;
    }
};