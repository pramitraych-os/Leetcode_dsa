class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        stack<int>s;
        int c=0;
        for(int i:weight){
            bool f=false;
            if(!s.empty()&&s.top()>i){
                f=true;
                s=stack<int>();
            }
            if(s.empty()&&f){
                c++;
                continue;
            }
            s.push(i);
        }
        return c;
    }
};