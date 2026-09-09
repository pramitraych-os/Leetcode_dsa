class Solution {
public:
    int scoreOfParentheses(string str) {
        stack<int>s;
        s.push(0);
        for(char c:str){
            if(c=='('){
                s.push(0);
            }else{
                int n=s.top();
                s.pop();
                int sum=(n==0)?1:2*n;
                s.top()+=sum;
            }
        }
        return s.top();
    }
};