class Solution {
public:
    int maxprod(int n,vector<int>&dp){
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        int ans=n;
        for(int i=1;i<=n/2;i++){
            ans=max(ans,i*maxprod(n-i,dp));
        }
        return dp[n]=ans;
    }
    int integerBreak(int n) {
        if(n<4) return n-1;
        vector<int>dp(n+1,-1);
        return maxprod(n,dp);
    }
};