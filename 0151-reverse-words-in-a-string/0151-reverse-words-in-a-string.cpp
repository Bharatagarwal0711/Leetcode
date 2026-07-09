class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans = "";
        int i=0;
        while(i<s.size()){
            
            while(i<s.size() && s[i]==' ') i++;
            string temp = "";

            while(i<s.size() && s[i]!=' '){
                temp.push_back(s[i]);
                i++;
            }
            if(temp.size()!=0){
                reverse(temp.begin(),temp.end());
                ans = ans + " " + temp;
            }
        }
        return ans.erase(0,1);
    }

};