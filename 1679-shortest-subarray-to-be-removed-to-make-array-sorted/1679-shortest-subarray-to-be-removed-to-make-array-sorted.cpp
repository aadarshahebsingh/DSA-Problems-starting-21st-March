class Solution {
public:
    static int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        
        // Find longest non-decreasing prefix
        int left= 0;
        for (; left+1 < n && arr[left] <= arr[left+1]; left++); 
        
        // array is already non-decreasing
        if (left== n-1) return 0;

        // Monotonic stack for  non-descreasing suffix
        vector<int> stack={n-1};
        for (int r= n-2; r>left; r--) {
            if (arr[r] <= arr[r+1])
                stack.push_back(r);
            else break;
        }

        // to remove as the smaller of removing all from either end
        int remove= min(n-left-1, stack.back());

        // Try to merge left and right parts
        for (int i = 0; i <=left; i++) {
            // find j=stack.back() s.t. arr[j]>= arr[i] 
            while (!stack.empty() && arr[i]>arr[stack.back()])
                stack.pop_back();
    
            if (!stack.empty()) 
                remove = min(remove, stack.back()-i-1);
        }

        return remove;
    }
};

