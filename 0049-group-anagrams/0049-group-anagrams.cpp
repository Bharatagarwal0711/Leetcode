class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> temp;

        for(const auto& str: strs){
            string z = str;
            sort(z.begin(),z.end());
            temp[z].push_back(str);
        }

        vector<vector<string>> ans;
        for(const auto& str: temp) ans.push_back(str.second);
        
        return ans;
    }
};