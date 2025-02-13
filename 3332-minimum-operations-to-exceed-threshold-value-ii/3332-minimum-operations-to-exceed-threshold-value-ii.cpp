class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long int res=0;
        priority_queue<long long int,vector<long long int>,greater<long long int>>pq;
        for(int i : nums){
            pq.push(i);
        }
        while(pq.top()<k){
            res++;
            long long int s1=pq.top(); pq.pop();
           long long int s2=pq.top(); pq.pop();
            long long int op=s1*2+s2;
            pq.push(op);
        }
        return res;
    }
};