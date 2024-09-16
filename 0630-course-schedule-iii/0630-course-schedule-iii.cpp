class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        if(courses.size()<=0)return 0;
        // sort kr rhe  h pr doosra waaala k basis pr
        sort(courses.begin(),courses.end(),[](const vector<int>& a,vector<int>& b){
            return a[1]<b[1];
        });
        priority_queue<int> q;
        int totalSum=0;
        for(auto ele:courses){
            totalSum+=ele[0];
            q.push(ele[0]);
            if(totalSum>ele[1]){
                totalSum-=q.top();
                q.pop();
            }
        }
        return q.size();
    }
};