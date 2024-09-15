class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return 0;  // No jumps needed if there's only one element

        unordered_map<int, vector<int>> mp;
        // Store the indices of each element in the array
        for (int i = 0; i < n; i++)
            mp[arr[i]].push_back(i);

        vector<int> visited(n, 0);  // Using vector to store visited states
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        int ans = 0;

        while (!q.empty()) {
            int len = q.size();
            while (len--) {
                int curr = q.front();
                q.pop();
                
                if (curr == n - 1) return ans;  // Reached the last index
                
                // Check the left neighbor
                int left = curr - 1;
                if (left >= 0 && !visited[left]) {
                    q.push(left);
                    visited[left] = 1;
                }

                // Check the right neighbor
                int right = curr + 1;
                if (right < n && !visited[right]) {
                    q.push(right);
                    visited[right] = 1;
                }

                // Check other indices with the same value as arr[curr]
                int ele = arr[curr];
                for (int ind : mp[ele]) {
                    if (!visited[ind]) {
                        visited[ind] = 1;
                        q.push(ind);
                    }
                }
                // Clear the vector to avoid redundant checks for the same value
                mp[ele].clear();
            }
            ans++;
        }

        return ans;
    }
};
