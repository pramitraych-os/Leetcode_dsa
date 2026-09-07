class Solution {
public:
    int minSwaps(string str) {
        stack<int>s;
        for(char c:str){
            if(c=='['){
                s.push(c);
            }else{
                if(!s.empty()){
                    s.pop();
                }
            }
        }
        return (s.size()+1)/2;
    }
};