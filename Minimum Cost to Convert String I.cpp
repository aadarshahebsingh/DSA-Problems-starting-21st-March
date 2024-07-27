typedef pair<long long, int> PLI;
typedef long long LL;
const int N = 26;
class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<int>>graph(N, vector<int>(N, INT_MAX));
        int m = original.size();
        for(int i = 0; i < m; i ++)
        {
            char o = original[i], c = changed[i];
            int co = cost[i];
            // 重边
            if(graph[o - 'a'][c - 'a'] != INT_MAX && (graph[o - 'a'][c - 'a'] <= co))continue;
            graph[o - 'a'][c - 'a'] = co;
        }
        auto dijkstra = [&](int start)
        {
            vector<LL>dist(N, LLONG_MAX);
            dist[start] = 0;
            vector<bool>processed(N, false);
            priority_queue<PLI, vector<PLI>, greater<PLI>> pq;
            pq.push({0, start});
            while(!pq.empty())
            {
                auto t = pq.top();
                pq.pop();
                int u = t.second;
                if (processed[u]) continue;
                processed[u] = true;
                for(int v = 0; v < N; v++)
                {
                    if(graph[u][v] != INT_MAX && dist[v] > dist[u] + graph[u][v])
                    {
                        dist[v] = dist[u] + graph[u][v];
                        pq.push({dist[v], v});
                    }
                }
            }
            return dist;
        };
        vector<vector<LL>>mindist(N);
        for(int i = 0; i < N; i ++)
            mindist[i] = dijkstra(i);
        long long ans = 0;
        for(int i = 0; i < source.size(); i ++)
        {
            if(source[i] != target[i])
            {
                LL tc = mindist[source[i] - 'a'][target[i] - 'a'];
                if (tc == LLONG_MAX) return -1; 
                ans += tc;
            }
        }
        return ans;
    }
};
