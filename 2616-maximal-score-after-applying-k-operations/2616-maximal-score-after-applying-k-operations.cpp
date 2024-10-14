class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++)pq.push(nums[i]);
        long long ans=0;
        while(k--){
            long long temp=pq.top();
            pq.pop();
            ans+=temp;
            temp=ceil(static_cast<double>(temp) / 3);
            // if(temp>pq.top())pq.push(temp);
            pq.push(temp);
        }
        return ans;
    }
};