class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>answer;
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words.size(); j++){
                if(i!=j){
                    if(words[j].find(words[i])>=0 && words[j].find(words[i])<words[j].size()){
                        answer.insert(words[i]);
                    }
                }
            }
        }
        return vector<string>(answer.begin(),answer.end());
    }
};