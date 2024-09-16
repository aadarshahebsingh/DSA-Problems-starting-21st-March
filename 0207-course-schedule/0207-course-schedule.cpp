class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& arr) {
        vector<int> adj[numCourses];
        for(int i=0;i<arr.size();i++){
            adj[arr[i][0]].push_back(arr[i][1]);
        }
        vector<int> inDegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                inDegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(inDegree[i]==0)
                q.push(i);
        }
        vector<int> topo;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);

            for(auto it:adj[node]){
                inDegree[it]--;
                if(inDegree[it]==0)q.push(it);
            }
        }
        if(topo.size()==numCourses)return true;
        return false;
    }
    
};