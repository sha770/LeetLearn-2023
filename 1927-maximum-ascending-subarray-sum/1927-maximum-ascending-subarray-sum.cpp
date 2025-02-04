class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        int sum=nums[0];
        int maxi=0;
        while(j<n){
            if(nums[j-1]<nums[j]){
                sum+=nums[j];
                j++;
            }
            else{
                maxi=max(maxi,sum);
    
                i=j;
                sum=nums[i];
                j++;
            }
        }
        return max(maxi,sum);
    }
};