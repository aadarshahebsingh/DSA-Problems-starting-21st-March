class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        const int  r = rowSum.size(), c = colSum.size();
        vector<vector<int>> m(r, vector<int>(c));
        vector<int> cols(c);
        for (int i = 0; i < c; ++i) {
            cols[i] = i;
        }
        for (int i = 0; i < r && cols.size(); ++i) {
            if (rowSum[i] == 0) continue;
            for (int k = 0; k < cols.size();) {
                const int j = cols[k];;
                m[i][j] = min(rowSum[i], colSum[j]);
                rowSum[i] -= m[i][j];
                colSum[j] -= m[i][j];
                if (colSum[j] == 0) {
                    swap(cols.back(), cols[k]);
                    cols.pop_back();
                }
                if (rowSum[i] == 0) break;
            }
        }
        return m;
        
    }
};
