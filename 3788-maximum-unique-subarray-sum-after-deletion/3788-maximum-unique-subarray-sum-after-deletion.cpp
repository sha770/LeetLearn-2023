class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        if(maxi<0) return maxi;
        int ans=0;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                s.insert(nums[i]);
            }
        }
        for(int i :s){
            ans+=i;
        } 
        return ans;
    }
};