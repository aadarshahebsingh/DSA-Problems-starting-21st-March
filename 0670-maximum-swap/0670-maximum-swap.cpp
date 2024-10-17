class Solution {
public:
    int maximumSwap(int num) {
        int maxi=-1,swap1=-1,swap2=-1;
        string  str=to_string(num);
        int n=str.length();
        for(int i=n-1;i>=0;i--){
            if(maxi==-1 || str[i]>str[maxi])maxi=i;
            else if(str[i]<str[maxi]){
                swap1=i;
                swap2=maxi;
            }
        }
        if(swap1!=-1 && swap2!=-1)swap(str[swap1],str[swap2]);
        return stoi(str);
    }
};