class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        priority_queue<int> maxHeap;

        for (int h : happiness) {
            maxHeap.push(h);
        }
        int dec=1;
        int temp=maxHeap.top();;
        while (k--) {
            // temp = 
            maxHeap.pop();
            if(temp>=0){
                ans += temp;
            }
            temp=maxHeap.top()-dec;
            dec++;
        }

        return ans;
    }
};
