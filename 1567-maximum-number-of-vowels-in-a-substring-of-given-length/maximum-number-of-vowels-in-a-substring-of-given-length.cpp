class Solution {
public:
    bool isp(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int c=0;
        for(int i=0;i<k;i++){
            if(isp(s[i])){
                c++;
            }
        }
        int mxcnt=c;
        for(int i=k;i<s.length();i++){
            if(isp(s[i])){
                c++;
            }
            if(isp(s[i-k])){
                c--;
            }
            mxcnt=max(mxcnt,c);
        }
        return mxcnt;
    }
};