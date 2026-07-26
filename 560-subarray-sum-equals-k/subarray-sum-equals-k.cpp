class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int s=0;int c=0;
        for(int i:nums){
            s+=i;
            int t=s-k;
            if(m.find(t)!=m.end()){
                c+=m[t];
            }
            m[s]++;
        }
        return c;
    }
};