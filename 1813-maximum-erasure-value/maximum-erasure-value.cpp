class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,bool>m;
        int j=0;
        int csum=0;
        int mx=0;
        for(int i=0;i<nums.size();i++){
            while(m[nums[i]]){
                csum-=nums[j];
                m[nums[j]]=false;
                j++;
            }
            m[nums[i]]=true;
            csum+=nums[i];
            mx=max(mx,csum);
        }
        return mx;
    }
};