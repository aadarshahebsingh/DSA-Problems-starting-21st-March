class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(),pizzas.end(),greater<int>());
        long long ans=0,total=(pizzas.size()/4),odd=(total+1)/2;
        
        for(int i=0,day=1;day<=total;i++,day++){
            if(day>odd)i++;
            ans+=(long long)pizzas[i];
        }
        return ans;
    }
};