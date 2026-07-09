class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char t) {
        int l=0,r=a.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(a[mid]<=t){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return a[l%a.size()];
    }
};