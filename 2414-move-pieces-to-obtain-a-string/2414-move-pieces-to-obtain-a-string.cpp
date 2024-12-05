class Solution {
public:
    bool canChange(string start, string target) {
        // return 1;
        if(start==target)return 1;
        int left=0,right=0;
        for(int i=0;i<start.length();i++){
            char curr=start[i];
            char goal=target[i];
            if(curr=='R'){
                if(left>0)return 0;
                right++;
            }
            if(goal=='L'){
                if(right>0)return 0;
                left++;
            }
            if(goal=='R'){
                if(right==0)return false;
                right--;
            }
            if(curr=='L'){
                if(left==0)return 0;
                left--;
            }
        }
        return left==0 && right==0;
    }
};