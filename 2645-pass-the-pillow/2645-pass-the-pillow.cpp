class Solution {
public:
    int passThePillow(int n, int time) {
        if (time<n) return time+1;
         int passes=time/(n-1);
         if(passes%2!=0){
            return n-time%(n-1);
         }
         return 1+time%(n-1);
    }
};