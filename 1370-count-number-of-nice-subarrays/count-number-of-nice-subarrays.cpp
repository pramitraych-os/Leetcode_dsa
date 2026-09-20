class Solution {
public:
    int exa(vector<int>&nums,int k){
        int j=0,c=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                c++;
            }
            while(c>k){
                if(nums[j]%2!=0){
                    c--;
                }
                j++;
            }
            ans+=(i-j+1);
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return exa(nums,k)-exa(nums,k-1);
    }
};