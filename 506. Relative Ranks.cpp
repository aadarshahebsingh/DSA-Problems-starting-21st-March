class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>> h;
        for(int i=0;i<n;i++)h.push({score[i],i});
        vector<string> ans(n);
        int x=1;
        while(!h.empty()){
            int temp=h.top().second;
            h.pop();
            if(x==1)ans[temp]="Gold Medal";
            else if(x==2)ans[temp]="Silver Medal";
            else if(x==3)ans[temp]="Bronze Medal";
            else ans[temp]=to_string(x);
            x++;
        }
        return ans;
        
    }
};
