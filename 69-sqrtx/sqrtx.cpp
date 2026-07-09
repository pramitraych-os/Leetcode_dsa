class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        long long l=1;
        long long r=x/2;
        long long ans=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long sqr=mid*mid;
            if(sqr==x){
                return (int)mid;
            }else if(sqr<x){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return (int)ans;
    }
};