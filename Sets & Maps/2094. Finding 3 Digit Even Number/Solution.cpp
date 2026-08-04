class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();

        vector<int> ans;

        unordered_map<int,int> digit;
        for(int ele: digits) digit[ele]++;


        unordered_map<int,int> temp;

        for(int i=100;i<=998;i+=2){

            bool flag = true;
            temp = digit;
            int num = i;

            while(num){
                if(temp[num % 10] > 0){
                    temp[num % 10]--;
                }
                else{
                    flag = false;
                    break;
                }

                num /= 10;
            }

            if(flag) ans.push_back(i);

        }

        return ans;


    }
};