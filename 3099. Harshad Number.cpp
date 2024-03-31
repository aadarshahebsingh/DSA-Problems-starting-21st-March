class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp=x,sum=0;
        while(temp){
            int rem=temp%10;
            sum+=rem;
            temp=temp/10;
        }
        if(x%sum)return -1;
        return sum;
    }
};
