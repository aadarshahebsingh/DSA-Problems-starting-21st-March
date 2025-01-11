class Solution {
public:
    //here we can first count the number of times characters in the string.
    //then if the number of characters that occur 1 times is > k then it is not possible to construct the string
    //we will consider the characters in pairs
    bool canConstruct(string s, int k) {
        if(s.length() < k){
            return false;
        }
        unordered_map<char, int> mp;
        for( int i = 0; i < s.length(); i++ ){
            mp[s[i]]++;
        }
        int single = 0;
        for( auto val: mp ){
            single += (val.second % 2);
        }
        return single <= k ? true : false;
    }
};