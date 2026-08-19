#include <iostream>
#include<cmath>
using namespace std;

class Solution {
public:

    bool isPerfectSquare(int x){
        int n = sqrt(x);
        if(n*n == x) return true;
        return false;
    }

    bool judgeSquareSum(int c) {
        int x = 0;
        int y = c;
        while(x<=y){
            if(isPerfectSquare(x) && isPerfectSquare(y)) return true;
            else if(!isPerfectSquare(y)){
                y = (int)sqrt(y)*(int)sqrt(y);
                x = c-y;
            }
            else{
                x = ((int)sqrt(x)+1)*((int)sqrt(x)+1);
                y = c-x;
            }
        }
        return false;
    }
};