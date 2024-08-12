class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>> qp;
        int k;
    KthLargest(int K, vector<int>& nums) {
        k=K;
        for(int &x:nums){
            qp.push(x);
            if(qp.size()>k)qp.pop();
        }
    }
    
    int add(int val) {
        qp.push(val);
        if(qp.size()>k)qp.pop();
        return qp.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
