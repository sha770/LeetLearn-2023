class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>arr(26,0);
        set<int>st;
        string ans="";
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']--;
            if(!st.count(s[i]-'a')){
                while(ans.size()>0 && ans.back()>s[i] && arr[ans.back()-'a']>0){
                    st.erase(ans.back()-'a');
                    ans.pop_back();
                }
                ans+=s[i];
                st.insert(s[i]-'a');
            }
        }
        return ans;
    }
};