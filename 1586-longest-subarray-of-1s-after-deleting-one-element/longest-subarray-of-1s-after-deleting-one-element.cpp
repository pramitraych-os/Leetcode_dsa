class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int j=0,sum=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }
            while(c>1){
                if(nums[j]==0){
                    c--;
                }
                j++;
            }
            sum=max(sum,i-j);
        }
        return sum;
    }
};