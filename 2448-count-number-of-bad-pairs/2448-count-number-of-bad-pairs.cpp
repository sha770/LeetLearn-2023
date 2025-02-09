class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long,long long>mp;
        long long  ans=0;
        long long n=nums.size();
        for(int i=0;i<nums.size();i++){
           if(mp.find(nums[i]-i)!=mp.end()){
            ans+=mp[nums[i]-i];
        }
        mp[nums[i]-i]++;
        }
        long long total=((n*(n-1))/2);
        return total-ans;
    }
};