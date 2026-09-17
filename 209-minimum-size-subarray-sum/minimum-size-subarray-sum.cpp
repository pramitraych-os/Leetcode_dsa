class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
        int minlen=INT_MAX;
        int sum=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=tar){
                minlen=min(minlen,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        return (minlen==INT_MAX)?0:minlen;
    }
};