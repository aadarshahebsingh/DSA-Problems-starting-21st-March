class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> arr(26,0);
        for(auto &x:s){
            arr[x-'a']++;
        }
        vector<int> left(26,0);
        unordered_set<int> set;
        for(int i=0;i<s.length();i++){
            int temp=s[i]-'a';
            arr[temp]--;
            for(int j=0;j<26;j++){
                if(left[j]>0 && arr[j]>0)set.insert(26*temp+j);

            }
            left[temp]++;
        }
        return set.size();
    }
};