class Solution {
public:
    int helper(int start,string &s,unordered_set<string>& unique){
        if(start==s.length())return 0;

        int maxi=0;
        for(int end=start+1;end<=s.length();end++){
            string sub=s.substr(start,end-start);
            if(unique.find(sub)==unique.end()){
                unique.insert(sub);
                maxi=max(maxi,1+helper(end,s,unique));
                unique.erase(sub);
            }
        }
        return maxi;
    }
    int maxUniqueSplit(string s) {
        unordered_set<string> unique;
        return helper(0,s,unique);
    }
};