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
       /* unordered_map<int,vector<int>>mp;
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
        return maxi;*/
        //better space =>
         unordered_map<int, int> freq;
        int res = -1;

        for (int num : nums) {
            int key = sum_of_digit(num);
            if (freq.find(key) != freq.end()) {
                res = max(res, freq[key] + num);
                freq[key] = max(freq[key], num);
            } else {
                freq[key] = num;
            }
        }

        return res;
        
    }
};