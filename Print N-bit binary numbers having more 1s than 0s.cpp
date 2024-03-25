class Solution{
public:	
    void generateBinaryNumbers(int n,int ones,int zeroes,string current,vector<string>& arr){
        if(n==0){
            if(ones>=zeroes)arr.push_back(current);
            return;
        }
        if(ones>=zeroes)generateBinaryNumbers(n-1,ones+1,zeroes,current+"1",arr);
        generateBinaryNumbers(n-1,ones,zeroes+1,current+"0",arr);
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string> result;
        generateBinaryNumbers(n, 0, 0, "", result);
    
        sort(result.begin(), result.end(), greater<string>());
    
        return result;
	}
};
