class Solution {
public:
    string makeGood(string s) {
        string str="";
        for(int c:s){
            if(!str.empty()&&abs(str.back()-c)==32){
                str.pop_back();
            }else{
                str.push_back(c);
            }
        }
        return str;
    }
};