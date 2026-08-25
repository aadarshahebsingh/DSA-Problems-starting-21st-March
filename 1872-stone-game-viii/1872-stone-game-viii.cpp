// choose an integer and remove the leftmost x stones from the row
// add the sum of the removed stones value 
// new stone whose value is equal to the sum on the leftside of the row

// maximize the score difference
// bob is to minimize the score difference
class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        vector<int> prefixSum(stones.size());
        prefixSum[0]=stones[0];
        for(int i=1;i<stones.size();i++){
            prefixSum[i]=prefixSum[i-1]+stones[i];
        }
       

        // for(auto &x:prefixSum)cout<<x<<" ";
        cout<<endl;
        int maxi=prefixSum[prefixSum.size()-1];
        for(int i=stones.size()-2;i>0;i--){
            maxi=max(maxi,prefixSum[i]-maxi);
            cout<<maxi<<" ";
        }
        return maxi;
    }
};