#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int count = 0;

        int x = 0;  // g
        int y = 0;  // s

        while(x<g.size() && y<s.size()){
            if(s[y]>=g[x]){
                count++;
                x++;
                y++;
            }
            else y++;
        }
        return count;
    }
};