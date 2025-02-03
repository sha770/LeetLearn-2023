class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        int i=0,j=1;
        int maxi=1;
        int maxd=1;
        while(j<n){
            if(nums[j-1]>nums[j]){
                 maxi=max(maxi,j-i+1);
                 j++;
            }
            else{
                i=j;
                j++;
            }
        }
        i=0,j=1;
        while(j<n){
            if(nums[j-1]<nums[j]){
                 maxd=max(maxd,j-i+1);
                 j++;
            }
            else{
                i=j;
                j++;
            }
        }
        return max(maxi,maxd);
    }
};