class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1) return 1;
        int mx=INT_MIN,mn=INT_MAX;
        for(int i:nums){
            mx=max(i,mx);
            mn=min(i,mn);
        }
        int ind1,ind2;
        for(int i=0;i<n;i++){
            if(nums[i]==mx){
                ind1=i;
            }else if(nums[i]==mn){
                ind2=i;
            }
        }
        int a=min(ind1,ind2),b=max(ind1,ind2);
        return min({b+1,n-a,a+1+n-b});
    }
};