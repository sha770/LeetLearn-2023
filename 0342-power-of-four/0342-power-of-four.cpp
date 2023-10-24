class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n<=0) return false;
        double sqroot=sqrt(n);
        double log_of_sqroot=log2(sqroot);
        if(log_of_sqroot==(int)log_of_sqroot) return true;
        return false;
    }
};