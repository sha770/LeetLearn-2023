class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>mp;
        unordered_map<int,set<int>>mp2;
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            if(mp.find(queries[i][0])==mp.end()){
                mp[queries[i][0]]=queries[i][1];
                mp2[queries[i][1]].insert(queries[i][0]);
            }
            else{
                int color=mp[queries[i][0]];
                mp2[color].erase(queries[i][0]);
                if(mp2[color].empty()){
                    mp2.erase(color);
                }
                mp[queries[i][0]]=queries[i][1];
                mp2[queries[i][1]].insert(queries[i][0]);
            }
            ans.push_back(mp2.size());
        }
        return ans;
    }
};