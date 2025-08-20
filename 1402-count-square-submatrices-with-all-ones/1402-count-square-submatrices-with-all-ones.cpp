class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
      /*  int count = 0, m= matrix.size(), n=matrix[0].size();
         // Recurssion -> check every col as the bootom right of square and check for 1s at one above , one left and one digonal left to frame a square.
        // Start from bottom-right and build up square sizes
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 1 && i > 0 && j > 0) {
                    matrix[i][j] = min({matrix[i-1][j], matrix[i][j-1],  matrix[i-1][j-1]}) + 1;
                }
                count += matrix[i][j];
            }
        }

        return count;*/


        //DP

        int n=matrix.size();
        int m=matrix[0].size();
        int res=0;
        // first count 1x1 square in first col and first row to add on

        for (int i=0;i<n;i++) res+=matrix[i][0]; //col
        for (int j=1;j<m;j++) res+=matrix[0][j];

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==1){
                    matrix[i][j]=1+min(matrix[i-1][j-1],min(matrix[i][j-1],matrix[i-1][j]));
                    res+=matrix[i][j];
                }
            }
        }
        return res;
    }
};