class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int c=0,mx=0;
        for(int i:weight){
            mx=max(i,mx);
            if(i<mx){
                c++;
                mx=0;
            }
        }
        return c;
    }
};