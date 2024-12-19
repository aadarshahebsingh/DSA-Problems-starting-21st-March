class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxTillNow=INT_MIN,cnt=0;
        for(int i=0;i<arr.size();i++){
            maxTillNow=max(maxTillNow,arr[i]);
            if(maxTillNow==i)cnt++;
        }return cnt;
    }
};