class Solution {
    public boolean stoneGameIX(int[] stones) {
        int cnt0=0,cnt1=0,cnt2=0;
        for(int x:stones){
            if(x%3==0)cnt0++;
            else if(x%3==1)cnt1++;
            else cnt2++;
        }

        if(cnt0%2==0){
            System.out.println("hello");
            return cnt1>0 && cnt2>0;
        }
        
        return Math.abs(cnt1-cnt2)>2;
    }
}