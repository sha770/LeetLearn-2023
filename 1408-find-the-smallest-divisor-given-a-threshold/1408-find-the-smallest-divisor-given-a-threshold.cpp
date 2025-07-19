class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1,j=*max_element(nums.begin(),nums.end());
        int ans=j;
        while(i<=j){
            int mid=i+(j-i)/2;
            int sum=0;
            for(int num:nums){
              //ceil div 
              sum+=(num+mid-1)/mid;
            }
            if(sum<=threshold){
                ans =mid;
                j=mid-1;
            }
            else i=mid+1;
            
           
        }
        return ans;
    }
};