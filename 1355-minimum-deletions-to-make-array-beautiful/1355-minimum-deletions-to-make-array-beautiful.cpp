class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int res=0,i;
        for(i=0;i<nums.size()-1;i++){
           if(nums[i]==nums[i+1] && (i-res)%2==0)//check when after shifting even pos have equal adjacent
           res++;
        }
        if((nums.size()-res)%2!=0)// after delete odd element delete one more
        res++;
        return res;
    }
};