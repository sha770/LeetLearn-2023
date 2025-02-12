class Solution {
public:
    int sum_of_digit(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            n=n/10;
            sum+=rem;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            int sumd=sum_of_digit(nums[i]);
            mp[sumd].push_back(i);
        }
        int maxi=-1;
        for(auto it:mp){
            int sz=it.second.size();
            priority_queue<int>pq;
            if(sz>1){
                for(int i=0;i<sz;i++){
                    pq.push(nums[it.second[i]]);
                }
            }
            if(pq.size()>0){
            int a=pq.top();
            pq.pop();
            int b=pq.top(); pq.pop();
            maxi=max(maxi,a+b);
            }
            
        }
        return maxi;
        
    }
};