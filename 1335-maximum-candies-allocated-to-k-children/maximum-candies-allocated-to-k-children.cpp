class Solution {
public:
    bool isp(vector<int>&a,long long k,int mid){
        long long c=0;
        for(int i:a){
            c+=i/mid;
            if(c>=k){
                return true;
            }
        }
        return c>=k;
    }
    int maximumCandies(vector<int>& a, long long k) {
        int l=1,r=0;
        for(int i:a){
            r=max(r,i);
        }
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isp(a,k,mid)){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return ans;
    }
};