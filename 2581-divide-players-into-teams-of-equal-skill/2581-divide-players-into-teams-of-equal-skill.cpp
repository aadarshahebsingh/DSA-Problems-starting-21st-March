class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        if(skill.size()==1)return -1;
        long long int n=skill.size(),ans=0,target=skill[0]+skill[n-1];
        long long int i=0,j=n-1;
        while(i<j){
            long long curr=skill[i]+skill[j];
            if(curr!=target)return -1;
            ans+=skill[i]*skill[j];
            i++;j--;
        }
        return ans;
    }
};