class Solution {
public:
    const int mod=1e9+7;
    int numWays(int steps, int arrLen) {
        arrLen=min(steps/2+1,arrLen);//to avoid memory LE nothing is depending upon arrlen
        vector<vector<int>>dp(arrLen,vector<int>(steps+1,-1));
        return totalWays(steps,0,dp);
    }
    int totalWays(int steps,int pos,vector<vector<int>>&dp){
        if(steps<pos)return 0;
        if(steps==0) return 1;
        if(dp[pos][steps]!=-1) return dp[pos][steps];
        int ways=0;
        if(pos<dp.size()-1) ways=(ways+totalWays(steps-1,pos+1,dp))%mod;
        if(pos>0) ways=(ways+totalWays(steps-1,pos-1,dp))%mod;
        ways=(ways+totalWays(steps-1,pos,dp))%mod;
        dp[pos][steps]=ways;
        return ways;
    }
};