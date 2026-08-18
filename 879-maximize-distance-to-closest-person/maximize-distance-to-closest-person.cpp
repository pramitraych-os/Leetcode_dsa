class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int d=0;
        int cnt=0;
        bool f=false;
        for(int i=0;i<seats.size();i++){
            if(seats[i]==1){
                if(!f){
                    d=i;
                    f=true;
                }else{
                    d=max(d,(cnt+1)/2);
                }
                cnt=0;
            }else{
                cnt++;
            }
        }
        d=max(d,cnt);
        return d;
    }
};