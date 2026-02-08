class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j;
        int m=matrix.size();
        int n=matrix[0].size();
        if(n==m){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        return matrix;
        }else{
            vector<vector<int>>ans(n,vector<int>(m));
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    ans[j][i]=matrix[i][j];
                }
            }
            return ans;
        }
        return matrix;
    }
};