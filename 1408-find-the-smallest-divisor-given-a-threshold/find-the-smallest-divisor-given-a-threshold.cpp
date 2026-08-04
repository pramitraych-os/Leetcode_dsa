class Solution {
public:
    int isp(vector<int>&nums,int t,int mid){
        int c=0;
        for(int i:nums){
            c+=(i+mid-1)/mid;
        }
        return c<=t;
    }
    int smallestDivisor(vector<int>& nums,int t) {
         int l=1;
         int r=0;
         for(int i:nums){
            r=max(r,i);
         }
         int ans=r;
         while(l<=r){
            int mid=l+(r-l)/2;
            if(isp(nums,t,mid)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
         }
         return ans;
    }
};