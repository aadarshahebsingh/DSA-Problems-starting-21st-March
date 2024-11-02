class Solution {
public:
    bool isCircularSentence(string str) {
        // return false;
        vector<string> words;
        istringstream stream(str);
        string word;
        while(stream>>word){
            words.push_back(word);
        }
        char start=words[0][0];
        // cout<<start<<endl;
        // return false;
        for(int i=0;i<words.size()-1;i++){
            int len1=words[i].length();
            if(words[i][len1-1]!=words[i+1][0]){
                cout<<"Hello"<<endl;
                return false;
            }
        }
        int n=words.size(),len2=words[n-1].size();
        return(words[0][0]==words[n-1][len2-1]);
    }
};