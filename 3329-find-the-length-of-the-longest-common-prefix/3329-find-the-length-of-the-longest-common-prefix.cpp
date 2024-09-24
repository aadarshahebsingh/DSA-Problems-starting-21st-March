class Solution {
public:

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string,int> prefix;
        for(auto x:arr1){
            string str=to_string(x);
            string p="";
            for(char ch:str){
                p+=ch;
                prefix[p]++;
            }
        }
        int maxi=0;
        for(auto x:arr2){
            string str=to_string(x);
            string p="";
            for(char ch:str){
                p+=ch;
                if(prefix.find(p)!=prefix.end()){
                    maxi=max(maxi,static_cast<int>(p.length()));
                }
            }
        }
        return maxi;





    }
};