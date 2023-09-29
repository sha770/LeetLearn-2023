class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inf=0;
        int df=0;
      for(int i=0;i<nums.size()-1;i++){
          if(nums[i]>nums[i+1]) inf=1;
          if(nums[i]<nums[i+1]) df=1;
          if(inf==1 && df==1) return false;
      }
        return true;
    }
};