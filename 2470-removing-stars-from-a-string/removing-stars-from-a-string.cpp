class Solution {
public:
    string removeStars(string s) {
        string str="";
        for(char c:s){
            if(!str.empty()&&c=='*'){
                str.pop_back();
            }else{
                str.push_back(c);
            }
        }
        return str;
    }
};