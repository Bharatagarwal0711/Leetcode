class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        string ans = "";
        string first = strs[0];
        string last = strs[strs.size()-1];

        int minLen = min(first.size(),last.size());

        for(int i=0;i<minLen;i++){
            if(first[i] == last[i]) ans += first[i];
            else break;
        }
        return ans;
    }
};
