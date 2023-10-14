class Solution {
public:
int memoization(vector<int>&cost,vector<int>&time,int idx,int walls,vector<vector<int>>&dp) {
    if(walls<=0) return 0;
    if(idx<0) return 1e9;
    if(dp[idx][walls]!=-1) return dp[idx][walls];
    int notpick=0+memoization(cost,time,idx-1,walls,dp);
    int pick=cost[idx]+memoization(cost,time,idx-1,walls-time[idx]-1,dp);

    return dp[idx][walls]=min(notpick,pick);
}
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n=cost.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return memoization(cost,time,n-1,n,dp);
    }
};