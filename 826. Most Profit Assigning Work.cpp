class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        // return 1;
        vector<pair<int,int>> pr;
        for(int i=0;i<difficulty.size();i++){
            pr.emplace_back(difficulty[i],profit[i]);
        }
        sort(pr.begin(),pr.end());
        sort(worker.begin(), worker.end());
        int maxi=0,ans=0,i=0;
        for(auto& temp:worker){
            while((i<difficulty.size()) && (pr[i].first<=temp)){
                maxi=max(maxi,pr[i].second);
                i++;
            }
            ans+=maxi;
        }
        return ans;
    }
};
