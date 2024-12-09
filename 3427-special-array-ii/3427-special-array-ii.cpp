class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> parityChange(n, 0);
        
        for (int i = 1; i < n; ++i) {
            parityChange[i] = parityChange[i - 1] + ((nums[i] % 2) != (nums[i - 1] % 2) ? 1 : 0);
        }

        vector<bool> answer;
        for (const auto& query : queries) {
            int from = query[0];
            int to = query[1];
            if (from == to) {
                answer.push_back(true);
            } else {
                answer.push_back(parityChange[to] - parityChange[from] == (to - from));
            }
        }
        return answer;
    }
};