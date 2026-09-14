class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        for(char c:s){
            if(c==')'){
                string t="";
                while(!st.empty()&&st.top()!='('){
                    t+=st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
                for(char ch:t){
                    st.push(ch);
                }
            }else{
                st.push(c);
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};