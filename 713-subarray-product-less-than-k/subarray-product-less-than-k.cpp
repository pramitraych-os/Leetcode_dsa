typedef long long ll;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int sum=0;
        ll p=1;
        int j=0;
        for(int i=0;i<nums.size()&&j<nums.size();i++){
            p*=nums[i];
            while(p>=k){
                p=(ll)p/nums[j];
                j++;
            }
            sum+=(i-j+1);
        }
        return sum;
    }
};