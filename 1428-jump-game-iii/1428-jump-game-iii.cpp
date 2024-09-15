class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int> q;
        q.push(start);
        int n=arr.size();
        vector<bool> visited(n,false);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            visited[curr]=true;
            int left=curr+arr[curr];
            int right=curr-arr[curr];
            if(left>=0 && left<n){
                if(arr[curr]==0)return true;
                if(!visited[left])
                    q.push(left);
            }
            if(right>=0 && right<n){
                if(arr[right]==0)
                    return true;
                if(!visited[right])
                    q.push(right);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0 && visited[i])
                return true;
        }
        return false;
    }
};