#include<iostream>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {

        int x = n,num;
        unordered_set<int> seen;

        while(x!=1){
            num = 0;

            while(x){
                int last = x % 10;
                num += last * last;
                x /= 10;
            }

            if(seen.find(num) != seen.end()) return false;
            seen.insert(num);

            x = num;
            
        }

        return true;
    }
};