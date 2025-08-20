class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>ans;
        int i=0,j=0;
        bool f=true; // for directions true-> up-right, false->down-left 
        while(ans.size()<m*n){
            ans.push_back(mat[i][j]);
            if(f){
                if(j==n-1){
                    i++;
                    f=false;
                } 
                else if(i==0){
                    j++;
                    f=false;
                }else{
                    i--;
                    j++;
                }
            }
            else{
                 if(i==m-1){
                    j++;
                    f=true;
                 }
                 else if(j==0){
                    i++;
                    f=true;
                 }
                 else{
                    i++;
                    j--;
                 }
            }
        }
        return ans;
    }
};