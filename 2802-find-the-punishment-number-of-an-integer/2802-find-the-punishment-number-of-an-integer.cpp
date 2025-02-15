class Solution {
public:
    bool isValid(string& str,int pos,int  sum,int& val){
        if(pos>=str.size())return sum==val;

        for(int i=0;i+pos<str.size();i++){
            int currVal=stoi(str.substr(pos,i+1));
            if(isValid(str,i+pos+1,sum+currVal,val))
                return true;
        }
        return  false;
    }
    int punishmentNumber(int n) {
        int cnt=1;
        for(int  i=2;i<=n;i++){
            string temp=to_string(i*i);
            if(isValid(temp,0,0,i))
                cnt+=i*i;
        }
        return cnt;
    }
};