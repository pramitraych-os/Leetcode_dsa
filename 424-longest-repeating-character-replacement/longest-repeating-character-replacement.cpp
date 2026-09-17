class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int j=0;
        int maxlen=0;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            freq[s[i]-'A']++;
            cnt=max(cnt,freq[s[i]-'A']);
            if((i-j+1)-cnt>k){
                freq[s[j]-'A']--;
                j++;
            }
            maxlen=max(maxlen,i-j+1);
        }
        return maxlen;
    }
};