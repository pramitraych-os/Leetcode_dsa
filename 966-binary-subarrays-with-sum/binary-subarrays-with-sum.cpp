class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>m;
        m[0]=1;
        int s=0,c=0;
        for(int i:nums){
            s+=i;
            int t=s-goal;
            if(m.find(t)!=m.end()){
                c+=m[t];
            }
            m[s]++;
        }
        return c;
    }
};