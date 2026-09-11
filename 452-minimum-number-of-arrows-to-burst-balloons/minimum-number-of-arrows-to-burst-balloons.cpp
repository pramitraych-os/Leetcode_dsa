class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& pnt) {
        sort(pnt.begin(),pnt.end(),[](const auto &a,const auto &b){
            return a[1]<b[1];
        });
        int c=1;
        int cur=pnt[0][1];
        for(int i=1;i<pnt.size();i++){
            if(pnt[i][0]>cur){
                c++;
                cur=pnt[i][1];
            }
        }
        return c;
    }
};