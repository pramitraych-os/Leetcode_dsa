class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int c=0;
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                c++;
            }else if(s[i]==')'){
                if(c>0){
                    c--;
                }else{
                    s[i]='*';
                }
            }
        }
        for(int i=s.length()-1;i>=0&&c>0;i--){
            if(s[i]=='('){
                s[i]='*';
                c--;
            }
        }
        for(char c:s){
            if(c!='*'){
                str+=c;
            }
        }
        return str;
    }
};