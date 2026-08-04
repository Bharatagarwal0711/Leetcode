#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std; 

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int x,y,sum  = 0;

        for(string ele: operations){
            if(ele == "+"){
                x = st.top(); st.pop();
                y = st.top(); st.pop();

                int ans = x+y;
                st.push(y);
                st.push(x);
                st.push(ans);

            }
            else if(ele == "D") st.push(2*st.top());
            
            else if(ele == "C"){
                sum -= st.top();
                st.pop();
                continue;
            }
            else st.push(stoi(ele));
               
            sum += st.top();
        }
        return sum;
    }
};