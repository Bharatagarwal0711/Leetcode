#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        int i = 0;
        int n = asteroids.size();

        while(i<n){

            int x = asteroids[i];

            if(st.empty() || (st.back() > 0 && x > 0) ||  (st.back() < 0 && x < 0) || x > st.back()){
                st.push_back(asteroids[i]);
                i++;
            }
                

            else{

                if(x + st.back() == 0){
                    st.pop_back();
                    i++;
                }

                else if(st.back() > abs(x)) i++;

                else while(!st.empty() && abs(x) > abs(st.back()) && st.back() > 0 ) st.pop_back();
                
            }

        }

        return st;
    }
};