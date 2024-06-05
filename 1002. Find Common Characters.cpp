class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> chara(26,INT_MAX);
        for(auto& x:words){
            vector<int> temp(26,0);
            for(auto& c:x){
                temp[c-'a']++;
            }
            for(int i=0;i<26;i++){
                chara[i]=min(chara[i],temp[i]);
            }
        }
        vector<string> result;
        for (int i = 0; i < 26; i++) {
            while (chara[i] > 0) {
                result.push_back(string(1, i + 'a')); 
                chara[i]--; 
            }
        }
        return result;
    }
};
