class Solution {
public:
    bool sumGame(string num) {
        int n=static_cast<int> (num.size());

        int balanceSum=0,balanceQ=0, mid=n/2;

        for(int i=0;i<n;i++){
            char c=num[i];
            if(c=='?'){
                balanceQ+=(i<mid?1:-1);
            }
            else{
                int digit=c-'0';
                balanceSum+=(i<mid?digit:-digit);
            }
        }
        return (balanceSum*2)!=(-balanceQ*9);
    }
};