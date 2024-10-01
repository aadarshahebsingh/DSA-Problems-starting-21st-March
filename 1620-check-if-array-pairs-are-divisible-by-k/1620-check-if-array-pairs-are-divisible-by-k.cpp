class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int ans=0,cnt=0,n=arr.size();
        // map<int,int> mp;
        vector<int> freq(k,0);
        set<pair<int,int>> st;
        for(int i=0;i<arr.size();i++){
            
            // for(int j=i+1;j<arr.size();j++){
            //     int sum=arr[i]+arr[j];
            //     if(sum%k==0){
            //         cout<<i<<" "<<j<<endl;
            //         st.insert({arr[i],arr[j]});
            //         ans++;
            //     }
            //     if(st.size()==n/2){
            //         cnt++;
            //         break;
            //     }
            // }
            int rem=arr[i];
            rem=((rem%k)+k)%k;
            freq[rem]++;
            // cout<<ans<<endl;
        }
        if(freq[0] % 2!=0)return false;
        for(int i=1;i<=k/2;i++){
            if(freq[i]!=freq[k-i])return false;
        }
        // if(cnt)return true;
        return true;
    }
};