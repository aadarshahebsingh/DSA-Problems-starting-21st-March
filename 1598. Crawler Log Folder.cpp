class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(auto& x:logs){
            if(x=="../"){
                if(ans>0)ans--;
            }
            if(x!="./" && x!="../")ans+=1;
        }
        return ans;
    }
};
