class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1,res=0;
        int temp=n;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            prod*=digit;
            n/=10;

        }
        res=sum+prod;
        if(temp%res==0){
            return true;
        }
        return false;
    }
};