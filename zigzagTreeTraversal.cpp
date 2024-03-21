class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> arr;
    	queue<Node*> q;
    	q.push(root);
    	
    	int x=0;
    	while(!q.empty()){
    	    x++;
    	    int n=q.size();
    	    vector<int> nums;
    	    for(int i=0;i<n;i++){
    	        Node* temp=q.front();
    	        q.pop();
    	        
    	        nums.push_back(temp->data);
    	        if(temp->left)q.push(temp->left);
    	        if(temp->right)q.push(temp->right);
    	    }
    	    if(x%2==0)reverse(nums.begin(),nums.end());
    	    for(auto p:nums){
    	        arr.push_back(p);
    	    }
    	    
    	}
    	return arr;
    }
};
