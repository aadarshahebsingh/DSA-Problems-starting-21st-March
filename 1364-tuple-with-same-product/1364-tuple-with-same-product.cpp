class Solution {
public:
    int nC2(int n){
        return (n*(n-1))/2;
    }
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size(),cnt=0;
        unordered_map<int,int> freq;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                freq[nums[i]*nums[j]]++;
            }
        }

        for(auto x:freq){
            if(x.second>1){
                cnt+=8*nC2(x.second);
            }
        }
        return cnt;
    }
};