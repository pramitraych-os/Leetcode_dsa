class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>s;
        unordered_map<int,int>m;
        for(int num:nums2){
            while(!s.empty()&&s.back()<num){
                m[s.back()]=num;
                s.pop_back();
            }
            s.push_back(num);
        }
        vector<int>res;
        for(int i:nums1){
            if(m.count(i)){
                res.push_back(m[i]);
            }else{
                res.push_back(-1);
            }
        }
        return res;
    }
};