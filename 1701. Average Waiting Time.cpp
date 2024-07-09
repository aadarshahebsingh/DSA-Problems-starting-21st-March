class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int p=0,next=0,med=0;double ans=0;
        for(auto &x:customers){
            if(x[0]>next){
                next=x[0];
            }
            p=x[0];
            int temp=+next+x[1];
            next=temp;
            cout<<temp<<endl;
            ans+=temp-p;
            med++;
        }
        return ans/med;
    }
};
