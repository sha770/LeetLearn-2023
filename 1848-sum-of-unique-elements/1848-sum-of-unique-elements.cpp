class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> numMap;
        int sum = 0;
        for (int num : nums) {
            if (++numMap[num] == 1) {         
                sum += num;
            } else if (numMap[num] == 2) {    
                sum -= num;                   
            }       
        }
        return sum;
    
    }
};