class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int totalContainer=n*n;
        int totalWeight=totalContainer*w;
        if(totalWeight<=maxWeight) return totalContainer;
        else return maxWeight/w;
    }
};