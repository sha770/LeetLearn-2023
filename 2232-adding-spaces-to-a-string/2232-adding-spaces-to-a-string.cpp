class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int i=0;
        int p=0;
       while(i<s.length()&& p<spaces.size()){
        if(i==spaces[p]){
            ans+=" ";
            p++;
        }
        else ans+=s[i++];
       }
       while(i<s.length()){
        ans+=s[i++];
       }
        return ans;
    }
};