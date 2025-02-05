class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int cnt=0;
        int x,y;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                 if(cnt==0) x=i;
                 else y=i;
                 cnt++;
            }

        }
        if(cnt==2&& (s1[x]==s2[y] && s1[y]==s2[x])) return true;
        if(cnt==0) return true;
        return false;

    }
};