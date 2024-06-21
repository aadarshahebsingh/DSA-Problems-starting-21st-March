class Solution {
public:
    int maxSatisfied(vector<int>& customer, vector<int>& grumpy, int minutes) {
        int ans=0,temp=INT_MIN,n=customer.size();
        for(int i=0;i<n;i++){
            if(grumpy[i]==0)ans+=customer[i];
        }
        cout<<ans<<endl;
        int num=0,maxi=0;
        for(int i=0;i<minutes;i++)num+=customer[i]*grumpy[i];
        maxi=num;
        for(int i=minutes;i<n;i++){
            num+=(customer[i]*grumpy[i])-(customer[i-minutes]*grumpy[i-minutes]);
            maxi=max(maxi,num);
        }
        return ans+maxi;
    }
};
