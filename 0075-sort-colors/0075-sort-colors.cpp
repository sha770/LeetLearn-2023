class Solution {
public:
    
    void sortColors(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        //vector<int>ans(n);
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        for(auto x:mp){
            minh.push({x.first,x.second});
        }
        int k=0;
        while(minh.size()>0){
            int e=minh.top().first;
            int f=minh.top().second;
            minh.pop();
            for(int i=0;i<f;i++){
               nums[k++]=e; 
            }
        }
    }

};