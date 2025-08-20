class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int count = 0, m= matrix.size(), n=matrix[0].size();
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

        return count;
    }
};