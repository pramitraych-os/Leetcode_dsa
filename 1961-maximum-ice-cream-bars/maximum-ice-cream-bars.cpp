class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int c=0;
       sort(costs.begin(),costs.end());
       for(int i:costs){
            if(i<=coins){
                coins-=i;
                c++;
            }else{
                break;
            }
       }
       return c;
    }
};