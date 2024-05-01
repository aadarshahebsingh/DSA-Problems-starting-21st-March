class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())return -1;
        int idx=0;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[idx]){
                int x=i;
                while(x<haystack.size()&& idx<needle.size() && (haystack[x]==needle[idx])){
                    x++;
                    idx++;
                }
                if(idx==needle.size())return i;
                else{
                    idx=0;
                }
            }
        }
        return -1;
    }
};
