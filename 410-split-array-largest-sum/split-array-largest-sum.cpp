class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()){
            return -1;
        }
        int l=0,h=0;
        for(int i:nums){
            l=max(l,i);
            h+=i;
        }
        int ans=h;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(isp(nums,k,mid)){
                ans=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
    bool isp(vector<int>&nums,int k,long long mid){
        int g=1;long long s=0;
        for(int i:nums){
            if(s+i<=mid){
                s+=i;
            }else{
                g++;
                s=i;
            }
        }
        return g<=k;
    }
};