class Solution {
public:
    unordered_map<string,vector<int>> mp;
    vector<int> diffWaysToCompute(string ex) {

        if(mp.find(ex)!=mp.end())return mp[ex];
        vector<int>temp;
        for(int i=0;i<ex.length();i++){

            if(ex[i]=='+' || ex[i]=='*' || ex[i]=='-'){
                char op=ex[i];
                vector<int> first=diffWaysToCompute(ex.substr(0,i));
                vector<int> second=diffWaysToCompute(ex.substr(i+1));

                for(auto x:first){
                    for(auto y:second){
                        if(op=='+') temp.push_back(x+y);
                        else if(op=='-')temp.push_back(x-y);
                        else if(op=='*')temp.push_back(x*y);
                    }
                }

            }
            
        }
        if(temp.size()==0){
            // mp[ex].push_back(stoi(ex));
            temp.push_back(stoi(ex));

        }
        mp[ex]=temp;
        return temp;
    }
};