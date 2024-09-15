class Solution {
public:
    bool helper(vector<int>& arr, vector<bool>& visited, int i, int n) {
        if (i < 0 || i >= n || visited[i]) return false;
        if (arr[i] == 0) return true;

        visited[i] = true;

        bool left = helper(arr, visited, i - arr[i], n);
        bool right = helper(arr, visited, i + arr[i], n);

        return left || right;
    }

    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size(), false); 
        return helper(arr, visited, start, arr.size());
    }
};
