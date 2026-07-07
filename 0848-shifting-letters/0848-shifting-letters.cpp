class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int size = shifts.size();

        int temp = 0;

        for(int i=size-1;i>=0;i--){
            temp = (temp + shifts[i]) % 26;
            shifts[i] = temp;
        }   

        for(int i=0;i<size;i++){
            int ch = s[i]-97;

            ch = (ch + shifts[i] % 26) % 26;
            s[i] = char(ch+97);
        }   
        return s;

    }
};