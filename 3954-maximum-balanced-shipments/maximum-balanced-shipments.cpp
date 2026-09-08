class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        stack<int>s;
        int c=0;
        for(int i:weight){
            if(!s.empty()&&s.top()>i){
                c++;
                while(!s.empty()){
                    s.pop();
                }
            }else{
                s.push(i);
            }
        }
        return c;
    }
};