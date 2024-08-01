class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
            // cout<<details[i][11]<<endl;
            if(details[i][11]>='6' and details[i][11]<='9'){
                if(details[i][11]=='6' && details[i][12]=='0')continue;
                else ans++;
            }
        }
        return ans;
    }
};
