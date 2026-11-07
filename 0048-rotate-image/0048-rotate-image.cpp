class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            int x=0,y=n-1;
            while(x<y){
                swap(matrix[i][x],matrix[i][y]);
                x++;
                y--;
            }
        }
    }
};