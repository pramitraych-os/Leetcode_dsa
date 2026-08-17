class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>m(26,0);
        for(char c:s){
            m[c-'a']++;
        }
        int n=s.length();
        string ans(n,' ');
        int l=0,r=n-1;
        for(int i=0;i<26;i++){
            while(m[i]>=2){
                ans[l++]=char('a'+i);
                ans[r--]=char('a'+i);
                m[i]-=2;
            }
            if(m[i]==1){
                ans[s.length()/2]=char('a'+i);
            }
        }
        return ans;
    }
};