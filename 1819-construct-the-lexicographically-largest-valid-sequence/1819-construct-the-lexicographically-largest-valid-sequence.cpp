class Solution {
public:
    bool helper(vector<int>& res,vector<bool>&used,int pos,int n){
        if(pos==2*n-1)return true;
        if(res[pos]!=0)
            return helper(res,used,pos+1,n);
        
        for(int i=n;i>=1;i--){
            if(used[i]==true)continue;

            used[i]=true;
            res[pos]=i;
            if(i==1 && helper(res,used,pos+1,n))
                return true;
            if(i>1 && (pos+i)<(2*n-1) && res[pos+i]==0){
                res[pos+i]=i;
                if(helper(res,used,pos+1,n))
                    return true;
                res[pos+i]=0;
            }
            used[i]=false;
            res[pos]=0;
        }
        return false;
    }
    vector<int> constructDistancedSequence(int n) {
        vector<int> res(2*n-1,0);
        vector<bool> used(n+1,false);

        helper(res,used,0,n);
        return res;
    }
};