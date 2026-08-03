class Solution {
public:
    int minEatingSpeed(vector<int>& p,int h) {
        int l=1;
        int r=p[0];
        for(int i:p){
            r=max(i,r);
        }
        int ans=r;
        while(l<=r){
            int k=l+(r-l)/2;
            if(al(p,h,k)){
                ans=k;
                r=k-1;
            }else{
                l=k+1;
            }
        }
        return ans;
    }
    bool al(vector<int>&p,int h,int k){
        long long c=0;
        for(int i:p){
            c+=(i+k-1)/k;
        }
        return c<=h;
    }
};