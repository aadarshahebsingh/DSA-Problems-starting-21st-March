class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(tickets[i]<tickets[k] ){
                ans+=tickets[i];
            }
            else if(tickets[i]==tickets[k]){
                if(i<=k)ans+=tickets[i];
                else ans+=tickets[i]-1;
            }
            else{
                if(i<=k)ans+=tickets[k];
                else ans+=tickets[k]-1;
            }
            
            // else ans+=tickets[k];
        }
        return ans;
    }
};
