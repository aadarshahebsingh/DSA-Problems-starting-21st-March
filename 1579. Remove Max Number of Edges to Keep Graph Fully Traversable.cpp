class DSU {
    public: 
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n, 0);
        rank.resize(n, 0);

        for(int i=0; i<n; i++) parent[i] = i;
    }

    int find(int x) {
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    bool Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);

        if(x_parent == y_parent) return false;
        
        if(rank[x_parent] > rank[y_parent]) {
            parent[y_parent] = x_parent;
        }
        else if(rank[y_parent] > rank[x_parent]) {
            parent[x_parent] = y_parent;
        }
        else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }

        return true;
    }
};

class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b) {
        return a[0] > b[0];
    }

    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        
        sort(edges.begin(), edges.end(), comp);

        DSU dsu_alice(n+1);
        DSU dsu_bob(n+1);

        int removed = 0;
        int alice_edges = 0;
        int bob_edges = 0;

        for(auto edge : edges) {
            
            if(edge[0] == 3) {
                if(dsu_alice.Union(edge[1], edge[2])) {
                    dsu_bob.Union(edge[1], edge[2]);
                    alice_edges++;
                    bob_edges++;
                }
                else removed++;
            }
            else if(edge[0] == 2) {
                if(dsu_bob.Union(edge[1], edge[2])) bob_edges++;
                else removed++;
            }
            else {
                if(dsu_alice.Union(edge[1], edge[2])) alice_edges++;
                else removed++;
            }
        }

        if(bob_edges == n-1 && alice_edges == n-1) return removed;
        else return -1;

    }
};
