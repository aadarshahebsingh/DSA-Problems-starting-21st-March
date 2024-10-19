class Solution {
public:
    char findKthBit(int n, int k) {
        string str="0";
        for(int i=1;i<n;i++){
            string temp="";
            for(char c:str){
                temp+=(c=='0')?'1':'0';
            }
            reverse(temp.begin(),temp.end());
            str+="1";
            str+=temp;
        }
        return str[k-1];
    }
};