class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j=0;
        int mx=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt+=nums[i];
            if((i-j+1)-cnt>k){
                cnt-=nums[j];
                j++;
            }
            mx=max(mx,i-j+1);
        }
        return mx;
    }
};