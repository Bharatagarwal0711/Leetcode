class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        queue<int> q;
        for(int ele: students) q.push(ele);

        int j = 0;

        while(j<sandwiches.size() ){
            bool flag = false;

            int size = q.size();

            for(int i=0;i<size;i++){
                int x = q.front();
                q.pop();

                if(x == sandwiches[j]){
                    j++;
                    flag = true;
                }
                else{
                    q.push(x);
                }
            }

            if(flag == false) break;

        }

        return q.size();

    }
};