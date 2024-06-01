class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int n=votes[0].size();

        vector<vector<int>>rank(26,vector<int>(n,0));
        for(string &voter:votes){
            for(int i=0;i<voter.length();i++){
                rank[voter[i]-'A'][i]++;
            }
        }
        vector<pair<vector<int>,char>>v(26);
        for(int i=0;i<26;i++){
            v[i]={rank[i],(i+'A')};
        }
        sort(v.begin(),v.end(),[](pair<vector<int>,char> &a, pair<vector<int>,char>& b){
            return (a.first>b.first)||(a.first==b.first && a.second<b.second);
        });
        string res="";
        for(int i=0;i<min(26,n);i++){
            res+=v[i].second;
        }
        return res;
    }
};