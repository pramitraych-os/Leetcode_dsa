class Solution {
public:
    bool isp(vector<int>&a,int days,int mid){
        int d=1,c=0;
        for(int i:a){
            if(c+i>mid){
                d++;
                c=i;
            }else{
                c+=i;
            }
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>&a, int days) {
        int l=0,r=0;
        for(int i:a){
            l=max(i,l);
        }
        r=accumulate(a.begin(),a.end(),0);
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isp(a,days,mid)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};