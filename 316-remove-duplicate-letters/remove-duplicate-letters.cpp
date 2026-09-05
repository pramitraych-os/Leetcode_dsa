class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        vector<bool>u(26,false);
        string str;
        for(char c:s){
            freq[c-'a']--;
            if(u[c-'a']){
                continue;
            }
            while(!str.empty()&&c<str.back()&&freq[str.back()-'a']>0){
                u[str.back()-'a']=false;
                str.pop_back();
            }
            str.push_back(c);
            u[c-'a']=true;
        }
        return str;
    }
};