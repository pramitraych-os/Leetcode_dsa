class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size();
        while(l<h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            //
            if(nums[mid]>=nums[l]){
                if(target>=nums[l]&& target<nums[mid]){
                    h=mid;
                }else{
                    l=mid+1;
                }
            }else{
                if(target>nums[mid]&& target<=nums[h-1]){
                    l=mid+1;
                }else{
                    h=mid;
                }
            }
        }
        return -1;
    }
};