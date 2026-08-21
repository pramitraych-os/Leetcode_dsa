class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int c=0;
        int s=0;
        vector<int>freq(k,0);
        freq[0]=1;
        for(int i:nums){
            s+=i;
            int rem=(s%k+k)%k;
            c+=freq[rem];
            freq[rem]++;
        }
        return c;
    }
};