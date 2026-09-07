class Solution {
public:
    int minimumDeletions(string s) {
        stack<int>str;
        int cnt=0;
        for(char c:s){
            if(!str.empty()&&str.top()>c){
                str.pop();
                cnt++;
            }else{
                str.push(c);
            }
        }
        return cnt;
    }
};