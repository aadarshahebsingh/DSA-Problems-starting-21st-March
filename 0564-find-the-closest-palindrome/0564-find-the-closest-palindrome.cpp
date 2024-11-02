class Solution {
private: 
    long solve(long num,bool even){
        long shalf = num;

        if(!even)num/=10;

        while(num > 0){
            int digit = num%10;

            shalf = (shalf*10)+digit;
            num/=10;
        }
       
   return shalf;
    }
public:
    string nearestPalindromic(string n) {
        int size = n.length();
        int len = (size%2 == 0 )? size/2: (size/2) +1;

        long num = stol(n.substr(0,len));
     

        vector<long> bucket;

        //for boundry cases like 99, 101...etc
        bucket.push_back((long)pow(10,size-1)-1);
        bucket.push_back((long)pow(10,size)+1);

        //for nearest cases
        bucket.push_back(solve(num, size%2 == 0));
        bucket.push_back(solve(num+1, size%2 == 0));
        bucket.push_back(solve(num-1, size%2 == 0));

        long result = 0;
        long mindist = INT_MAX;
        long fullnum = stol(n);

        for(auto &it: bucket){
            long dist = abs(it-fullnum);
            if(dist == 0) continue;

            if(dist == mindist)result = min(result,it);
            if(dist < mindist){
                result = it;
                mindist = min(mindist,dist);
            }

        }
       
  return to_string(result);
    }
};