class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(auto c:students)q.push(c);
        int i=0,cnt=0;
        while(1){
            if(cnt>q.size())return q.size();
            int temp=q.front();
            q.pop();
            if(temp==sandwiches[i]){
                i++;
                if(q.empty())return 0;
                cnt=0;
            }
            else{
                q.push(temp);
                cnt++;
            }
        }return 0;
    }
};
