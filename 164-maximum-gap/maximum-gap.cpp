class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m=0;
        for(int i=0;i<n-1;i++){
            m=max(abs(nums[i+1]-nums[i]),m);
        }
        return m;
    }
};