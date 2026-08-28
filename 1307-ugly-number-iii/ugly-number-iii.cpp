typedef long long ll;
class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        ll l=1,r=(ll)n*min({a,b,c});
        ll A=lcm((ll)a,(ll)b);
        ll B=lcm((ll)b,(ll)c);
        ll C=lcm((ll)a,(ll)c);
        ll D=lcm(lcm((ll)a,(ll)b),(ll)c);
        while(l<r){
            ll mid=l+(r-l)/2;
            ll cnt=mid/a+mid/b+mid/c-mid/A-mid/B-mid/C+mid/D;
            if(cnt>=n){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};