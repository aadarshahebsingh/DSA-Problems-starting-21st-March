class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        const int MOD = 1e9 + 7;
        int x=0,y=1;
        vector<int> arr;
        arr.push_back(x);
        arr.push_back(y);
        // cout<<x<<" "<<y<<" ";
        for(int i=1;i<n;i++){
            int temp=(x+y)%MOD;
            arr.push_back(temp);
            x=y;
            y=temp;
        }
        return arr;
    }
};
