class Solution {
public:
    double average(vector<int>& salary) {
        int mini=*min_element(salary.begin(),salary.end());
        int maxi=*max_element(salary.begin(),salary.end());
        double sum=0.0;
        for(int i=0;i<salary.size();i++){
            if(salary[i]!=mini&& salary[i]!=maxi){
             sum+=salary[i];
            }

        }
        return sum/(salary.size()-2);
    }
};