class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<char> q;
        for(char ch: senate) q.push(ch);
        int count = 0;
        char ch = ' ';


        while(q.size() > 1){
            bool flag = false;
            int n = q.size();

            for(int i=1;i<=n;i++){

                if(count == 0 || ch == q.front()){
                    ch = q.front();
                    q.pop();
                    count++;
                    q.push(ch);
                }
                else{
                    q.pop();
                    count--;
                    flag = true;
                }

            }
            if(flag == false) break;


        }

        if(q.front() == 'R') return "Radiant";
        return "Dire";
    }
};