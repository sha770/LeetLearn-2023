class Solution {
public:
 long long sumLesserThan(vector<int>&nums,int target){
     int i=0,j=nums.size()-1;
        long long ans=0;
        while(i<j){
            if(nums[i]+nums[j]<=target){
                ans+=j-i;
                i++;
            }
            else if(nums[i]+nums[j]>target) j--;
        }
        return ans;
    
 }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        long long ans=0;
        long long sum1_upper=sumLesserThan(nums,upper);
        long long sum2_lower=sumLesserThan(nums,lower-1);
        
        ans=sum1_upper-sum2_lower;
        return ans;
    }
};