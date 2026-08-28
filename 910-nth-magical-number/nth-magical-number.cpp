class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long mod=1e9+7;
        long long l=1;long long r=(long long)n*min(a,b);
        long long lc=lcm((long long)a,(long long)b);
        while(l<r){
            long long mid=l+(r-l)/2;
            long long cnt=mid/a+mid/b-mid/lc;
            if(cnt>=n){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l%mod;
    }
};