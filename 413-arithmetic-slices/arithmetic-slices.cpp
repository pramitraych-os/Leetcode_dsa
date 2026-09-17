class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int sum=0,c=1;
        int d=nums[0]-nums[1];
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]-nums[i+1]==d){
                c++;
                if(c>=2){
                    sum+=c-1;
                }
            }else{
                c=1;
                d=nums[i]-nums[i+1];
            }
        }
        return sum;
    }
};