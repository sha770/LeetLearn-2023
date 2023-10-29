class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s;
        for(auto x:nums){
            s.insert(x);
        }
        int n=1;
        int missing;
        for(int i=0;i<nums.size();i++){
            if(s.find(n)!=s.end()){
                n=n+1;
                missing=n;
            }
            else
               missing=n; 
        }
        return missing;
    }
};