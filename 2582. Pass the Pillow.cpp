class Solution {
public:
    int passThePillow(int n, int time) {
        
        if(n==time)return n-1;
        if(n>time)return time+1;
        int ans=time/(n-1);

        return ans%2==0?(time % (n - 1) + 1) :(n-time%(n-1));
        // return 0;

    }
};
