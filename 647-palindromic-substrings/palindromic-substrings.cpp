class Solution {
public:
    int ispal(string &s,int l,int r){
        int c=0;
        while(l>=0&&r<s.length()&&s[l]==s[r]){
            c++;
            l--;r++;
        }
        return c;
    }
    int countSubstrings(string s) {
        int cnt=0;
        for(int i=0;i<s.length();i++){
            cnt+=ispal(s,i,i);
            cnt+=ispal(s,i,i+1);
        }
        return cnt;
    }
};