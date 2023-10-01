class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int n=s.length();
        for(int j=0;j<n;j++){
            if(s[j]==' '){
                reverse(s,i,j-1);
                i=j+1;
            }
            
        
        }
        reverse(s,i,n-1);
        return s;
    }
    void reverse(string &s,int l,int h){
        while(l<=h){
            swap(s[l],s[h]);
            l++;
            h--;
        }
    }
};