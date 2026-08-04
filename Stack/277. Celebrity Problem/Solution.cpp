#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution{
public:

    int Celebrity(vector< vector<int>> &arr){

        stack<int> st;
        int n = arr.size();

        for(int i=0;i<n;i++) st.push(i);

        while(st.size() != 1){
            int i = st.top(); st.pop();
            int j = st.top(); st.pop();

            if(arr[i][j] == 1) st.push(j);
            else st.push(i);

        }

        int x = st.top();

        for(int i=0;i<n;i++){
            if(arr[x][i] == 1 || arr[i][x] == 0 && i != x) return -1;
        }

        return x;
    }
};

