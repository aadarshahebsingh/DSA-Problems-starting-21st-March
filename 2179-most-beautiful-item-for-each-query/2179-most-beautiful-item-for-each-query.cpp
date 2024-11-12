#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());
        
        int qSize = queries.size();
        vector<pair<int, int>> queriesWithIndex;
        for (int i = 0; i < qSize; i++) {
            queriesWithIndex.push_back({queries[i], i});
        }
        sort(queriesWithIndex.begin(), queriesWithIndex.end());
        
        vector<int> answer(qSize, 0);
        int maxBeauty = 0, j = 0;
        
        for (const auto& [queryPrice, index] : queriesWithIndex) {
            while (j < items.size() && items[j][0] <= queryPrice) {
                maxBeauty = max(maxBeauty, items[j][1]);
                j++;
            }
            answer[index] = maxBeauty;
        }
        
        return answer;
    }
};
